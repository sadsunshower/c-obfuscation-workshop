#!/usr/bin/env python3

import re

c_bytes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
           53, 59, 61, 67, 71, 73, 79, 83, 89, 97]

# Convert the bytes into a C string
c_string = ''
for byte in c_bytes:
    if byte < 8:
        # Lower bytes are particularly common, so use their single octal digit form
        c_string += f'\\{byte}'
    elif byte in range(7, 14):
        # These bytes have a specific single character representation
        c_string += ['\\a', '\\b', '\\t', '\\n', '\\v', '\\f', '\\r'][byte - 7]
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