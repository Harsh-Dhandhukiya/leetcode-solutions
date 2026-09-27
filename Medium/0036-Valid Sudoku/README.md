# 36. Valid Sudoku

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/valid-sudoku/
- **Topics:** Array, Hash Table, Matrix

---

## Problem

Determine if a `9 x 9` Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

1. Each row must contain the digits `1-9` without repetition.
2. Each column must contain the digits `1-9` without repetition.
3. Each of the nine `3 x 3` sub-boxes of the grid must contain the digits `1-9` without repetition.

### Note

- A Sudoku board (partially filled) could be valid but is not necessarily solvable.
- Only the filled cells need to be validated according to the mentioned rules.

---

## Example 1

### Input

```text
board =
[
  ["5","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
```

### Output

```text
true
```

---

## Example 2

### Input

```text
board =
[
  ["8","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
```

### Output

```text
false
```

### Explanation

Same as Example 1, except the `5` in the top-left corner has been modified to `8`. Since there are two `8`s in the top-left `3 x 3` sub-box, the board is invalid.

---

## Constraints

- `board.length == 9`
- `board[i].length == 9`
- `board[i][j]` is a digit `1-9` or `'.'`.

---

## Approach

The Sudoku board can be validated by checking three things:

- Every row contains no duplicate digits.
- Every column contains no duplicate digits.
- Every `3 x 3` sub-box contains no duplicate digits.

We can use three sets:

- `rows[9]` — tracks digits already present in each row.
- `cols[9]` — tracks digits already present in each column.
- `boxes[9]` — tracks digits already present in each `3 x 3` sub-box.

For every filled cell:

1. Check whether the digit already exists in its row.
2. Check whether the digit already exists in its column.
3. Check whether the digit already exists in its corresponding `3 x 3` box.
4. If any check fails, return `false`.
5. Otherwise, add the digit to all three sets.

The index of the corresponding `3 x 3` box can be calculated using:

```text
boxIndex = (row / 3) * 3 + (col / 3)
```

---

## Complexity

- **Time Complexity:** `O(9 × 9) = O(1)`
- **Space Complexity:** `O(9 × 9) = O(1)`

Since the Sudoku board always has a fixed size of `9 x 9`, the complexity is effectively constant.
