# Binary Search

- **Difficulty:** Easy
- **LeetCode Link:** [Binary Search](https://leetcode.com/problems/binary-search/)

## Problem Description

Given a sorted integer array and a target, return the target's index or `-1` if it is not present.

## Approach

Use binary search to repeatedly check the middle of the part of the array where the target may be.

## Algorithm / Steps

1. Set the search range to the full array.
2. Check the middle value.
3. Keep the left half if the target is smaller, or the right half if it is larger.
4. Stop when the target is found or the range is empty.

## Time Complexity

O(log n), where `n` is the number of values.

## Space Complexity

O(1).

## Test Case 1 - Typical Case

- Input: `nums = [-1, 0, 3, 5, 9, 12]`, `target = 9`
- Expected output: `4`

## Test Case 2 - Edge Case

- Input: `nums = []`, `target = 5`
- Expected output: `-1`

## Expected Output

The local test program prints:

```text
Typical case: 4
Edge case: -1
```

## Notes / Edge Cases

The input array must be sorted. The middle index calculation avoids adding the two bounds directly.

## What I Learned

I learned how a sorted array lets binary search remove half of the remaining possibilities each time.
