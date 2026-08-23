# 16. 3Sum Closest

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/3sum-closest/

## Problem

Given an integer array `nums` of length `n` and an integer `target`, find three integers at **distinct indices** in `nums` such that the sum is closest to `target`.

Return the **sum of the three integers**.

You may assume that each input would have exactly one solution.

## Example 1

**Input:**

```text
nums = [-1,2,1,-4], target = 1
```

**Output:**

```text
2
```

**Explanation:**

The sum that is closest to the target is `2`.

```text
(-1) + 2 + 1 = 2
```

## Example 2

**Input:**

```text
nums = [0,0,0], target = 1
```

**Output:**

```text
0
```

**Explanation:**

The sum that is closest to the target is `0`.

```text
0 + 0 + 0 = 0
```

## Constraints

- `3 <= nums.length <= 500`
- `-1000 <= nums[i] <= 1000`
- `-10^4 <= target <= 10^4`

## Approach

A common optimal approach is:

1. Sort the array.
2. Iterate through each element as the first number.
3. Use two pointers to find the other two numbers.
4. Calculate the current three-number sum.
5. Track the sum with the smallest absolute difference from `target`.
6. Move the left or right pointer depending on whether the current sum is smaller or larger than `target`.
7. If the sum equals `target`, return immediately because it is the closest possible value.

## Complexity

- **Time:** `O(n²)`
- **Space:** `O(1)` auxiliary space, excluding the sorting implementation.
