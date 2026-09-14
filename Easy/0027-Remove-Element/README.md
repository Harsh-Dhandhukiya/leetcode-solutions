# 27. Remove Element

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/remove-element/

## Problem

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place**. The order of the elements may be changed.

Then return the **number of elements in `nums` which are not equal to `val`**.

Consider the number of elements in `nums` which are not equal to `val` to be `k`.

To be accepted, you need to:

- Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`.
- The remaining elements of `nums` and the size of `nums` are not important.
- Return `k`.

## Custom Judge

The judge will test your solution with code similar to:

```java id="5z9h6p"
int[] nums = [...]; // Input array
int val = ...;      // Value to remove
int[] expectedNums = [...]; // Expected answer with correct length
                               // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;

sort(nums, 0, k); // Sort the first k elements of nums

for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be accepted.

## Examples

### Example 1

**Input:**

```text id="9ps4bj"
nums = [3,2,2,3], val = 3
```

**Output:**

```text id="4b3c5n"
2, nums = [2,2,_,_]
```

**Explanation:**

Your function should return `k = 2`, with the first two elements of `nums` being `2`.

It does not matter what you leave beyond the returned `k`.

### Example 2

**Input:**

```text id="4g1qzc"
nums = [0,1,2,2,3,0,4,2], val = 2
```

**Output:**

```text id="9z6jhf"
5, nums = [0,1,4,0,3,_,_,_]
```

**Explanation:**

Your function should return `k = 5`, with the first five elements of `nums` containing `0`, `0`, `1`, `3`, and `4`.

The five elements can be returned in any order.

It does not matter what you leave beyond the returned `k`.

## Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

## Approach

Use the **two-pointer technique** to remove the target value in-place.

1. Maintain a pointer `k` representing the position where the next valid element should be placed.
2. Iterate through every element in `nums`.
3. If the current element is not equal to `val`, place it at index `k` and increment `k`.
4. Ignore elements equal to `val`.
5. Return `k` after processing the entire array.

This approach preserves all elements that are not equal to `val` while using constant extra space.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)` auxiliary space

Where `n` is the length of the array.
