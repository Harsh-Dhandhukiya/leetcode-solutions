# 95. Unique Binary Search Trees II

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/unique-binary-search-trees-ii/

## **Problem Description**

Given an integer `n`, return all the structurally unique Binary Search Trees (BSTs) that have exactly `n` nodes of unique values from `1` to `n`.

Return the answer in any order.

## **Example 1**

**Input:**

```
n = 3
```

**Output:**

```
[
  [1,null,2,null,3],
  [1,null,3,2],
  [2,1,3],
  [3,1,null,null,2],
  [3,2,null,1]
]
```

**Explanation:**

There are 5 structurally unique BSTs possible when `n = 3`.

**Tree 1:**

```
1
 \
  2
   \
    3
```

**Tree 2:**

```
1
 \
  3
 /
2
```

**Tree 3:**

```
   2
  / \
 1   3
```

**Tree 4:**

```
   3
  /
 1
  \
   2
```

**Tree 5:**

```
    3
   /
  2
 /
1
```

## **Example 2**

**Input:**

```
n = 1
```

**Output:**

```
[[1]]
```

**Explanation:**

Only one BST is possible.

**Tree:**

```
1
```

## **Constraints**

```
1 <= n <= 8
```

## **Expected Output**

Return all structurally unique BSTs containing exactly `n` nodes, with values ranging from `1` to `n`.

The order of the returned BSTs does not matter.
