# 31. Next Permutation

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/next-permutation/

## Problem Statement

A **permutation** of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for:

```text
arr = [1,2,3]
```

The following are all the permutations:

```text
[1,2,3]
[1,3,2]
[2,1,3]
[2,3,1]
[3,1,2]
[3,2,1]
```

The **next permutation** of an array of integers is the next lexicographically greater permutation of its integers.

More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the **next permutation** of that array is the permutation that follows it in the sorted container.

If such an arrangement is not possible, the array must be rearranged as the **lowest possible order**, i.e. sorted in ascending order.

### Examples

- The next permutation of:

```text
[1,2,3]
```

is:

```text
[1,3,2]
```

- The next permutation of:

```text
[2,3,1]
```

is:

```text
[3,1,2]
```

- The next permutation of:

```text
[3,2,1]
```

is:

```text
[1,2,3]
```

because `[3,2,1]` does not have a lexicographically larger rearrangement.

---

## Task

Given an array of integers `nums`, find the **next permutation** of `nums`.

The replacement must be performed **in-place** and use only **constant extra memory**.

---

## Examples

### Example 1

**Input:**

```text
nums = [1,2,3]
```

**Output:**

```text
[1,3,2]
```

### Example 2

**Input:**

```text
nums = [3,2,1]
```

**Output:**

```text
[1,2,3]
```

### Example 3

**Input:**

```text
nums = [1,1,5]
```

**Output:**

```text
[1,5,1]
```

---

## Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 100`

---

## Approach

The key observation is that we need to make the **smallest possible increase** in the array.

We can achieve this using the following steps:

### Step 1: Find the Pivot

Start from the right side of the array and find the first index `i` such that:

```text
nums[i] < nums[i + 1]
```

This element is called the **pivot**.

If no such index exists, the array is in descending order and is already the largest permutation.

In that case, simply reverse the entire array.

---

### Step 2: Find the Next Larger Element

If a pivot exists, scan from the right side again and find the first element greater than the pivot:

```text
nums[j] > nums[i]
```

Because the suffix is in descending order, the first such element from the right is the smallest element that can replace the pivot while making the permutation larger.

---

### Step 3: Swap Pivot and Successor

Swap:

```text
nums[i]
```

and

```text
nums[j]
```

---

### Step 4: Reverse the Suffix

After swapping, reverse the portion of the array after the pivot:

```text
[i + 1, n - 1]
```

This makes the suffix as small as possible.

---

## Example Walkthrough

Consider:

```text
nums = [1,2,3]
```

### Find Pivot

Starting from the right:

```text
2 < 3
```

So:

```text
pivot = 2
```

Index:

```text
i = 1
```

### Find Successor

From the right, `3` is greater than `2`.

Swap them:

```text
[1,3,2]
```

There is nothing left to reverse.

Therefore:

```text
[1,3,2]
```

is the next permutation.
