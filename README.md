# DSA Assignments

This repository contains Data Structures and Algorithms assignments implemented in the C programming language.

The repository currently contains implementations of:

1. Stack using Array
2. Circular Queue using Array

---

## Repository Structure

```text
DSA-Assignments/
│
├── Q1-Stack-Using-Array/
│   ├── stack.c
│   └── README.md
│
├── Q2-Circular-Queue/
│   ├── circular_queue.c
│   └── README.md
│
├── README.md
└── .gitignore
```

---

## Q1. Stack Using Array

The first assignment implements a Stack using a fixed-size array without using any built-in stack library.

### Supported Operations
- `PUSH(x)`
- `POP()`
- `PEEK()`
- `DISPLAY()`

### Error Handling
- Stack Overflow
- Stack Underflow

### Complexity
| Operation | Complexity |
|---|---|
| PUSH | $O(1)$ |
| POP | $O(1)$ |
| PEEK | $O(1)$ |
| DISPLAY | $O(n)$ |

---

## Q2. Circular Queue Using Array

The second assignment implements a Circular Queue using an array.

### Supported Operations
- `ENQUEUE(x)`
- `DEQUEUE()`
- `FRONT()`
- `DISPLAY()`

### Error Handling
- Queue Overflow
- Queue Underflow

### Complexity
| Operation | Complexity |
|---|---|
| ENQUEUE | $O(1)$ |
| DEQUEUE | $O(1)$ |
| FRONT | $O(1)$ |
| DISPLAY | $O(n)$ |

---

## Technologies Used
- **Programming Language:** C
- **Data Structures:** Stack and Circular Queue
- **Compiler:** GCC
- **Version Control:** Git
- **Repository Hosting:** GitHub

---

## Learning Objectives

Through these implementations, the following concepts are demonstrated:
- Arrays
- Stack data structure
- Queue data structure
- LIFO principle
- FIFO principle
- PUSH and POP operations
- ENQUEUE and DEQUEUE operations
- Overflow and Underflow
- Circular indexing
- Modulo operator
- Time complexity
- Space complexity
- Fixed-size data structures
- False overflow in linear queues

---

## How to Run

### Clone the Repository
```bash
git clone https://github.com/dy506214-ux/C-DSA-ASSIGNMENT-1.git
```

Move into the repository:
```bash
cd C-DSA-ASSIGNMENT-1
```

### Run Stack Program
Navigate to:
```bash
cd Q1-Stack-Using-Array
```

Compile:
```bash
gcc stack.c -o stack
```

Run:
```bash
./stack
```
*On Windows:*
```bash
stack.exe
```

### Run Circular Queue Program
Navigate to:
```bash
cd ../Q2-Circular-Queue
```

Compile:
```bash
gcc circular_queue.c -o circular_queue
```

Run:
```bash
./circular_queue
```
*On Windows:*
```bash
circular_queue.exe
```

---

## Author

**Dhirendra Kumar Yadav**  
BCA Computer Science  
Data Structures and Algorithms Assignment
