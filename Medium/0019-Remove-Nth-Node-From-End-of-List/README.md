# 19. Remove Nth Node From End of List

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/remove-nth-node-from-end-of-list/

## Problem

Given the `head` of a linked list, remove the `n`th node from the end of the list and return its head.

## Example 1

**Input:**

```text
head = [1,2,3,4,5], n = 2
```

**Output:**

```text
[1,2,3,5]
```

**Explanation:**

The `2`nd node from the end is `4`, so it is removed from the linked list.

```text
1 -> 2 -> 3 -> 4 -> 5
              ↓
1 -> 2 -> 3 -> 5
```

## Example 2

**Input:**

```text
head = [1], n = 1
```

**Output:**

```text
[]
```

## Example 3

**Input:**

```text
head = [1,2], n = 1
```

**Output:**

```text
[1]
```

## Constraints

- The number of nodes in the list is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

## Approach

The most efficient approach uses the **two-pointer technique** with a dummy node:

1. Create a dummy node that points to the head.
2. Initialize two pointers, `fast` and `slow`, at the dummy node.
3. Move `fast` forward by `n + 1` positions.
4. Move both `fast` and `slow` forward together until `fast` reaches the end.
5. At this point, `slow.next` is the node that needs to be removed.
6. Skip that node by setting `slow.next = slow.next.next`.
7. Return `dummy.next` as the new head.

Using a dummy node also handles the case where the head itself needs to be removed.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`
