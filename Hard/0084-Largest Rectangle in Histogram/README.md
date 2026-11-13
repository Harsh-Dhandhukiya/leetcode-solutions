# 84. Largest Rectangle in Histogram

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/largest-rectangle-in-histogram/

## Problem Description

Given an array of integers `heights` representing the histogram's bar heights, where the width of each bar is `1`, return the area of the largest rectangle in the histogram.

## Example 1

**Input:**

```text
heights = [2,1,5,6,2,3]
```

**Output:**

```text
10
```

**Explanation:**

The largest rectangle has a height of `5` and a width of `2`.

Area = `5 × 2 = 10`.

## Example 2

**Input:**

```text
heights = [2,4]
```

**Output:**

```text
4
```

**Explanation:**

The largest rectangle has a height of `2` and a width of `2`, or a height of `4` and a width of `1`.

Area = `4`.

## Constraints

- `1 <= heights.length <= 10^5`
- `0 <= heights[i] <= 10^4`
