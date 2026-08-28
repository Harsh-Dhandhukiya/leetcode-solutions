# 22. Generate Parentheses

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/generate-parentheses/

## Problem

Given `n` pairs of parentheses, write a function to **generate all combinations of well-formed parentheses**.

## Examples

### Example 1

**Input:**

```text
n = 3
```

**Output:**

```text
["((()))","(()())","(())()","()(())","()()()"]
```

### Example 2

**Input:**

```text
n = 1
```

**Output:**

```text
["()"]
```

## Constraints

- `1 <= n <= 8`

## Approach

Use **backtracking** to generate all valid combinations.

At each step, keep track of:

- `open`: the number of opening parentheses used.
- `close`: the number of closing parentheses used.
- `current`: the parentheses string being built.

The rules are:

1. Add an opening parenthesis `(` if `open < n`.
2. Add a closing parenthesis `)` only if `close < open`.
3. When the length of `current` reaches `2 * n`, add it to the result.

This guarantees that every generated string is a valid combination of parentheses.

## Complexity

- **Time:** `O(4ⁿ / √n)` — the number of valid combinations is the `n`th Catalan number.
- **Space:** `O(n)` auxiliary recursion space, excluding the space required to store the output.
