# Q1. Stack Implementation Using Array

## Objective

Design and implement a Stack using an array without using any built-in stack library.

The implementation supports the following operations:

- PUSH(x)
- POP()
- PEEK()
- DISPLAY()

It also handles:

- Stack Overflow
- Stack Underflow

---

## What is a Stack?

A Stack is a linear data structure that follows the:

**LIFO (Last In, First Out)** principle.

The element inserted last is removed first.

### Example

If we perform:

```text
PUSH(10)  
PUSH(20)  
PUSH(30)
```

The stack becomes:

```text
30 ← TOP
20
10
```

If POP() is performed, 30 will be removed first.

---

## Operations

### 1. PUSH(x)

The PUSH operation inserts an element at the top of the stack.

Before inserting, the program checks whether the stack is full.

Condition:

```text
top == MAX - 1
```

If this condition is true, Stack Overflow occurs.

### 2. POP()

The POP operation removes the top element from the stack.

Before removing, the program checks whether the stack is empty.

Condition:

```text
top == -1
```

If this condition is true, Stack Underflow occurs.

### 3. PEEK()

PEEK returns/displays the top element without removing it.

### 4. DISPLAY()

DISPLAY prints all elements from TOP to BOTTOM.

---

## Stack Overflow & Underflow

### Stack Overflow

Stack Overflow occurs when we try to insert an element into a completely full stack.

For example, if the stack capacity is 5:

```text
10
20
30
40
50
```

Trying to PUSH another element causes Stack Overflow.

### Stack Underflow

Stack Underflow occurs when we try to POP an element from an empty stack.

For example:

```text
Stack is empty
```

Trying to perform POP() results in Stack Underflow.

---

## Complexity Analysis

### Time Complexity

| Operation | Time Complexity |
|---|---|
| PUSH | $O(1)$ |
| POP | $O(1)$ |
| PEEK | $O(1)$ |
| DISPLAY | $O(n)$ |

### Space Complexity

The array requires:

$$O(n)$$

space, where $n$ is the maximum stack capacity.

For this implementation:

`MAX = 5`

Therefore, the stack has a fixed capacity of 5 elements.

---

## Fixed Capacity Behavior

This implementation uses a static array:

```c
#define MAX 5
```

Therefore, the stack can store a maximum of 5 elements.

If more than 5 elements are inserted, Stack Overflow occurs.

The capacity cannot automatically increase because the stack is implemented using a fixed-size array.

---

## Compilation and Execution

Using GCC:

```bash
gcc stack.c -o stack
```

Run on Linux/macOS:

```bash
./stack
```

Run on Windows:

```bash
stack.exe
```

---

## Conclusion

The program successfully implements a Stack using an array without using any built-in stack library. It supports PUSH, POP, PEEK, and DISPLAY operations and correctly handles Stack Overflow and Stack Underflow conditions.
