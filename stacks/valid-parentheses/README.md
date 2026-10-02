# Valid Parentheses

- **Difficulty:** Easy
- **LeetCode Link:** [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

## Problem Description

Check whether every opening bracket in a string is closed by the correct type of bracket, in the correct order.

## Approach

Use a stack. Save opening brackets and compare each closing bracket with the most recent opening bracket.

## Algorithm / Steps

1. Push each opening bracket onto the stack.
2. For a closing bracket, fail if the stack is empty or its top is not the matching opening bracket.
3. After processing the string, it is valid only if the stack is empty.

## Time Complexity

O(n), where `n` is the string length.

## Space Complexity

O(n) for the stack.

## Test Case 1 - Typical Case

- Input: `s = "()[]{}"`
- Expected output: `true`

## Test Case 2 - Edge Case

- Input: `s = ""`
- Expected output: `true`

## Expected Output

The local test program prints:

```text
Typical case: true
Edge case: true
```

## Notes / Edge Cases

An early closing bracket and leftover opening brackets both make the string invalid. The local test uses dynamically allocated stack storage.

## What I Learned

I learned how a stack's last-in, first-out order helps match nested brackets.
