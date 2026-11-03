# 75. Sort Colors

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/sort-colors/

## Problem Description

You are given an array `nums` with `n` objects colored red, white, or blue. Sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`, `1`, and `2` to represent the colors red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

## Examples

### Example 1

Input:

```
nums = [2,0,2,1,1,0]
```

Output:

```
[0,0,1,1,2,2]
```

Explanation:

The array has two `0`s, two `1`s, and two `2`s. Sorting them in-place places all `0`s first, then all `1`s, then all `2`s.

### Example 2

Input:

```
nums = [2,0,1]
```

Output:

```
[0,1,2]
```

Explanation:

The array has one each of `0`, `1`, and `2`, arranged in-place in the order `0`, `1`, `2`.

## Constraints

- `n == nums.length`
- `1 <= n <= 300`
- `nums[i]` is either `0`, `1`, or `2`.
