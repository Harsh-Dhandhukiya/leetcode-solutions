# 74. Search a 2D Matrix

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/search-a-2d-matrix/

---

You are given an `m × n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true` if `target` is in `matrix` or `false` otherwise.

You must write a solution in **O(log(m × n))** time complexity.

---

## Example 1

**Input:** `matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]`, `target = 3`

**Output:** `true`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#dbe7ff"><b>3<br/><sub>Target</sub></b></td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">5</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">7</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">10</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">11</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">16</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">20</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">23</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">30</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">34</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">60</td>
    </tr>
  </tbody>
</table>

**Explanation:** The target value `3` is present at position `(0, 1)` in the matrix. Therefore, the function returns `true`.

---

## Example 2

**Input:** `matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]`, `target = 13`

**Output:** `false`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">1</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">3</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">5</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">7</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">10</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">11</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">16</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">20</td>
    </tr>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">23</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">30</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">34</td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">60</td>
    </tr>
  </tbody>
</table>

**Explanation:** The target value `13` is not present in the matrix. It falls between `11` and `16`, but no element in the matrix equals `13`. Therefore, the function returns `false`.

---

## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 100`
- `-10⁴ <= matrix[i][j], target <= 10⁴`
