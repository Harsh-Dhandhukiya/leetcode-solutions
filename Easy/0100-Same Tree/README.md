# 100. Same Tree

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/same-tree/

## Problem Description

Given the roots of two binary trees `p` and `q`, write a function to check if they are the same or not.

Two binary trees are considered the same if they are **structurally identical**, and the nodes have the **same value**.

## Examples

### Example 1

**Input:**

```text
p = [1,2,3]
q = [1,2,3]
```

**Graph Representation:**

Tree P:

```text
      1
     / \
    2   3
```

Tree Q:

```text
      1
     / \
    2   3
```

**Output:**

```text
true
```

**Explanation:** Both trees have the same structure and identical node values.

---

### Example 2

**Input:**

```text
p = [1,2]
q = [1,null,2]
```

**Graph Representation:**

Tree P:

```text
      1
     /
    2
```

Tree Q:

```text
      1
       \
        2
```

**Output:**

```text
false
```

**Explanation:** Both trees have the same node values, but their structures are different.

---

### Example 3

**Input:**

```text
p = [1,2,1]
q = [1,1,2]
```

**Graph Representation:**

Tree P:

```text
      1
     / \
    2   1
```

Tree Q:

```text
      1
     / \
    1   2
```

**Output:**

```text
false
```

**Explanation:** The trees have the same structure, but the corresponding node values are different.

---

## Constraints

- The number of nodes in both trees is in the range `[0, 100]`.
- `-10^4 <= Node.val <= 10^4`

---
