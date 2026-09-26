# 38. Count and Say

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/count-and-say/

The **count-and-say sequence** is a sequence of digit strings defined by the recursive formula:

- `countAndSay(1) = "1"`
- `countAndSay(n)` is the run-length encoding of `countAndSay(n - 1)`.

## Run-Length Encoding

Run-length encoding (RLE) is a string compression method that replaces each maximal group of consecutive identical characters with the concatenation of the length of the group followed by the character itself.

For example, to compress the string `"3322251"`:

- `"33"` → `"23"`
- `"222"` → `"32"`
- `"5"` → `"15"`
- `"1"` → `"11"`

Therefore, the compressed string becomes:

```text
"23321511"
```

Given a positive integer `n`, return the `n`th element of the count-and-say sequence.

## Example 1

**Input:**

```text
n = 4
```

**Output:**

```text
"1211"
```

**Explanation:**

```text
countAndSay(1) = "1"
countAndSay(2) = RLE of "1" = "11"
countAndSay(3) = RLE of "11" = "21"
countAndSay(4) = RLE of "21" = "1211"
```

## Example 2

**Input:**

```text
n = 1
```

**Output:**

```text
"1"
```

**Explanation:**

This is the base case.

## Constraints

```text
1 <= n <= 30
```
