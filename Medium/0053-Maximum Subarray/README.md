# 53. Maximum Subarray

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/maximum-subarray/

## Problem Description

Given an integer array `nums`, find the **subarray with the largest sum**, and return its sum.

## Examples

### Example 1

**Input:**

```text
nums = [-2,1,-3,4,-1,2,1,-5,4]
```

**Output:**

```text
6
```

**Explanation:**
The subarray `[4,-1,2,1]` has the largest sum `6`.

### Example 2

**Input:**

```text
nums = [1]
```

**Output:**

```text
1
```

**Explanation:**
The subarray `[1]` has the largest sum `1`.

### Example 3

**Input:**

```text
nums = [5,4,-1,7,8]
```

**Output:**

```text
23
```

**Explanation:**
The subarray `[5,4,-1,7,8]` has the largest sum `23`.

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`
