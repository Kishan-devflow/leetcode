# Min Stack

- **Difficulty:** Medium
- **LeetCode Link:** [Min Stack](https://leetcode.com/problems/min-stack/)

## Problem Description

Design a stack that supports pushing, popping, reading the top value, and finding the minimum value, all in constant time.

## Approach

Store each value along with the minimum value seen at that stack depth. The minimum for the current stack is therefore available at its top.

## Algorithm / Steps

1. On push, save the value and the smaller of it and the previous minimum.
2. On pop, decrease the size; the previous minimum becomes current again.
3. Read the top value and minimum from the last occupied position.

## Time Complexity

O(1) for each operation.

## Space Complexity

O(n) for the value and minimum arrays.

## Test Case 1 - Typical Case

- Operations: `push(-2), push(0), push(-3), getMin(), pop(), top(), getMin()`
- Expected output: `-3, -2, -2`

## Test Case 2 - Edge Case

- Operations: `push(7), top(), getMin()`
- Expected output: `7, 7`

## Expected Output

The local test program prints:

```text
Typical case minimum: -3
Typical case top: 0, minimum: -2
Edge case top: 7, minimum: 7
```

## Notes / Edge Cases

The local implementation uses a fixed capacity of 10,000 values, matching the problem's operation limit. `top` and `getMin` require a non-empty stack, as in the problem's valid operation sequence.

## What I Learned

I learned that keeping extra information alongside each stack entry can make minimum lookup constant time.
