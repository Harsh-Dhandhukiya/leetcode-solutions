# 23. Merge k Sorted Lists

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/merge-k-sorted-lists/

## Problem

You are given an array of `k` linked-lists `lists`, where each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

## Examples

### Example 1

**Input:**

```text
lists = [[1,4,5],[1,3,4],[2,6]]
```

**Output:**

```text
[1,1,2,3,4,4,5,6]
```

**Explanation:**

The linked-lists are:

```text
1 -> 4 -> 5
1 -> 3 -> 4
2 -> 6
```

Merging them into one sorted linked list:

```text
1 -> 1 -> 2 -> 3 -> 4 -> 4 -> 5 -> 6
```

### Example 2

**Input:**

```text
lists = []
```

**Output:**

```text
[]
```

### Example 3

**Input:**

```text
lists = [[]]
```

**Output:**

```text
[]
```

## Constraints

- `k == lists.length`
- `0 <= k <= 10⁴`
- `0 <= lists[i].length <= 500`
- `-10⁴ <= lists[i][j] <= 10⁴`
- `lists[i]` is sorted in **ascending order**.
- The sum of `lists[i].length` will not exceed `10⁴`.

## Approach

Use a **min-heap (priority queue)** to efficiently find the smallest node among the `k` linked lists.

1. Add the head of every non-empty linked list to the min-heap.
2. Create a dummy node to build the merged list.
3. Remove the smallest node from the heap.
4. Attach that node to the merged list.
5. If the removed node has a next node, add it to the heap.
6. Continue until the heap is empty.
7. Return `dummy.next`.

Because the heap always contains the smallest available node from each list, the resulting linked list is sorted.

## Complexity

Let `N` be the total number of nodes across all linked lists and `k` be the number of lists.

- **Time:** `O(N log k)`
- **Space:** `O(k)` auxiliary space for the min-heap.
