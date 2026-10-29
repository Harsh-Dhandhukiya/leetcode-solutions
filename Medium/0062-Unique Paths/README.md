# 62. Unique Paths

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/unique-paths/

---

There is a robot on an `m × n` grid. The robot is initially located at the **top-left corner** (i.e., `grid[0][0]`). The robot tries to move to the **bottom-right corner** (i.e., `grid[m - 1][n - 1]`).

The robot can only move either **down** or **right** at any point in time.

Given the two integers `m` and `n`, return the **number of possible unique paths** that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to `2 × 10⁹`.

---

## Example 1

**Input:** `m = 3, n = 7`

**Output:** `28`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="56" height="56" align="center" valign="middle" bgcolor="#ffffff">🤖<br/><sub>Start</sub></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
    </tr>
    <tr>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
    </tr>
    <tr>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" bgcolor="#ffffff"></td>
      <td width="56" height="56" bgcolor="#e5ecfc"></td>
      <td width="56" height="56" align="center" valign="middle" bgcolor="#ffffff">⭐<br/><sub>Finish</sub></td>
    </tr>
  </tbody>
</table>

The grid contains **3 rows and 7 columns**. The robot starts in the top-left cell and must reach the bottom-right cell by moving only right or down.

---

## Example 2

**Input:** `m = 3, n = 2`

**Output:** `3`

**Explanation:** From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:

1. `Right → Down → Down`
2. `Down → Down → Right`
3. `Down → Right → Down`

---

## Constraints

- `1 <= m, n <= 100`
