# 82. Remove Duplicates from Sorted List II

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

You are given the `head` of a sorted linked list.

Delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

Return the linked list sorted as well.

## Visual Representation

### Example 1

**Input:**

```text
head = [1, 2, 3, 3, 4, 4, 5]
```

**Linked List:**

```text
  (1) → (2) → (3) → (3) → (4) → (4) → (5)
```

**After Removing Duplicates:**

```text
  (1) → (2) → (5)
```

**Output:**

```text
[1, 2, 5]
```

### Example 2

**Input:**

```text
head = [1, 1, 1, 2, 3]
```

**Linked List:**

```text
  (1) → (1) → (1) → (2) → (3)
```

**After Removing Duplicates:**

```text
                  ↓
              (2) → (3)
```

**Output:**

```text
[2, 3]
```

### Example 3

**Input:**

```text
head = [1, 2, 2, 3, 4, 4, 5]
```

**Linked List:**

```text
  (1) → (2) → (2) → (3) → (4) → (4) → (5)
```

**After Removing Duplicates:**

```text
  (1) → (3) → (5)
```

**Output:**

```text
[1, 3, 5]
```

## Constraints

- The number of nodes in the list is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`
- The list is guaranteed to be sorted in ascending order.

## Key Understanding

- Remove **all occurrences** of a duplicated value.
- Keep only values that appear exactly once.
- Maintain the sorted order of the resulting linked list.

## Expected Complexity

| Complexity | Value  |
| ---------- | ------ |
| Time       | `O(n)` |
| Space      | `O(1)` |
