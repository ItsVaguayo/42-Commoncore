#!/bin/bash

MAX_STACK_SIZE=1000

SIZE=${1:-100}

if [ "$SIZE" -gt "$MAX_STACKS_SIZE" ]; then
    echo "Error: Maximum stack size allowed is $MAX_STACK_SIZE."
    exit 1
fi

LIMIT=$((SIZE * 2))
TESTS=50
S=0

if [ ! -f "./push_swap" ]; then
    echo "Error: ./push_swap not found in this directory."
    exit 1
fi

echo "Running $TESTS tests with stack size $SIZE (Range: -$LIMIT to $LIMIT)...\n"

for i in $(seq 1 $TESTS); do
    ARG=$(seq -$LIMIT $LIMIT | shuf -n $SIZE | tr '\n' ' ')
    L=$(./push_swap $ARG | wc -l)
    echo "Test $i: $L"
    S=$((S+L))
done

echo "-----------------"
echo "Average: $((S/TESTS))"
