# 80. Remove Duplicates from Sorted Array II

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

## Problem Description

You are given an integer array `nums` sorted in non-decreasing order.

Remove some duplicates in-place such that each unique element appears **at most twice**. The relative order of the elements must be kept the same.

Since it is impossible to change the length of the array in some languages, the result must be placed in the first part of the array `nums`.

If there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result.

Return `k` after placing the final result in the first `k` slots of `nums`.

**Important:**

- Do not allocate extra space for another array.
- Modify the input array in-place.
- Use O(1) extra memory.

## Examples

### Example 1

**Input:**

```text
nums = [1,1,1,2,2,3]
```

Output:

```
5, nums = [1,1,2,2,3,_]
```

Explanation:

The function should return `k = 5`, with the first five elements being `1, 1, 2, 2, 3`.

### Example 2

Input:

```
nums = [0,0,1,1,1,1,2,3,3]
```

Output:

```
7, nums = [0,0,1,1,2,3,3,_,_]
```

Explanation:

The function should return `k = 7`, with the first seven elements being `0, 0, 1, 1, 2, 3, 3`.

## Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is sorted in non-decreasing order.

## Notes

- Each unique element can appear at most twice.
- The relative order of elements must remain unchanged.
- Elements beyond index `k - 1` do not matter.
- The solution must modify the original array.
