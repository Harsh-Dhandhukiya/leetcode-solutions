# 2. Add Two Numbers

**Difficulty:** Medium

**Problem Link:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/add-two-numbers/)

---

## Problem

You are given two **non-empty linked lists** representing two **non-negative integers**. The digits are stored in **reverse order**, and each of their nodes contains a single digit.

Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number `0` itself.

---

## Examples

### Example 1

**Input:**

```text
l1 = [2,4,3]
l2 = [5,6,4]
```

**Output:**

```text
[7,0,8]
```

**Explanation:**

```text
342 + 465 = 807
```

Since the digits are stored in reverse order:

```text
342 → [2,4,3]
465 → [5,6,4]

807 → [7,0,8]
```

---

### Example 2

**Input:**

```text
l1 = [0]
l2 = [0]
```

**Output:**

```text
[0]
```

---

### Example 3

**Input:**

```text
l1 = [9,9,9,9,9,9,9]
l2 = [9,9,9,9]
```

**Output:**

```text
[8,9,9,9,0,0,0,1]
```

---

## Constraints

- The number of nodes in each linked list is in the range `[1, 100]`.
- `0 <= Node.val <= 9`.
- The numbers represented by the linked lists do not contain leading zeros, except for the number `0` itself.

---

## Approach

Since the digits are stored in **reverse order**, we can add the two linked lists from left to right, just like normal addition.

At each node:

1. Take the value from `l1` if it exists.
2. Take the value from `l2` if it exists.
3. Add both values along with the current `carry`.
4. Store `sum % 10` in the result node.
5. Update `carry = sum / 10`.
6. Move to the next nodes.

Continue until both lists are exhausted and there is no remaining carry.

### Example

For:

```text
l1 = [2,4,3]
l2 = [5,6,4]
```

We perform the addition digit by digit:

```text
2 + 5 = 7
4 + 6 = 10 → write 0, carry 1
3 + 4 + 1 = 8
```

Therefore:

```text
Result = [7,0,8]
```

## Complexity

Let `n` and `m` be the lengths of the two linked lists.

### Time Complexity

```text
O(max(n, m))
```

We visit each node in both linked lists at most once.

### Space Complexity

```text
O(max(n, m))
```
