# 61. Rotate List

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/rotate-list/

Given the `head` of a linked list, rotate the list to the right by `k` places.

## Example 1

**Input:**

```text
head = [1,2,3,4,5], k = 2
```

**Output:**

```text
[4,5,1,2,3]
```

**Explanation:**

Rotate the list to the right by 1 place:

```text
1 -> 2 -> 3 -> 4 -> 5
5 -> 1 -> 2 -> 3 -> 4
```

Rotate the list to the right by 2 places:

```text
1 -> 2 -> 3 -> 4 -> 5
4 -> 5 -> 1 -> 2 -> 3
```

## Example 2

**Input:**

```text
head = [0,1,2], k = 4
```

**Output:**

```text
[2,0,1]
```

**Explanation:**

Rotate the list to the right by 1 place:

```text
0 -> 1 -> 2
2 -> 0 -> 1
```

Rotate the list to the right by 2 places:

```text
0 -> 1 -> 2
1 -> 2 -> 0
```

Rotate the list to the right by 3 places:

```text
0 -> 1 -> 2
0 -> 1 -> 2
```

Rotate the list to the right by 4 places:

```text
0 -> 1 -> 2
2 -> 0 -> 1
```

## Constraints

- The number of nodes in the list is in the range `[0, 500]`.
- `-100 <= Node.val <= 100`
- `0 <= k <= 2 * 10^9`
