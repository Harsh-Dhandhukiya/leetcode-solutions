# 71. Simplify Path

- **Difficulty:** Medium
- **Problem Link:** https://leetcode.com/problems/simplify-path/

## Problem Description

You are given an **absolute path** for a Unix-style file system, which always begins with a slash `/`. Your task is to transform this absolute path into its simplified canonical path.

### Rules of a Unix-Style File System

- A single period `.` represents the current directory.
- A double period `..` represents the previous (parent) directory.
- Multiple consecutive slashes, such as `//` and `///`, are treated as a single slash `/`.
- Any sequence of periods that does not match the rules above should be treated as a valid directory or file name.

For example:

- `...` is a valid directory name.
- `....` is a valid directory name.

## Canonical Path Rules

The simplified canonical path should follow these rules:

1. The path must start with a single slash `/`.
2. Directories within the path must be separated by exactly one slash `/`.
3. The path must not end with a slash `/`, unless it is the root directory.
4. The path must not contain single or double periods (`.` or `..`) used to denote current or parent directories.

## Examples

### Example 1

**Input:**

```text
path = "/home/"
```

**Output:**

```text
"/home"
```

**Explanation:**

The trailing slash should be removed.

### Example 2

**Input:**

```text
path = "/home//foo/"
```

**Output:**

```text
"/home/foo"
```

**Explanation:**

Multiple consecutive slashes are replaced by a single slash.

### Example 3

**Input:**

```text
path = "/home/user/Documents/../Pictures"
```

**Output:**

```text
"/home/user/Pictures"
```

**Explanation:**

A double period `..` refers to the directory one level up (the parent directory).

### Example 4

**Input:**

```text
path = "/../"
```

**Output:**

```text
"/"
```

**Explanation:**

Going one level up from the root directory is not possible.

### Example 5

**Input:**

```text
path = "/.../a/..//b/c/../d/./"
```

**Output:**

```text
"/.../b/d"
```

**Explanation:**

`...` is a valid directory name in this problem.

## Constraints

- `1 <= path.length <= 3000`
- `path` consists of English letters, digits, period `.`, slash `/`, or underscore `_`.
- `path` is a valid absolute Unix path.

## Expected Output

Return the simplified canonical path as a string.
