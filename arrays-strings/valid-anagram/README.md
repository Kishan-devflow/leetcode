# Valid Anagram

- **Difficulty:** Easy
- **LeetCode Link:** [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

## Problem Description

Given two strings, determine whether one string can be made by rearranging all the letters of the other.

## Approach

Count how often each lowercase English letter appears in both strings. Matching counts mean the strings are anagrams.

## Algorithm / Steps

1. If the string lengths differ, return false.
2. For each position, add one to the first string's letter and subtract one for the second string's letter.
3. Return false if any count is nonzero; otherwise return true.

## Time Complexity

O(n), where `n` is the string length.

## Space Complexity

O(1), because the count array always has 26 entries.

## Test Case 1 - Typical Case

- Input: `s = "anagram"`, `t = "nagaram"`
- Expected output: `true`

## Test Case 2 - Edge Case

- Input: `s = ""`, `t = ""`
- Expected output: `true`

## Expected Output

The local test program prints:

```text
Typical case: true
Edge case: true
```

## Notes / Edge Cases

This solution uses the problem's lowercase-English-letter constraint. Empty strings are anagrams of each other.

## What I Learned

I practiced using an array as a frequency table and applying the problem's input constraints.
