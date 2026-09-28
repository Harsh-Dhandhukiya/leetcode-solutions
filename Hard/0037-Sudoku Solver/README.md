# 37. Sudoku Solver

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/sudoku-solver/

## Problem

Write a program to solve a Sudoku puzzle by filling the empty cells.

A Sudoku solution must satisfy the following rules:

1. Each of the digits `1-9` must occur exactly once in each row.
2. Each of the digits `1-9` must occur exactly once in each column.
3. Each of the digits `1-9` must occur exactly once in each of the `3 × 3` sub-boxes of the grid.

The `'.'` character indicates empty cells.

It is guaranteed that the input board has only one solution.

## Example

### Input

```text
5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9
```

### Output

```text
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

## Approach

Use **Backtracking** to fill the empty cells.

1. Find an empty cell.
2. Try placing each digit from `1` to `9`.
3. Check whether the digit is valid in:
   - The current row
   - The current column
   - The current `3 × 3` sub-box

4. If valid, place the digit and recursively solve the remaining board.
5. If the solution cannot be completed, undo the placement and try another digit.
6. Continue until all cells are filled.

## Algorithm

```text
solve(board):
    find an empty cell

    if no empty cell exists:
        return true

    for digit from 1 to 9:
        if digit is valid:
            place digit

            if solve(board):
                return true

            remove digit

    return false
```

## Complexity

- **Time Complexity:** `O(9^E)`, where `E` is the number of empty cells.
- **Space Complexity:** `O(E)` for the recursion stack.

## Constraints

- `board.length == 9`
- `board[i].length == 9`
- `board[i][j]` is a digit or `'.'`
- The input board has exactly one valid solution.
