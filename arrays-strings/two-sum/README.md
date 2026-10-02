# Two Sum

- **Difficulty:** Easy
- **LeetCode Link:** [Two Sum](https://leetcode.com/problems/two-sum/)

## Problem Description

Given an integer array and a target, return the indices of two different numbers that add up to the target.

## Approach

Check each possible pair. This is a straightforward approach that is easy to follow for a small input.

## Algorithm / Steps

1. Start with the first number.
2. Compare it with each number after it.
3. Return the two indices when their sum equals the target.

## Time Complexity

O(n^2), where `n` is the number of values.

## Space Complexity

O(1) extra space, excluding the two-element result array.

## Test Case 1 - Typical Case

- Input: `nums = [2, 7, 11, 15]`, `target = 9`
- Expected output: `[0, 1]`

## Test Case 2 - Edge Case

- Input: `nums = [3, 2, 4]`, `target = 6`
- Expected output: `[1, 2]`

## Expected Output

The local test program prints:

```text
Typical case: [0, 1]
Edge case: [1, 2]
```

## Notes / Edge Cases

The two indices must be different. The function returns a dynamically allocated result, which the caller must free.

## What I Learned

I practiced nested loops, array indexing, and returning a small dynamically allocated result from a C function.
