# 73. Set Matrix Zeroes

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/set-matrix-zeroes/

---

Given an `m × n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`.

You must perform the operation **in place**, meaning you should modify the original matrix without creating another matrix.

---

## Example 1

**Input:** `matrix = [[1,1,1],[1,0,1],[1,1,1]]`

**Output:** `[[1,0,1],[0,0,0],[1,0,1]]`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#f8d7da">0<br/><sub>Original Zero</sub></td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
    </tr>
  </tbody>
</table>

**After setting the corresponding row and column to zero:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#f8d7da">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
    </tr>
  </tbody>
</table>

**Explanation:** The element at position `(1, 1)` is `0`. Therefore, its entire second row and second column are set to `0`.

---

## Example 2

**Input:** `matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]`

**Output:** `[[0,0,0,0],[0,4,5,0],[0,3,1,0]]`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#f8d7da">0<br/><sub>Original Zero</sub></td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">2</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#f8d7da">0<br/><sub>Original Zero</sub></td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">3</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">4</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">5</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">2</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">3</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">5</td>
    </tr>
  </tbody>
</table>

**After setting the corresponding rows and columns to zero:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">4</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">5</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">3</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff">0</td>
    </tr>
  </tbody>
</table>

**Explanation:** The original zeroes are located at `(0, 0)` and `(0, 3)`. Therefore:

1. The first row is entirely set to `0`.
2. The first column is entirely set to `0`.
3. The fourth column is entirely set to `0`.
4. All other elements remain unchanged.

---

## Constraints

- `m == matrix.length`
- `n == matrix[0].length`
- `1 <= m, n <= 200`
- `-2³¹ <= matrix[i][j] <= 2³¹ - 1`
