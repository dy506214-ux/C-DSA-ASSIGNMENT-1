# Q2. Circular Queue Implementation Using Array

## Objective

Implement a Circular Queue using an array.

The implementation supports:

- ENQUEUE(x)
- DEQUEUE()
- FRONT()
- DISPLAY()

The program correctly distinguishes between full and empty queue conditions.

---

## What is a Queue?

A Queue is a linear data structure that follows the:

**FIFO (First In, First Out)** principle.

The element inserted first is removed first.

For example:

```text
10 → 20 → 30
↑           ↑
FRONT       REAR
```

The element 10 will be removed first.

---

## What is a Circular Queue?

A Circular Queue is a queue in which the last position is logically connected to the first position.

It allows previously unused positions at the beginning of the array to be reused.

The circular movement is achieved using:

```text
(rear + 1) % MAX
```

and:

```text
(front + 1) % MAX
```

---

## Operations

### 1. ENQUEUE(x)

Adds an element at the rear of the queue.

The queue is full when:

```text
(rear + 1) % MAX == front
```

### 2. DEQUEUE()

Removes an element from the front.

If:

```text
front == -1
```

the queue is empty and Queue Underflow occurs.

### 3. FRONT()

Displays the element currently at the front without removing it.

### 4. DISPLAY()

Displays all elements from FRONT to REAR while correctly handling circular wrapping.

---

## Full and Empty Conditions

### Full Condition

The circular queue is full when:

```text
(rear + 1) % MAX == front
```

This condition allows the program to identify a full circular queue even when the rear has wrapped around to the beginning.

### Empty Condition

The queue is empty when:

```text
front == -1
```

---

## False Overflow in Linear Queue

In a normal linear queue implemented using an array, false overflow can occur.

For example, consider a queue of size 5:

```text
[10] [20] [30] [40] [50]
```

After removing 10 and 20:

```text
[ ] [ ] [30] [40] [50]
```

There are two unused positions at the beginning.

However, in a simple linear queue, if rear is already at the last index, another ENQUEUE operation may report overflow.

This is called **False Overflow** because memory is available, but the linear implementation cannot reuse the positions at the beginning.

---

## How Circular Queue Solves False Overflow

A circular queue allows the rear to move back to the beginning of the array.

For example:

```text
Index:   0    1    2    3    4
Queue:  [ ]  [ ]  [30] [40] [50]
```

After another insertion, the rear can wrap around:

```text
Index:   0    1    2    3    4
Queue:  [60] [ ]  [30] [40] [50]
```

The circular movement is calculated using `(rear + 1) % MAX`. Therefore, previously unused positions can be reused.

---

## Circular Queue vs Linear Queue

| Feature | Linear Queue | Circular Queue |
|---|---|---|
| Structure | Linear | Circular |
| Memory utilization | May be inefficient | Better utilization |
| Reuses deleted positions | No, not automatically | Yes |
| False Overflow | Possible | Avoided |
| ENQUEUE | $O(1)$ | $O(1)$ |
| DEQUEUE | $O(1)$ | $O(1)$ |
| FRONT | $O(1)$ | $O(1)$ |
| DISPLAY | $O(n)$ | $O(n)$ |
| Space Complexity | $O(n)$ | $O(n)$ |

---

## Complexity Analysis

### Time Complexity

| Operation | Time Complexity |
|---|---|
| ENQUEUE | $O(1)$ |
| DEQUEUE | $O(1)$ |
| FRONT | $O(1)$ |
| DISPLAY | $O(n)$ |

### Space Complexity

The circular queue uses a fixed-size array:

$$\text{Space Complexity} = O(n)$$

where $n$ represents the queue capacity.

---

## Fixed Capacity

This implementation uses:

```c
#define MAX 5
```

Therefore, the queue can hold a maximum of 5 elements at a time. When the queue becomes full, another ENQUEUE operation produces Queue Overflow.

---

## Compilation and Execution

Using GCC:

```bash
gcc circular_queue.c -o circular_queue
```

Run on Linux/macOS:

```bash
./circular_queue
```

Run on Windows:

```bash
circular_queue.exe
```

---

## Conclusion

The program successfully implements a Circular Queue using an array. It supports ENQUEUE, DEQUEUE, FRONT, and DISPLAY operations and correctly handles full and empty conditions.

The circular structure also prevents false overflow by allowing the rear to wrap around and reuse previously freed positions.
