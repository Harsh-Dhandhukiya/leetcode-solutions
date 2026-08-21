# 12. Integer to Roman

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/integer-to-roman/

## Problem

Seven different symbols represent Roman numerals with the following values:

| Symbol | Value |
| :----: | ----: |
|  `I`   |     1 |
|  `V`   |     5 |
|  `X`   |    10 |
|  `L`   |    50 |
|  `C`   |   100 |
|  `D`   |   500 |
|  `M`   |  1000 |

Roman numerals are formed by appending the conversions of decimal place values from highest to lowest.

Converting a decimal place value into a Roman numeral has the following rules:

- If the value does not start with `4` or `9`, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.
- If the value starts with `4` or `9`, use the subtractive form representing one symbol subtracted from the following symbol. For example, `4` is `IV`, `9` is `IX`, `40` is `XL`, `90` is `XC`, `400` is `CD`, and `900` is `CM`. Only the following subtractive forms are used: `IV`, `IX`, `XL`, `XC`, `CD`, and `CM`.
- Only powers of `10` (`I`, `X`, `C`, `M`) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append `5` (`V`), `50` (`L`), or `500` (`D`) multiple times. If you need to append a symbol 4 times, use the subtractive form.

Given an integer, convert it to a Roman numeral.

## Examples

### Example 1

**Input:**

```text
num = 3749
```

**Output:**

```text
"MMMDCCXLIX"
```

**Explanation:**

```text
3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
 700 = DCC as 500 (D) + 100 (C) + 100 (C)
  40 = XL as 10 (X) less of 50 (L)
   9 = IX as 1 (I) less of 10 (X)
```

> **Note:** `49` is not `IL` because the conversion is based on decimal places.

### Example 2

**Input:**

```text
num = 58
```

**Output:**

```text
"LVIII"
```

**Explanation:**

```text
50 = L
 8 = VIII
```

### Example 3

**Input:**

```text
num = 1994
```

**Output:**

```text
"MCMXCIV"
```

**Explanation:**

```text
1000 = M
 900 = CM
  90 = XC
   4 = IV
```

## Approach

Use a greedy approach with Roman numeral values ordered from largest to smallest.

For each value:

1. Determine how many times the value can be subtracted from `num`.
2. Append the corresponding Roman symbol to the result.
3. Subtract the value from `num`.
4. Continue until `num` becomes `0`.

Including the subtractive combinations (`CM`, `CD`, `XC`, `XL`, `IX`, and `IV`) allows every number from `1` to `3999` to be converted correctly.

## Complexity

- **Time:** `O(1)` because the input is limited to `1 <= num <= 3999`.
- **Space:** `O(1)` excluding the output string.

## Constraints

- `1 <= num <= 3999`
