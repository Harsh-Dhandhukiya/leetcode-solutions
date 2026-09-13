# 25. Reverse Nodes in k-Group

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/reverse-nodes-in-k-group/

## Problem

Given the `head` of a linked list, reverse the nodes of the list `k` at a time, and return the modified list.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k`, then the left-out nodes at the end should remain as they are.

You may not alter the values in the list's nodes. Only the nodes themselves may be changed.

## Examples

### Example 1

**Input:**

```text id="f4k8gq"
head = [1,2,3,4,5], k = 2
```

**Output:**

```text id="1e7v1a"
[2,1,4,3,5]
```

**Explanation:**

The list is divided into groups of 2:

```text id="4tqgpf"
1 -> 2 -> 3 -> 4 -> 5
```

Reverse each complete group:

```text id="9px0du"
2 -> 1 -> 4 -> 3 -> 5
```

The final node remains unchanged because there are fewer than `k` nodes left.

### Example 2

**Input:**

```text id="k0zj2u"
head = [1,2,3,4,5], k = 3
```

**Output:**

```text id="k1w7c4"
[3,2,1,4,5]
```

**Explanation:**

The first three nodes are reversed:

```text id="8p7f4x"
1 -> 2 -> 3
```

becomes:

```text id="r4f0yn"
3 -> 2 -> 1
```

The remaining two nodes are fewer than `k`, so they remain unchanged:

```text id="6c9n2p"
4 -> 5
```

## Constraints

- The number of nodes in the list is `n`.
- `1 <= k <= n <= 5000`
- `0 <= Node.val <= 1000`

## Approach

Use an **iterative reversal** and process the linked list one group at a time.

For each group:

1. Find the `k`th node from the current position.
2. If fewer than `k` nodes remain, leave the remaining nodes unchanged.
3. Reverse the nodes between the current group start and the `k`th node.
4. Connect the reversed group to the previous and next portions of the list.
5. Move to the next group and repeat.

A dummy node before the head makes it easier to reconnect each reversed group.

For example, with `k = 2`:

```text id="v2t8cb"
1 -> 2 -> 3 -> 4 -> 5
```

After reversing each complete group:

```text id="0y0z6r"
2 -> 1 -> 4 -> 3 -> 5
```

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)` auxiliary space

Where `n` is the number of nodes in the linked list.
