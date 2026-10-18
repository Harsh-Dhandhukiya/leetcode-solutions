# 59. Spiral Matrix II

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/spiral-matrix-ii/

## Problem Statement

Given a positive integer `n`, generate an `n × n` matrix filled with elements from `1` to `n²` in spiral order.

## Example 1

**Input:**

```text
n = 3
```

**Output:**

```text
[[1, 2, 3],
 [8, 9, 4],
 [7, 6, 5]]
```

**Matrix visualization:**

|   1 | 2 → |  3  |
| --: | :-: | :-: |
| 8 ↑ |  9  | ↓ 4 |
|   7 | ← 6 |  5  |

Spiral path: `1 → 2 → 3 ↓ 4 ↓ 5 ← 6 ← 7 ↑ 8 → 9`

## Example 2

**Input:**

```text
n = 1
```

**Output:**

```text
[[1]]
```

## Constraints

- `1 <= n <= 20`
