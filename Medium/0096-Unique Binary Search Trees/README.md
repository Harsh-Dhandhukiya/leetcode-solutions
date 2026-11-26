# 96. Unique Binary Search Trees

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/unique-binary-search-trees/

## Problem

Given an integer `n`, return the number of structurally unique **BSTs** (binary search trees) that store exactly `n` nodes of unique values from `1` to `n`.

## Example 1

**Input:**

```text
n = 3
```

**Output:**

```text
5
```

**Explanation:** The five structurally unique binary search trees are:

```text
Tree 1:       Tree 2:       Tree 3:

    1             1             2
     \             \           / \
      3             2         1   3
     /               \
    2                 3


Tree 4:       Tree 5:

      3             3
     /             /
    2             1
   /               \
  1                 2
```

## Example 2

**Input:**

```text
n = 1
```

**Output:**

```text
1
```

**Explanation:** There is only one possible BST:

```text
1
```

## Constraints

```text
1 <= n <= 19
```
