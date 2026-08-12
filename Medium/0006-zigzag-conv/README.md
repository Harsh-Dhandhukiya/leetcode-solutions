# 6. Zigzag Conversion

## Problem Description

**Difficulty:** Medium

**Problem Link:** [https://leetcode.com/problems/longest-palindromic-substring/](https://leetcode.com/problems/zigzag-conversion/description/)

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given
number of rows and then read line by line.

For example, with `numRows = 3`:

```text
P   A   H   N
A P L S I I G
Y   I   R
```

Reading the rows from top to bottom gives:

```text
"PAHNAPLSIIGYIR"
```

Implement the following function:

```cpp
string convert(string s, int numRows);
```

The function should return the string after performing the zigzag
conversion.

---

## Examples

### Example 1

**Input:**

```text
s = "PAYPALISHIRING"
numRows = 3
```

**Output:**

```text
"PAHNAPLSIIGYIR"
```

### Example 2

**Input:**

```text
s = "PAYPALISHIRING"
numRows = 4
```

**Output:**

```text
"PINALSIGYAHRPI"
```

**Explanation:**

```text
P     I     N
A   L S   I G
Y A   H R
P     I
```

Reading line by line produces:

```text
PINALSIGYAHRPI
```

### Example 3

**Input:**

```text
s = "A"
numRows = 1
```

**Output:**

```text
"A"
```

---

## Approach

The characters move through the rows in a repeating zigzag pattern:

1.  Start at row `0`.
2.  Move downward one row at a time.
3.  When the bottom row is reached, change direction.
4.  Move upward one row at a time.
5.  When the top row is reached, change direction again.
6.  Append each character to the string representing its current row.
7.  Concatenate all rows at the end.

A special case is necessary when `numRows == 1`, because there is no
zigzag movement.

---

### Complexity

- **Time:** `O(n)`, where `n` is the length of the string.
- **Space:** `O(n)` for storing the characters in the rows.

---

## Constraints

- `1 <= s.length <= 1000`
- `s` consists of English letters (lower-case and upper-case), `','`
  and `'.'`.
- `1 <= numRows <= 1000`
