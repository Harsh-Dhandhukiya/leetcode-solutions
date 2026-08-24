# 17. Letter Combinations of a Phone Number

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/letter-combinations-of-a-phone-number/

## Problem

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent.

Return the answer in **any order**.

A mapping of digits to letters, just like on the telephone buttons, is given below.

> Note: `1` does not map to any letters.

### Digit to Letter Mapping

| Digit | Letters |
| :---: | :------ |
|  `2`  | `abc`   |
|  `3`  | `def`   |
|  `4`  | `ghi`   |
|  `5`  | `jkl`   |
|  `6`  | `mno`   |
|  `7`  | `pqrs`  |
|  `8`  | `tuv`   |
|  `9`  | `wxyz`  |

## Example 1

**Input:**

```text
digits = "23"
```

**Output:**

```text
["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

## Example 2

**Input:**

```text
digits = "2"
```

**Output:**

```text
["a","b","c"]
```

## Constraints

- `1 <= digits.length <= 4`
- `digits[i]` is a digit in the range `['2', '9']`.

## Approach

A natural solution is **backtracking**:

1. Create a mapping from each digit to its corresponding letters.
2. Start with an empty combination.
3. For the current digit, try each possible letter.
4. Add the letter to the current combination.
5. Recursively process the next digit.
6. Once all digits have been processed, add the completed combination to the result.
7. Backtrack by removing the last character and try the next letter.

## Complexity

Let `k` be the number of digits.

- Each digit maps to at most `4` letters.
- **Time:** `O(4^k * k)`
- **Space:** `O(k)` auxiliary recursion space, excluding the output array.
