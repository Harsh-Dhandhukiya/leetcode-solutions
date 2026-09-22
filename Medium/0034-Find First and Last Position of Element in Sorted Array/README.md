# 34. Find First and Last Position of Element in Sorted Array

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(log n)` runtime complexity.

## Examples

### Example 1

**Input:**

```text
nums = [5,7,7,8,8,10], target = 8
```

**Output:**

```text
[3,4]
```

### Example 2

**Input:**

```text
nums = [5,7,7,8,8,10], target = 6
```

**Output:**

```text
[-1,-1]
```

### Example 3

**Input:**

```text
nums = [], target = 0
```

**Output:**

```text
[-1,-1]
```

## Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `nums` is a non-decreasing array.
- `-10^9 <= target <= 10^9`
