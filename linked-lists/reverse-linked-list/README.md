# Reverse Linked List

- **Difficulty:** Easy
- **LeetCode Link:** [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

## Problem Description

Reverse a singly linked list and return the new head.

## Approach

Walk through the list while changing each node's `next` pointer to point to the previous node.

## Algorithm / Steps

1. Start with `previous` set to `NULL` and `current` set to the head.
2. Save the next node before changing the current link.
3. Point the current node to the previous node, then move both pointers forward.
4. Return `previous` after reaching the end.

## Time Complexity

O(n), where `n` is the number of nodes.

## Space Complexity

O(1) extra space.

## Test Case 1 - Typical Case

- Input: `1 -> 2 -> 3`
- Expected output: `3 -> 2 -> 1`

## Test Case 2 - Edge Case

- Input: an empty list
- Expected output: an empty list

## Expected Output

The local test program prints:

```text
Typical case: 3 -> 2 -> 1
Edge case:
```

## Notes / Edge Cases

The same pointer-updating steps also work for a one-node list. Save the next node before overwriting its link.

## What I Learned

I practiced changing links in a singly linked list without creating new nodes.
