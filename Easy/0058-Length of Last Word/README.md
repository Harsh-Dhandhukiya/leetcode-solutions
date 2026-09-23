# 58. Length of Last Word

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/length-of-last-word/

## Problem

Given a string `s` consisting of words and spaces, return the **length of the last word** in the string.

A word is a maximal substring consisting of non-space characters only.

## Examples

### Example 1

**Input:**

```text
s = "Hello World"
```

**Output:**

```text
5
```

**Explanation:**
The last word is `"World"` with length `5`.

### Example 2

**Input:**

```text
s = "   fly me   to   the moon  "
```

**Output:**

```text
4
```

**Explanation:**
The last word is `"moon"` with length `4`.

### Example 3

**Input:**

```text
s = "luffy is still joyboy"
```

**Output:**

```text
6
```

**Explanation:**
The last word is `"joyboy"` with length `6`.

## Constraints

- `1 <= s.length <= 10^4`
- `s` consists of only English letters and spaces `' '`.
- There will be at least one word in `s`.

## Approach

Start from the end of the string:

1. Skip any trailing spaces.
2. Count characters until a space is encountered.
3. The count is the length of the last word.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`
