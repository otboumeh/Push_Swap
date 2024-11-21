# Push Swap

## Overview

The **Push Swap** project is part of the 42 curriculum, designed to develop an efficient algorithm for sorting a stack of integers using a minimal set of operations. The project includes creating both a sorting algorithm and a checker program for validation. 
The **bonus part** extends the functionality by implementing additional features, such as advanced checker capabilities.

---

## Features

- Efficient sorting algorithm for stacks.
- Uses a minimal number of operations: `sa`, `sb`, `pa`, `pb`, `ra`, `rb`, `rra`, `rrb`, and `rrr`.
- Checker program that verifies the correctness of the algorithm.
- **Bonus part**: Additional functionality to enhance the checker program.

---

## Functions Implemented

### Core Functions

- `push_swap`  
  The sorting algorithm that sorts the stack using the least number of operations.

- `checker`  
  Verifies the correctness of the sorting algorithm by checking if the stack is sorted after performing the operations.

### Bonus Features

- **Enhanced Checker Program**:  
  The bonus functionality involves adding more advanced features to the checker program, such as verifying that the correct number of operations is used, and providing additional debugging outputs.

---

## How It Works

1. **Sorting the Stack:**  
   The algorithm uses a series of stack operations to efficiently sort the numbers while minimizing the number of operations used.

2. **Checker Program:**  
   The checker program accepts a list of operations and verifies if the stack is sorted correctly at the end.

3. **Advanced Features in Bonus:**  
   For the bonus part, the checker program includes advanced features such as better error handling and additional outputs for debugging the sorting process.

---

## Limitations

- The sorting algorithm is optimized, but the efficiency may vary depending on the number of elements and the initial order of the stack.

---

## How to Use

1. Compile the program:
   ```bash
   gcc -Wall -Wextra -Werror push_swap.c
2. Run the push_swap program to sort your stack:
     ```bash
      ./push_swap 3 2 1
3. Use the checker program to validate the sorting:
    ```bash
    ./checker 3 2 1
4. For the bonus part, use the advanced checker:
   ```bash
   ./checker_bonus 3 2 1
 ---
## Conclusion
The Push Swap project is an excellent challenge for learning algorithms and mastering efficient sorting techniques. 
Completing this project strengthens understanding of stack operations and prepares students for future challenges involving algorithm optimization. 
The bonus part adds complexity, enhancing debugging and validation capabilities.



