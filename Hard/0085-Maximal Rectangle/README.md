# 85. Maximal Rectangle

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/maximal-rectangle/

## Problem Description

Given a `rows x cols` binary matrix filled with `0's` and `1's`, find the largest rectangle containing only `1's` and return its area.

## Matrix Visualization

### Example 1

**Input Matrix:**

```text
+---+---+---+---+---+
| 1 | 0 | 1 | 0 | 0 |
+---+---+---+---+---+
| 1 | 0 | 1*| 1*| 1*|
+---+---+---+---+---+
| 1 | 1 | 1*| 1*| 1*|
+---+---+---+---+---+
| 1 | 0 | 0 | 1 | 0 |
+---+---+---+---+---+
```

`*` represents the cells belonging to the maximal rectangle.

**Maximal Rectangle:**

```
1 1 1
1 1 1
```

**Area Calculation:**

```
Area = Height × Width
     = 2 × 3
     = 6
```

**Input:**

```
matrix = [    ["1", "0", "1", "0", "0"],    ["1", "0", "1", "1", "1"],    ["1", "1", "1", "1", "1"],    ["1", "0", "0", "1", "0"]]
```

**Output:**

```
6
```

**Explanation:**

The largest rectangle containing only `1's` has a height of `2` and a width of `3`. Therefore, its maximum area is `6`.

### **Example 2**

**Input:**

```
matrix = [["0"]]
```

**Output:**

```
0
```

### **Example 3**

**Input:**

```
matrix = [["1"]]
```

**Output:**

```
1
```

## **Constraints**

- `rows == matrix.length`
- `cols == matrix[i].length`
- `1 <= rows, cols <= 200`
- `matrix[i][j]` is either `'0'` or `'1'`.
