# 18. 4Sum

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/4sum/

## Problem

Given an array `nums` of `n` integers, return an array of all the **unique quadruplets** `[nums[a], nums[b], nums[c], nums[d]]` such that:

- `0 <= a, b, c, d < n`
- `a`, `b`, `c`, and `d` are **distinct**.
- `nums[a] + nums[b] + nums[c] + nums[d] == target`

You may return the answer in **any order**.

## Example 1

**Input:**

```text
nums = [1,0,-1,0,-2,2], target = 0
```

**Output:**

```text
[[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
```

## Example 2

**Input:**

```text
nums = [2,2,2,2,2], target = 8
```

**Output:**

```text
[[2,2,2,2]]
```

## Constraints

- `1 <= nums.length <= 200`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`

## Approach

A common optimal approach is to combine **sorting** with **two pointers**:

1. Sort the array.
2. Fix the first element using an outer loop.
3. Fix the second element using another loop.
4. Use two pointers, `left` and `right`, to find the remaining two elements.
5. Calculate the sum of the four elements.
6. If the sum equals `target`, add the quadruplet to the result.
7. If the sum is smaller than `target`, move `left` forward.
8. If the sum is larger than `target`, move `right` backward.
9. Skip duplicate values at every level to ensure that the result contains only unique quadruplets.
10. Use a sufficiently wide integer type for the sum because the input values can be as large as `10^9`.

## Complexity

- **Time:** `O(n³)`
- **Space:** `O(1)` auxiliary space, excluding the output array and sorting implementation.
