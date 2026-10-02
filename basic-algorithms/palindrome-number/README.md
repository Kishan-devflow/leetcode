# Palindrome Number

- **Difficulty:** Easy
- **LeetCode Link:** [Palindrome Number](https://leetcode.com/problems/palindrome-number/)

## Problem Description

Determine whether an integer reads the same forwards and backwards.

## Approach

Reject negative values and values ending in zero (except zero itself). Reverse only half of the number to avoid building a potentially overflowing full reverse.

## Algorithm / Steps

1. Return false for a negative value or a nonzero value ending in zero.
2. Move digits from the number to a reversed-half value until the reversed half is at least as large as the remaining half.
3. Compare the halves, ignoring the middle digit when the digit count is odd.

## Time Complexity

O(log n), proportional to the number of digits.

## Space Complexity

O(1).

## Test Case 1 - Typical Case

- Input: `x = 121`
- Expected output: `true`

## Test Case 2 - Edge Case

- Input: `x = -121`
- Expected output: `false`

## Expected Output

The local test program prints:

```text
Typical case: true
Edge case: false
```

## Notes / Edge Cases

Zero is a palindrome. Negative signs and trailing zeroes prevent a number from being a palindrome, except for zero itself.

## What I Learned

I practiced working with digits using division and remainder, and avoiding integer overflow by reversing only half the digits.
