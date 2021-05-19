#!/bin/bash
# wcr - watch, compile, run!

clear
echo -e "\e[91mwatch, compile, run\e[0m watching for changes on $1...\n"

inotifywait -q -m -e close_write --format %e $1 |
while read events; do
    clear
    echo -e "\e[91mwatch, compile, run\e[0m watching for changes on $1...\n"
    
    clang -Wall -o program $1
    echo -e "\n== Output =="
    ./program
    echo "== End of Output =="
done