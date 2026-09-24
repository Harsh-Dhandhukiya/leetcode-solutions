# 39. Combination Sum

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/combination-sum/

## Problem Statement

Given an array of distinct integers `candidates` and a target integer `target`, return a list of all unique combinations of `candidates` where the chosen numbers sum to `target`.

The same number may be chosen from `candidates` an unlimited number of times.

Two combinations are unique if the frequency of at least one of the chosen numbers is different.

## Examples

### Example 1

**Input:**

```text
candidates = [2,3,6,7], target = 7
```

**Output:**

```text
[[2,2,3],[7]]
```

**Explanation:**

- `2 + 2 + 3 = 7`
- `7 = 7`

These are the only two combinations.

### Example 2

**Input:**

```text
candidates = [2,3,5], target = 8
```

**Output:**

```text
[[2,2,2,2],[2,3,3],[3,5]]
```

### Example 3

**Input:**

```text
candidates = [2], target = 1
```

**Output:**

```text
[]
```

## Constraints

- `1 <= candidates.length <= 30`
- `2 <= candidates[i] <= 40`
- All elements of `candidates` are distinct.
- `1 <= target <= 40`
- The number of unique combinations is less than `150` for the given input.
