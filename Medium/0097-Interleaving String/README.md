# 97. Interleaving String

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/interleaving-string/

## **Problem Statement**

Given strings `s1`, `s2`, and `s3`, determine whether `s3` is formed by an **interleaving** of `s1` and `s2`.

An interleaving of two strings `s` and `t` is a configuration where:

- `s` is divided into `n` substrings: `s1, s2, ..., sn`.
- `t` is divided into `m` substrings: `t1, t2, ..., tm`.
- The difference between the number of substrings is at most 1: `|n - m| <= 1`.
- The substrings are interleaved while preserving their original order.

## **Example 1**

**Input:**

```
s1 = "aabcc"
s2 = "dbbca"
s3 = "aadbbcbcac"
```

**Output:**

```
true
```

**Explanation:**

One possible way to obtain `s3` is:

```
s1 = "aa" + "bc" + "c"
s2 = "dbbc" + "a"

s3 = "aa" + "d" + "bb" + "c" + "b" + "c" + "a" + "c"

s3 = "aadbbcbcac"
```

### **ASCII Visualization**

The following visualization shows how characters from `s1` and `s2` are interleaved to form `s3`.

```
       s1 (RED)
       a   a   b   c   c
       |   |           |   |
       |   |           |   |
       v   v           v   v

       s2 (BLUE)
           d   b   b   c   a
           |   |   |   |       |
           v   v   v   v       v

  -------------------------------------
       INTERLEAVED STRING (s3)
  -------------------------------------

       a   a   d   b   b   c   b   c   a   c
       |   |   |   |   |   |   |   |   |   |
       1   1   2   2   2   2   1   1   2   1

  -------------------------------------
  1 = Character taken from s1
  2 = Character taken from s2
  -------------------------------------
```

**Character-by-character mapping:**

| Output Index | Character | Source |
| ------------ | --------- | ------ |
| 0            | a         | s1     |
| 1            | a         | s1     |
| 2            | d         | s2     |
| 3            | b         | s2     |
| 4            | b         | s2     |
| 5            | c         | s2     |
| 6            | b         | s1     |
| 7            | c         | s1     |
| 8            | a         | s2     |
| 9            | c         | s1     |

Since the relative order of characters from both original strings is preserved, the output is `true`.

## **Example 2**

**Input:**

```
s1 = "aabcc"
s2 = "dbbca"
s3 = "aadbbbaccc"
```

**Output:**

```
false
```

**Explanation:**

It is impossible to interleave `s1` and `s2` while preserving the original character order to obtain `s3`.

## **Example 3**

**Input:**

```
s1 = ""
s2 = ""
s3 = ""
```

**Output:**

```
true
```

**Explanation:**

Both input strings are empty, so their interleaving also produces an empty string.

## **Constraints**

```
0 <= s1.length, s2.length <= 100

0 <= s3.length <= 200

s1, s2, and s3 consist of lowercase English letters.
```
