# 83. Remove Duplicates from Sorted List

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-list/

## Problem Description

Given the `head` of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

## Example 1

**Input:**

```text
head = [1,1,2]
```

**Visualization:**

Before:

```text
    ┌───┐     ┌───┐     ┌───┐
    │ 1 │ ──> │ 1 │ ──> │ 2 │ ──> NULL
    └───┘     └───┘     └───┘
```

After:

```text
    ┌───┐     ┌───┐
    │ 1 │ ──> │ 2 │ ──> NULL
    └───┘     └───┘
```

**Output:**

```text
[1,2]
```

## Example 2

**Input:**

```text
head = [1,1,2,3,3]
```

**Visualization:**

Before:

```text
    ┌───┐     ┌───┐     ┌───┐     ┌───┐     ┌───┐
    │ 1 │ ──> │ 1 │ ──> │ 2 │ ──> │ 3 │ ──> │ 3 │ ──> NULL
    └───┘     └───┘     └───┘     └───┘     └───┘
```

After:

```text
    ┌───┐     ┌───┐     ┌───┐
    │ 1 │ ──> │ 2 │ ──> │ 3 │ ──> NULL
    └───┘     └───┘     └───┘
```

**Output:**

```text
[1,2,3]
```

## Constraints

- The number of nodes in the list is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`.
- The list is guaranteed to be sorted in ascending order.
