# 28. Find the Index of the First Occurrence in a String

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

## Problem

Given two strings `needle` and `haystack`, return the index of the **first occurrence** of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.

## Examples

### Example 1

**Input:**

```text id="x4nq7c"
haystack = "sadbutsad", needle = "sad"
```

**Output:**

```text id="m8v2kp"
0
```

**Explanation:**

`"sad"` occurs at index `0` and `6`.

The first occurrence is at index `0`, so we return `0`.

### Example 2

**Input:**

```text id="c7p1zw"
haystack = "leetcode", needle = "leeto"
```

**Output:**

```text id="q2h6yd"
-1
```

**Explanation:**

`"leeto"` does not occur in `"leetcode"`, so we return `-1`.

## Constraints

- `1 <= haystack.length, needle.length <= 10⁴`
- `haystack` and `needle` consist of only lowercase English characters.

## Approach

Use a **sliding window** to check whether `needle` occurs at each possible position in `haystack`.

1. Let `n` be the length of `haystack` and `m` be the length of `needle`.
2. Starting from index `0`, compare the substring of `haystack` with length `m` against `needle`.
3. If the characters match, return the current starting index.
4. Continue until there are fewer than `m` characters remaining.
5. If no match is found, return `-1`.

The first matching position is automatically the first occurrence because we scan from left to right.

## Complexity

- **Time:** `O(n * m)` with direct character-by-character comparison.
- **Space:** `O(1)` auxiliary space.

Where `n` is the length of `haystack` and `m` is the length of `needle`.
