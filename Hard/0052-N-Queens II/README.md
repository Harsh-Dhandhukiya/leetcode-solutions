# 52. N-Queens II

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/n-queens-ii/

The **n-queens puzzle** is the problem of placing `n` queens on an `n x n` chessboard such that no two queens attack each other.

Given an integer `n`, return _the number of distinct solutions to the n-queens puzzle._

## Example 1

**Input:**

```text
n = 4
```

**Output:**

```text
2
```

**Explanation:**

There are two distinct solutions to the 4-queens puzzle, as shown below.

### Chessboard Visualizations

**Solution 1**

```text
. Q . .
. . . Q
Q . . .
. . Q .
```

**Solution 2**

```text
. . Q .
Q . . .
. . . Q
. Q . .
```

**Legend:**

- `Q` = Queen
- `.` = Empty square

### Visual Chessboards

**Solution 1**

|  ♜  |  ♛  |  ♜  |  ♛  |
| :-: | :-: | :-: | :-: |
| 🟨  |  ♛  | 🟨  | 🟦  |
| 🟦  | 🟨  | 🟦  |  ♛  |
|  ♛  | 🟦  | 🟨  | 🟦  |
| 🟦  | 🟨  |  ♛  | 🟨  |

**Solution 2**

| 🟨  | 🟦  |  ♛  | 🟦  |
| :-: | :-: | :-: | :-: |
|  ♛  | 🟨  | 🟦  | 🟨  |
| 🟨  | 🟦  | 🟨  |  ♛  |
| 🟦  |  ♛  | 🟦  | 🟨  |

## Example 2

**Input:**

```text
n = 1
```

**Output:**

```text
1
```

## Constraints

- `1 <= n <= 9`

## Approach: Backtracking

1. Place one queen in each row.
2. For each row, try every column.
3. Check whether the column, main diagonal, or anti-diagonal is already occupied.
4. If the position is safe, place the queen and continue to the next row.
5. When all `n` queens have been placed, increment the solution count.
6. Backtrack to explore other possible arrangements.

## Complexity Analysis

- **Time Complexity:** `O(n!)` — with column and diagonal pruning, the search explores valid queen placements rather than all board configurations.
- **Space Complexity:** `O(n)` — for the recursion stack and column/diagonal tracking arrays.
