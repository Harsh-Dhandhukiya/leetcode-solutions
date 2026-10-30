# 63. Unique Paths II

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/unique-paths-ii/

---

You are given an `m × n` integer array `obstacleGrid`. The robot is initially located at the **top-left corner** (i.e., `obstacleGrid[0][0]`). The robot tries to move to the **bottom-right corner** (i.e., `obstacleGrid[m - 1][n - 1]`).

The robot can only move either **down** or **right** at any point in time.

An obstacle and a space are marked as `1` or `0`, respectively, in `obstacleGrid`. A path that the robot takes cannot include any square that is an obstacle.

Return the **number of possible unique paths** that the robot can take to reach the bottom-right corner.

The test cases are generated so that the answer will be less than or equal to `2 × 10⁹`.

---

## Example 1

**Input:** `obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]`

**Output:** `2`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">🤖<br/><sub>Start</sub></td>
      <td width="80" height="80" bgcolor="#e5ecfc"></td>
      <td width="80" height="80" bgcolor="#ffffff"></td>
    </tr>
    <tr>
      <td width="80" height="80" bgcolor="#e5ecfc"></td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#f8d7da">🚧<br/><sub>Obstacle</sub></td>
      <td width="80" height="80" bgcolor="#e5ecfc"></td>
    </tr>
    <tr>
      <td width="80" height="80" bgcolor="#ffffff"></td>
      <td width="80" height="80" bgcolor="#e5ecfc"></td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">⭐<br/><sub>Finish</sub></td>
    </tr>
  </tbody>
</table>

**Explanation:** There is one obstacle in the middle of the `3 × 3` grid. The robot cannot pass through it, so there are only two possible paths to reach the bottom-right corner:

1. `Right → Right → Down → Down`
2. `Down → Down → Right → Right`

---

## Example 2

**Input:** `obstacleGrid = [[0,1],[0,0]]`

**Output:** `1`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">🤖<br/><sub>Start</sub></td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#f8d7da">🚧<br/><sub>Obstacle</sub></td>
    </tr>
    <tr>
      <td width="80" height="80" bgcolor="#e5ecfc"></td>
      <td width="80" height="80" align="center" valign="middle" bgcolor="#ffffff">⭐<br/><sub>Finish</sub></td>
    </tr>
  </tbody>
</table>

**Explanation:** The top-right cell contains an obstacle, so the robot cannot move right from the starting position. The only valid path is:

1. `Down → Right`

---

## Constraints

- `m == obstacleGrid.length`
- `n == obstacleGrid[i].length`
- `1 <= m, n <= 100`
- `obstacleGrid[i][j]` is `0` or `1`.
