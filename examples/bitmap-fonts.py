#!/usr/bin/env python3
import PIL.Image, re

font_bytes = []

# Open the image
with PIL.Image.open('workshop-mono.png') as image:
    # Scan each character, going along each row left to right
    for row in range(0, image.height, 8):
        for col in range(0, image.width, 8):
            # Append each vertical line as a new byte
            for line in range(8):
                bits = 0
                # Going "backwards" is a neat compression trick which Nick will explain
                for pixel in range(7, -1, -1):
                    # Black = 1, white = 0
                    # [:3] ignores any alpha channel if it exists
                    if image.getpixel((col + line, row + pixel))[:3] == (0, 0, 0):
                        bits = (bits << 1) | 1
                    else:
                        bits = (bits << 1)

                # Write this byte to the list of bytes
                font_bytes.append(bits)

    # Convert the font bytes into a C string
    c_string = ''
    for byte in font_bytes:
        if byte < 8:
            # Lower bytes are particularly common, so use their single octal digit form
            c_string += f'\\{byte}'
        elif byte in range(7, 14):
            # These bytes have a specific single character representation
            c_string += ['\\a', '\\b', '\\t', '\\n', '\\f', '\\r'][byte - 7]
        elif byte in range(32, 127):
            # Handle " and \ specially, but just use the literal character otherwise
            if byte == 34:
                c_string += '\\"'
            elif byte == 92:
                c_string += '\\\\'
            else:
                c_string += chr(byte)
        else:
            # For other characters, use the \xHH representation
            c_string += f'\\x{byte:02x}'

    # Deal with a weird quirk in C which Nick will explain, and add double quotes
    c_string = '"' + re.sub(r'(\\x[0-9a-f][0-9a-f])([0-9A-Fa-f])', r'\1""\2', c_string) + '"'
    
    # Print the resulting C string
    print(c_string)