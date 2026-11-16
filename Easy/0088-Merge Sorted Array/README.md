# 88. Merge Sorted Array

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/merge-sorted-array/

## Problem Description

You are given two integer arrays, `nums1` and `nums2`, sorted in **non-decreasing order**, and two integers, `m` and `n`, representing the number of elements in `nums1` and `nums2`, respectively.

Merge `nums1` and `nums2` into a single array sorted in **non-decreasing order**.

The final sorted array must be stored inside `nums1`. To make this possible:

- `nums1` has a length of `m + n`.
- The first `m` elements of `nums1` are the values to merge.
- The last `n` elements of `nums1` are initialized to `0` and should be ignored.
- `nums2` has a length of `n`.

## Examples

### Example 1

**Input:**

```text
nums1 = [1, 2, 3, 0, 0, 0]
m = 3
nums2 = [2, 5, 6]
n = 3
```

**Array visualization:**

| Array             | Index 0 | Index 1 | Index 2 | Index 3 | Index 4 | Index 5 |
| ----------------- | ------: | ------: | ------: | ------: | ------: | ------: |
| `nums1` (initial) |       1 |       2 |       3 |       0 |       0 |       0 |
| `nums2`           |       2 |       5 |       6 |       — |       — |       — |
| `nums1` (result)  |       1 |       2 |       2 |       3 |       5 |       6 |

**Output:**

```text
[1, 2, 2, 3, 5, 6]
```

**Explanation:** The arrays being merged are `[1, 2, 3]` and `[2, 5, 6]`. The merged array is `[1, 2, 2, 3, 5, 6]`.

### Example 2

**Input:**

```text
nums1 = [1]
m = 1
nums2 = []
n = 0
```

**Output:**

```text
[1]
```

**Explanation:** The arrays being merged are `[1]` and `[]`. The merged array is `[1]`.

### Example 3

**Input:**

```text
nums1 = [0]
m = 0
nums2 = [1]
n = 1
```

**Output:**

```text
[1]
```

**Explanation:** The arrays being merged are `[]` and `[1]`. The merged array is `[1]`. Since `m = 0`, there are no initial elements in `nums1`; the `0` is only a placeholder to provide space for the result.

## Constraints

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10^9 <= nums1[i], nums2[j] <= 10^9`
