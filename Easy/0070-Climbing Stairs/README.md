# 70. Climbing Stairs

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/climbing-stairs/

## Problem Description

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

## Examples

### Example 1

**Input:**

```text
n = 2
```

**Output:**

```text
2
```

**Explanation:**

There are two ways to climb to the top.

1. `1 step + 1 step`
2. `2 steps`

### Example 2

**Input:**

```text
n = 3
```

**Output:**

```text
3
```

**Explanation:**

There are three ways to climb to the top.

1. `1 step + 1 step + 1 step`
2. `1 step + 2 steps`
3. `2 steps + 1 step`

## Constraints

- `1 <= n <= 45`

## Approach

We can solve this problem using **Dynamic Programming**.

To reach step `n`, you can either:

- Come from step `n - 1` by climbing one step.
- Come from step `n - 2` by climbing two steps.

Therefore, the number of distinct ways to reach step `n` is:

```text
dp[n] = dp[n - 1] + dp[n - 2]
```

### Base Cases

- `dp[1] = 1`
- `dp[2] = 2`

This follows the Fibonacci sequence.

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)` using an optimized approach.
