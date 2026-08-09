# 2. Add Two Numbers

**Difficulty:** Medium

**Topics:** Linked List, Math

**Companies:** Frequently Asked

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

---

## Algorithm

1. Create a dummy node to simplify construction of the result list.
2. Maintain a pointer `current` to the last node in the result.
3. Initialize `carry = 0`.
4. Traverse both linked lists while at least one list still has a node or `carry` is non-zero.
5. Get the current values from `l1` and `l2`. Use `0` if a list has already ended.
6. Calculate:

   ```text
   sum = value1 + value2 + carry
   ```

7. Create a new node with:

   ```text
   sum % 10
   ```

8. Update the carry:

   ```text
   carry = sum / 10
   ```

9. Move `l1`, `l2`, and `current` to the next nodes.
10. Return `dummy.next`.

---

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

The result linked list contains at most `max(n, m) + 1` nodes.

---

## Key Idea

The most important observation is that the digits are already stored in **reverse order**.

For example:

```text
Number: 342
Linked List: [2,4,3]
```

The first node contains the **least significant digit**.

This means we can perform addition exactly like normal arithmetic without reversing either linked list.

```text
    2  → 4 → 3
    5  → 6 → 4
    ------------
    7  → 0 → 8
```

The `carry` is passed to the next digit whenever the sum is greater than or equal to `10`.

---

## Edge Cases

### Different Lengths

The two linked lists can have different lengths.

```text
l1 = [9,9]
l2 = [1]
```

The calculation becomes:

```text
9 + 1 = 10 → 0, carry 1
9 + 0 + 1 = 10 → 0, carry 1
0 + 0 + 1 = 1
```

Result:

```text
[0,0,1]
```

---

### Remaining Carry

There may be a carry after both lists have ended.

For example:

```text
l1 = [9]
l2 = [1]
```

```text
9 + 1 = 10
```

Result:

```text
[0,1]
```

---

### Zero

If both numbers are zero:

```text
l1 = [0]
l2 = [0]
```

The result is:

```text
[0]
```

---

## Summary

The solution uses the standard addition technique with a **carry** while traversing both linked lists simultaneously.

Because the linked lists store digits in reverse order, the least significant digit is available first, making the addition straightforward.

**Time:** `O(max(n, m))`

**Space:** `O(max(n, m))`
