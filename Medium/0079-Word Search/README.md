# 79. Word Search

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/word-search/

---

Given an `m × n` grid of characters `board` and a string `word`, return `true` if `word` exists in the grid, otherwise return `false`.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are **horizontally or vertically neighboring**. The same letter cell may not be used more than once.

---

## Example 1

**Input:** `board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]`, `word = "ABCCED"`

**Output:** `true`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="60" height="55" align="center" valign="middle" bgcolor="#e6b443"><b>A</b></td>
      <td width="60" align="center" valign="middle" bgcolor="#e6b443"><b>B</b></td>
      <td width="60" align="center" valign="middle" bgcolor="#e6b443"><b>C</b></td>
      <td width="60" align="center" valign="middle" bgcolor="#ffffff">E</td>
    </tr>
    <tr>
      <td height="55" align="center" valign="middle" bgcolor="#ffffff">S</td>
      <td align="center" valign="middle" bgcolor="#ffffff">F</td>
      <td align="center" valign="middle" bgcolor="#e6b443"><b>C</b></td>
      <td align="center" valign="middle" bgcolor="#ffffff">S</td>
    </tr>
    <tr>
      <td height="55" align="center" valign="middle" bgcolor="#ffffff">A</td>
      <td align="center" valign="middle" bgcolor="#e6b443"><b>D</b></td>
      <td align="center" valign="middle" bgcolor="#e6b443"><b>E</b></td>
      <td align="center" valign="middle" bgcolor="#ffffff">E</td>
    </tr>
  </tbody>
</table>

**Explanation:** The word `"ABCCED"` can be constructed by following the path:

`A → B → C → C → E → D`

Each letter is horizontally or vertically adjacent to the previous letter, and no cell is used more than once. Therefore, the function returns `true`.

---

## Example 2

**Input:** `board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]`, `word = "SEE"`

**Output:** `true`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="60" height="55" align="center" valign="middle" bgcolor="#ffffff">A</td>
      <td width="60" align="center" valign="middle" bgcolor="#ffffff">B</td>
      <td width="60" align="center" valign="middle" bgcolor="#ffffff">C</td>
      <td width="60" align="center" valign="middle" bgcolor="#ffffff">E</td>
    </tr>
    <tr>
      <td height="55" align="center" valign="middle" bgcolor="#ffffff">S</td>
      <td align="center" valign="middle" bgcolor="#ffffff">F</td>
      <td align="center" valign="middle" bgcolor="#ffffff">C</td>
      <td align="center" valign="middle" bgcolor="#e6b443"><b>S</b></td>
    </tr>
    <tr>
      <td height="55" align="center" valign="middle" bgcolor="#ffffff">A</td>
      <td align="center" valign="middle" bgcolor="#ffffff">D</td>
      <td align="center" valign="middle" bgcolor="#e6b443"><b>E</b></td>
      <td align="center" valign="middle" bgcolor="#e6b443"><b>E</b></td>
    </tr>
  </tbody>
</table>

**Explanation:** The word `"SEE"` can be constructed by following the path:

`S → E → E`

The letters are sequentially adjacent, and no cell is reused. Therefore, the function returns `true`.

---

## Example 3

**Input:** `board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]`, `word = "ABCB"`

**Output:** `false`

**Grid visualization:**

<table border="1" bordercolor="#cdd9f7" cellspacing="0" cellpadding="0">
  <tbody>
    <tr>
      <td width="60" height="55" align="center" valign="middle" bgcolor="#ffffff">A</td>
      <td width="60" align="center" valign="middle" bgcolor="#ffffff">B</td>
      <td width="60" align="center" valign="middle" bgcolor="#ffffff">C</td>
      <td width="60" align="center" valign="middle" bgcolor="#ffffff">E</td>
    </tr>
    <tr>
      <td height="55" align="center" valign="middle" bgcolor="#ffffff">S</td>
      <td align="center" valign="middle" bgcolor="#ffffff">F</td>
      <td align="center" valign="middle" bgcolor="#ffffff">C</td>
      <td align="center" valign="middle" bgcolor="#ffffff">S</td>
    </tr>
    <tr>
      <td height="55" align="center" valign="middle" bgcolor="#ffffff">A</td>
      <td align="center" valign="middle" bgcolor="#ffffff">D</td>
      <td align="center" valign="middle" bgcolor="#ffffff">E</td>
      <td align="center" valign="middle" bgcolor="#ffffff">E</td>
    </tr>
  </tbody>
</table>

**Explanation:** Although the letters `A`, `B`, and `C` can be found in sequence, constructing `"ABCB"` would require reusing the same `B` cell. Since a cell cannot be used more than once, the word cannot be constructed. Therefore, the function returns `false`.

---

## Constraints

- `m == board.length`
- `n == board[i].length`
- `1 <= m, n <= 6`
- `1 <= word.length <= 15`
- `board` and `word` consist of only lowercase and uppercase English letters.
