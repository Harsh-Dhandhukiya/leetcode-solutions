# 87. Scramble String

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/scramble-string/

## Problem Description

We can scramble a string `s` to get a string `t` using the following algorithm:

1. If the length of the string is 1, stop.
2. If the length of the string is greater than 1:
   - Split the string into two non-empty substrings at a random index. If the string is `s`, divide it into `x` and `y` where `s = x + y`.
   - Randomly decide to swap the two substrings or keep them in the same order. After this step, `s` may become `s = x + y` or `s = y + x`.
   - Apply the same algorithm recursively on both substrings `x` and `y`.

Given two strings `s1` and `s2` of the same length, return `true` if `s2` is a scrambled string of `s1`, otherwise return `false`.

## Examples

### Example 1

**Input:**

```text
s1 = "great", s2 = "rgeat"
```

Output:

```
true
```

Explanation:

One possible scenario applied on `s1` is:

```
"great" --> "gr/eat"
"gr/eat" --> "gr/eat"
"gr/eat" --> "g/r / e/at"
"g/r / e/at" --> "rg / e/at"
"rg / e/at" --> "rg / e / a/t"
"rg / e / a/t" --> "rg / e / a/t"
```

The resulting string is `"rgeat"`, which is equal to `s2`.

### Example 2

Input:

```
s1 = "abcde", s2 = "caebd"
```

Output:

```
false
```

### Example 3

Input:

```
s1 = "a", s2 = "a"
```

Output:

```
true
```

## Constraints

- `s1.length == s2.length`
- `1 <= s1.length <= 30`
- `s1` and `s2` consist of lowercase English letters.
