# 11. Container With Most Water

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/container-with-most-water/

## Problem

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i`th line are `(i, 0)` and `(i, height[i])`.

Find two lines that, together with the x-axis, form a container such that the container contains the most water.

Return the **maximum amount of water** a container can store.

> **Notice:** You may not slant the container.

## Examples

### Example 1

**Input:**

```text
height = [1,8,6,2,5,4,8,3,7]
```

**Output:**

```text
49
```

**Explanation:**

The above vertical lines are represented by the array `[1,8,6,2,5,4,8,3,7]`.

The maximum area of water the container can contain is `49`.

### Example 2

**Input:**

```text
height = [1,1]
```

**Output:**

```text
1
```

## Approach

Use the **two-pointer** technique.

1. Set one pointer `left` at the beginning of the array.

2. Set another pointer `right` at the end of the array.

3. Calculate the area between the two lines:

   ```text
   area = min(height[left], height[right]) * (right - left)
   ```

4. Update the maximum area.

5. Move the pointer with the **smaller height** inward.

6. Continue until `left` and `right` meet.

The reason we move the smaller-height pointer is that the container's height is limited by the shorter line. Moving the taller line cannot increase the height while also decreasing the width.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)`

## Constraints

- `n == height.length`
- `2 <= n <= 10^5`
- `0 <= height[i] <= 10^4`
