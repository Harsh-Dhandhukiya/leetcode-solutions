# 51. N-Queens

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/n-queens/

## Problem Description

The **N-Queens** puzzle is the problem of placing `n` queens on an `n × n` chessboard such that no two queens attack each other.

Given an integer `n`, return **all distinct solutions** to the N-Queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the queens' placement, where:

- `'Q'` represents a queen.
- `'.'` represents an empty square.

## Examples

### Example 1

**Input**

```text
n = 4
```

**Output**

```json
[
  [".Q..", "...Q", "Q...", "..Q."],
  ["..Q.", "Q...", "...Q", ".Q.."]
]
```

**Explanation**

There are two distinct solutions to the 4-Queens puzzle.

**Solution 1**

```text
. ♛ . .
. . . ♛
♛ . . .
. . ♛ .
```

**Solution 2**

```text
. . ♛ .
♛ . . .
. . . ♛
. ♛ . .
```

**Chessboard visualization**

The following boards illustrate both valid arrangements. Each row contains exactly one queen, and no two queens share a column or diagonal.

| Solution 1 | Solution 2 |
| :--------: | :--------: |
| ⬜ ♛ ⬜ ⬜ | ⬜ ⬜ ♛ ⬜ |
| ⬜ ⬜ ⬜ ♛ | ♛ ⬜ ⬜ ⬜ |
| ♛ ⬜ ⬜ ⬜ | ⬜ ⬜ ⬜ ♛ |
| ⬜ ⬜ ♛ ⬜ | ⬜ ♛ ⬜ ⬜ |

### Example 2

**Input**

```text
n = 1
```

**Output**

```json
[["Q"]]
```

**Explanation**

A single queen can be placed on the only square of the board.

```text
♛
```

## Constraints

- `1 <= n <= 9`

## Approach: Backtracking

Backtracking builds a solution one row at a time. Since no two queens can share a row, we place exactly one queen in each row.

For every row:

1. Try placing a queen in each column.
2. Check whether the column is already occupied.
3. Check whether either diagonal is occupied.
4. If the position is safe, place the queen and continue to the next row.
5. If a complete board is formed, add it to the list of solutions.
6. Remove the queen when returning from recursion to explore other possibilities.

### Conflict Detection

A queen at position `(row, col)` attacks another queen if they share:

- **Column:** the same column index.
- **Main diagonal:** the same value of `row - col`.
- **Anti-diagonal:** the same value of `row + col`.

Tracking these three conditions makes it possible to check a position efficiently.

## Complexity Analysis

Let `n` be the size of the chessboard.

- **Time Complexity:** Approximately `O(n!)` candidate placements in the backtracking search, with constant-time conflict checks when using sets. The exact runtime depends on pruning and the number of solutions.
- **Auxiliary Space Complexity:** `O(n)` for recursion and the column/diagonal tracking sets, excluding the space required to store the output.
- **Output Space:** Proportional to the total number of returned board configurations, each containing `n²` characters.

## Key Takeaway

The N-Queens problem is a classic example of **backtracking**. By placing queens row by row and rejecting unsafe positions early, we systematically find every valid board configuration without exploring every possible arrangement.
