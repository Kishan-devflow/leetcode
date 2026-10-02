# Merge Two Sorted Lists

- **Difficulty:** Easy
- **LeetCode Link:** [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)

## Problem Description

Merge two sorted singly linked lists into one sorted list and return its head.

## Approach

Use a temporary dummy node to make building the result simpler. Reuse the existing nodes in sorted order.

## Algorithm / Steps

1. Compare the current nodes from both lists.
2. Link the smaller node to the result and move that list forward.
3. Continue until one list ends.
4. Link the remaining nodes to the result and return its head.

## Time Complexity

O(m + n), where `m` and `n` are the lengths of the lists.

## Space Complexity

O(1) extra space; the existing nodes are reused.

## Test Case 1 - Typical Case

- Input: `list1 = 1 -> 2 -> 4`, `list2 = 1 -> 3 -> 4`
- Expected output: `1 -> 1 -> 2 -> 3 -> 4 -> 4`

## Test Case 2 - Edge Case

- Input: `list1 = empty`, `list2 = 5`
- Expected output: `5`

## Expected Output

The local test program prints:

```text
Typical case: 1 -> 1 -> 2 -> 3 -> 4 -> 4
Edge case: 5
```

## Notes / Edge Cases

If either list is empty, the other list is already the merged result. Both input lists must be sorted.

## What I Learned

I learned how to combine two sorted linked lists by changing existing node links and using a dummy node.
