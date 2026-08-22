# 15. 3Sum

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/3sum/

## Problem

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that:

- `i != j`
- `i != k`
- `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution set must not contain duplicate triplets.

## Example 1

**Input:**

```text
nums = [-1,0,1,2,-1,-4]
```

**Output:**

```text
[[-1,-1,2],[-1,0,1]]
```

**Explanation:**

```text
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0
```

The distinct triplets are:

```text
[-1,0,1]
[-1,-1,2]
```

The order of the output and the order of the triplets does not matter.

## Example 2

**Input:**

```text
nums = [0,1,1]
```

**Output:**

```text
[]
```

**Explanation:**

The only possible triplet does not sum up to `0`.

## Example 3

**Input:**

```text
nums = [0,0,0]
```

**Output:**

```text
[[0,0,0]]
```

**Explanation:**

The only possible triplet sums up to `0`.

## Constraints

- `3 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`

## Approach

A common optimal approach is:

1. Sort the array.
2. Iterate through each element as the first number.
3. Use two pointers to find the remaining two numbers.
4. Move the pointers based on whether the current sum is less than, equal to, or greater than `0`.
5. Skip duplicate values to ensure the result contains no duplicate triplets.

## Complexity

- **Time:** `O(n²)`
- **Space:** `O(1)` auxiliary space, excluding the output array.
