# 29. Divide Two Integers

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/divide-two-integers/

## Problem

Given two integers `dividend` and `divisor`, divide two integers **without using multiplication, division, and mod operator**.

The integer division should truncate toward zero, which means losing its fractional part. For example, `8.345` would be truncated to `8`, and `-2.7335` would be truncated to `-2`.

Return the **quotient** after dividing `dividend` by `divisor`.

### Note

Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range:

```text
[-2³¹, 2³¹ - 1]
```

For this problem:

- If the quotient is strictly greater than `2³¹ - 1`, return `2³¹ - 1`.
- If the quotient is strictly less than `-2³¹`, return `-2³¹`.

## Examples

### Example 1

**Input:**

```text
dividend = 10, divisor = 3
```

**Output:**

```text
3
```

**Explanation:**

```text
10 / 3 = 3.33333...
```

The result is truncated toward zero, so the answer is `3`.

### Example 2

**Input:**

```text
dividend = 7, divisor = -3
```

**Output:**

```text
-2
```

**Explanation:**

```text
7 / -3 = -2.33333...
```

The result is truncated toward zero, so the answer is `-2`.

## Constraints

- `-2³¹ <= dividend, divisor <= 2³¹ - 1`
- `divisor != 0`

## Approach

Use **bit manipulation and repeated subtraction** instead of multiplication, division, or modulo.

1. Determine the sign of the result based on whether `dividend` and `divisor` have different signs.
2. Work with the absolute values of both numbers.
3. Repeatedly find the largest power-of-two multiple of the divisor that can be subtracted from the remaining dividend.
4. Add the corresponding power of two to the quotient.
5. Continue until the remaining dividend is smaller than the divisor.
6. Apply the correct sign to the quotient.
7. Clamp the result to the 32-bit signed integer range if necessary.

Using powers of two makes the algorithm significantly faster than subtracting the divisor one time at a time.

## Complexity

- **Time:** `O(log n)`
- **Space:** `O(1)` auxiliary space

Where `n` represents the magnitude of the dividend.
