# 1. Two Sum

- **Difficulty:** Easy
- **Problem Number:** 1
- **Problem Link:** https://leetcode.com/problems/two-sum/

## Problem Summary

Given an integer array `nums` and an integer `target`, return the indices of the two numbers whose sum equals `target`.

You may assume that:

- Exactly one valid solution exists.
- The same element cannot be used twice.
- The answer can be returned in any order.

---

## Example 1

**Input**

```text
nums = [2,7,11,15]
target = 9
```

**Output**

```text
[0,1]
```

**Explanation**

```text
nums[0] + nums[1] = 2 + 7 = 9
```

---

## Example 2

**Input**

```text
nums = [3,2,4]
target = 6
```

**Output**

```text
[1,2]
```

---

## Example 3

**Input**

```text
nums = [3,3]
target = 6
```

**Output**

```text
[0,1]
```

---

## Constraints

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Exactly one valid answer exists.

---

## Approach

Use a hash map (`unordered_map`) to store each visited number and its index.

For every element:

1. Compute the required complement (`target - nums[i]`).
2. Check whether the complement already exists in the hash map.
3. If it exists, return both indices.
4. Otherwise, store the current number and continue.

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(n)
```
