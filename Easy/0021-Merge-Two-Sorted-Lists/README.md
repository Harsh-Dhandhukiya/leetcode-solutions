# 21. Merge Two Sorted Lists

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/merge-two-sorted-lists/

## Problem

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one **sorted list**. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

## Examples

### Example 1

**Input:**

```text
list1 = [1,2,4]
list2 = [1,3,4]
```

**Output:**

```text
[1,1,2,3,4,4]
```

### Example 2

**Input:**

```text
list1 = []
list2 = []
```

**Output:**

```text
[]
```

### Example 3

**Input:**

```text
list1 = []
list2 = [0]
```

**Output:**

```text
[0]
```

## Constraints

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in **non-decreasing order**.

## Approach

Use two pointers, one for each linked list:

1. Create a dummy node to simplify handling the head of the merged list.
2. Compare the values of the current nodes in `list1` and `list2`.
3. Attach the smaller node to the merged list.
4. Move the pointer of the list from which the node was selected.
5. Continue until one list is exhausted.
6. Attach the remaining nodes from the other list.
7. Return `dummy.next`.

## Complexity

- **Time:** `O(n + m)`
- **Space:** `O(1)` auxiliary space

Where `n` and `m` are the number of nodes in `list1` and `list2`.
