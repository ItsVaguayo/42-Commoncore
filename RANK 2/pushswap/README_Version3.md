# push_swap

*This project has been created as part of the 42 curriculum by vaguayo-.*

---

## Description

**push_swap** is an algorithmic project from the 42 curriculum whose goal is to sort a stack of integers using a very limited set of operations and the smallest possible number of moves.

The program receives a list of integers as arguments, stores them in stack **A**, and must sort them in ascending order using an auxiliary stack **B**. Only specific operations such as swaps, pushes, and rotations are allowed.

To achieve an efficient solution, the project uses different strategies depending on the number of elements, including hardcoded small sorts and a binary-based radix sort for larger inputs.

---

## Instructions

### Compilation

To compile the project, run:

```bash
make
```

This will generate the executable:

```bash
./push_swap
```

### Usage

Run the program with a list of integers:

```bash
./push_swap 3 2 5 1 4
```

The output will be a list of operations that, when executed, will sort the stack.

### Cleaning

- Remove object files:

```bash
make clean
```

- Remove object files and executable:

```bash
make fclean
```

- Recompile everything:

```bash
make re
```

---

## Implementation Details

- Input validation ensures:
  - Only integers are accepted
  - No duplicate values
  - Values fit in a 32-bit signed integer
- Values are normalized (indexed) to handle negative numbers and simplify bitwise operations.
- Sorting strategies:
  - 2–3 elements: direct comparison
  - 4–5 elements: optimized small sort
  - More than 5 elements: binary radix sort using bitwise operations

---

## Resources

### Technical References

- Binary representation and bitwise operations in C  
   https://github.com/LeoFu9487/push_swap_tester?source=post_page-----fa746e6aba1e---------------------------------------)

- Radix Sort explanation  
   https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)

### Use of AI

AI tools (ChatGPT) were used as learning support to:

- Understand radix sort and bitwise algorithms
- Explain algorithmic complexity and optimization strategies

All code was written, structured, and debugged manually by the author.

---
