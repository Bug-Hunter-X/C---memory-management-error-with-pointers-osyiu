# C++ Memory Management Error with Pointers

This repository demonstrates a common error in C++ involving memory management and pointers. The bug involves attempting to delete a pointer that was not allocated using `new`, leading to undefined behavior. The solution shows how to correctly manage dynamically allocated memory to avoid this issue.

## Bug

The `bug.cpp` file contains the erroneous code. It attempts to delete a pointer that was not allocated using `new`, which is incorrect and leads to undefined behavior.

## Solution

The `bugSolution.cpp` file shows the corrected code. It avoids attempting to delete memory that wasn't dynamically allocated.

## How to run the code

Compile the code using a C++ compiler (like g++).

```bash
g++ bug.cpp -o bug
g++ bugSolution.cpp -o bugSolution
./bug
./bugSolution
```