# 26. Remove Duplicates from Sorted Array

- **Difficulty:** Easy
- **Problem Link:** https://leetcode.com/problems/remove-duplicates-from-sorted-array/

## Problem

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only **once**. The relative order of the elements should be kept the same.

Consider the number of unique elements in `nums` to be `k`. After removing duplicates, return the number of unique elements `k`.

The first `k` elements of `nums` should contain the unique numbers in **sorted order**. The remaining elements beyond index `k - 1` can be ignored.

## Custom Judge

The judge will test your solution with code similar to:

```java
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // Expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;

for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be accepted.

## Examples

### Example 1

**Input:**

```text id="6s7d9m"
nums = [1,1,2]
```

**Output:**

```text id="4x7c2q"
2, nums = [1,2,_]
```

**Explanation:**

Your function should return `k = 2`, with the first two elements of `nums` being `1` and `2` respectively.

It does not matter what you leave beyond the returned `k`.

### Example 2

**Input:**

```text id="j8y1pk"
nums = [0,0,1,1,1,2,2,3,3,4]
```

**Output:**

```text id="4w2m6n"
5, nums = [0,1,2,3,4,_,_,_,_,_]
```

**Explanation:**

Your function should return `k = 5`, with the first five elements of `nums` being `0`, `1`, `2`, `3`, and `4` respectively.

It does not matter what you leave beyond the returned `k`.

## Constraints

- `1 <= nums.length <= 3 * 10⁴`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in **non-decreasing order**.

## Approach

Use the **two-pointer technique** to modify the array in-place.

1. Keep a pointer `k` representing the position where the next unique element should be placed.
2. Start scanning the array from the second element.
3. Compare each element with the previously stored unique element.
4. If the current element is different, place it at index `k` and increment `k`.
5. Continue until the entire array has been processed.
6. Return `k`, which represents the number of unique elements.

Because the array is already sorted, duplicate values are adjacent, making it possible to detect duplicates with a single pass.

## Complexity

- **Time:** `O(n)`
- **Space:** `O(1)` auxiliary space

Where `n` is the length of the array.
