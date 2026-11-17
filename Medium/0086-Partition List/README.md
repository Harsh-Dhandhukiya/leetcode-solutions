# 86. Partition List

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/partition-list/

## Problem Description

Given the `head` of a linked list and a value `x`, partition it such that all nodes **less than `x`** come before nodes **greater than or equal to `x`**.

You should preserve the original relative order of the nodes in each of the two partitions.

## Visual Representation

### Example 1

**Input:**

```text
head = [1, 4, 3, 2, 5, 2]
x = 3
```

**Partition Process:**

- Nodes less than `3`: `1 → 2 → 2`
- Nodes greater than or equal to `3`: `4 → 3 → 5`

**Output:**

```
[1, 2, 2, 4, 3, 5]
```

### **Example 2**

**Input:**

```
head = [2, 1]
x = 2
```

**Partition Process:**

- Nodes less than `2`: `1`
- Nodes greater than or equal to `2`: `2`

**Output:**

```
[1, 2]
```

## **Constraints**

- The number of nodes in the list is in the range `[0, 200]`.
- `-100 <= Node.val <= 100`
- `-200 <= x <= 200`

## **Key Idea**

We need to divide the linked list into two separate partitions:

1. **First Partition:** Contains all nodes with values less than `x`.
2. **Second Partition:** Contains all nodes with values greater than or equal to `x`.

Finally, connect both partitions while preserving the original relative order of their nodes.

## **Visual Summary**

```
             ORIGINAL LINKED LIST

    (1) → (4) → (3) → (2) → (5) → (2)
                    |
                    |  x = 3
                    ↓

             AFTER PARTITION

    (1) → (2) → (2) → (4) → (3) → (5)
     └───────┘         └────────────┘
       < x                >= x
```

**Expected Output:**

```
1 → 2 → 2 → 4 → 3 → 5
```
