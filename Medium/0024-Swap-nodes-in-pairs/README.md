# 24. Swap Nodes in Pairs

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/swap-nodes-in-pairs/

## Problem

Given a linked list, swap every two adjacent nodes and return its head.

You must solve the problem **without modifying the values** in the list's nodes. Only the nodes themselves may be changed.

## Examples

### Example 1

**Input:**

```text
head = [1,2,3,4]
```

**Output:**

```text
[2,1,4,3]
```

**Explanation:**

The linked list:

```text
1 -> 2 -> 3 -> 4
```

After swapping every two adjacent nodes:

```text
2 -> 1 -> 4 -> 3
```

### Example 2

**Input:**

```text
head = []
```

**Output:**

```text
[]
```

### Example 3

**Input:**

```text
head = [1]
```

**Output:**

```text
[1]
```

### Example 4

**Input:**

```text
head = [1,2,3]
```

**Output:**

```text
[2,1,3]
```

## Constraints

- The number of nodes in the list is in the range `[0, 100]`.
- `0 <= Node.val <= 100`

## Approach

Use a **dummy node** and iterate through the linked list two nodes at a time.

For each pair:

1. Let `first` point to the first node.
2. Let `second` point to the second node.
3. Change the pointers so that `second` comes before `first`.
4. Connect the swapped pair to the previous part of the list.
5. Move forward to the next pair.

If there is only one node left at the end, leave it unchanged.

For example:

```text
1 -> 2 -> 3 -> 4
```

Swap the first pair:

```text
2 -> 1 -> 3 -> 4
```

Then swap the second pair:

```text
2 -> 1 -> 4 -> 3
```

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)` auxiliary space

Where `n` is the number of nodes in the linked list.
