# LeetCode Solutions

**Student:** Kishan C.  
**Roll number:** Not provided

## Activity Description

This repository contains beginner-friendly C solutions for eight selected LeetCode problems as part of a second-year programming activity. Each problem folder includes a standalone source file with local tests and a short explanation of the approach.

No LeetCode submission or acceptance status is claimed here. Solutions can be submitted manually, and real screenshots can be added to `screenshots/` afterward.

## Technologies Used

- C
- GCC compiler
- Git and GitHub

## Repository Structure

```text
leetcode-solutions/
├── arrays-strings/
│   ├── two-sum/
│   └── valid-anagram/
├── basic-algorithms/
│   ├── binary-search/
│   └── palindrome-number/
├── stacks/
│   ├── valid-parentheses/
│   └── min-stack/
├── linked-lists/
│   ├── reverse-linked-list/
│   └── merge-two-sorted-lists/
├── screenshots/
├── GIT_COMMANDS.md
├── PROGRESS.md
└── README.md
```

Each problem directory contains `solution.c` and its own `README.md`.

## Table of Contents

- [Arrays & Strings](#arrays--strings)
- [Basic Algorithms](#basic-algorithms)
- [Stacks](#stacks)
- [Linked Lists](#linked-lists)
- [Local Testing](#local-testing)
- [LeetCode Submissions](#leetcode-submissions)
- [Git/GitHub Workflow](#gitgithub-workflow)
- [Learning Outcomes](#learning-outcomes)

## Problems

### Arrays & Strings

- [Two Sum](arrays-strings/two-sum/README.md) — Easy
- [Valid Anagram](arrays-strings/valid-anagram/README.md) — Easy

### Basic Algorithms

- [Binary Search](basic-algorithms/binary-search/README.md) — Easy
- [Palindrome Number](basic-algorithms/palindrome-number/README.md) — Easy

### Stacks

- [Valid Parentheses](stacks/valid-parentheses/README.md) — Easy
- [Min Stack](stacks/min-stack/README.md) — Medium

### Linked Lists

- [Reverse Linked List](linked-lists/reverse-linked-list/README.md) — Easy
- [Merge Two Sorted Lists](linked-lists/merge-two-sorted-lists/README.md) — Easy

## Topics Covered

- Arrays, strings, and frequency counting
- Linear and binary search
- Integer digit processing
- Stacks and bracket matching
- Singly linked-list traversal and pointer updates
- Combining sorted linked lists
- Big-O time and space complexity

## Local Testing

Every `solution.c` includes a `main()` function with one typical case and one edge case. From the repository root, compile and run a problem like this:

```sh
gcc -std=c11 -Wall -Wextra -pedantic arrays-strings/two-sum/solution.c -o two-sum
./two-sum
```

Use the relevant source path and output name for other problems. On Windows, run the generated `.exe` file (for example, `two-sum.exe`).

## LeetCode Submissions

The files are prepared for local practice. To submit a solution, copy the corresponding algorithm into LeetCode's C editor, adapt or remove the local `main()` and helper code if needed, and submit it manually. Record the actual date, time, and result in [PROGRESS.md](PROGRESS.md), and add genuine screenshots to `screenshots/` only after submission. No problem is marked accepted by this repository.

## Git/GitHub Workflow

The command guide in [GIT_COMMANDS.md](GIT_COMMANDS.md) shows how to initialize the repository, make commits, connect a GitHub remote, and push to `main`. [PROGRESS.md](PROGRESS.md) is provided to track actual work and submissions.

## Learning Outcomes

- Translate problem statements into clear step-by-step algorithms.
- Write and test small C functions.
- Use arrays, loops, stacks, and linked-list pointers.
- Recognize common edge cases.
- Describe time and space complexity.
- Organize code and document progress with Git and GitHub.
