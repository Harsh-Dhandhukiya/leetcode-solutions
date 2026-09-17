# 30. Substring with Concatenation of All Words

- **Difficulty:** Hard
- **Problem Link:** https://leetcode.com/problems/substring-with-concatenation-of-all-words/

## Problem

You are given a string `s` and an array of strings `words`. All the strings in `words` are of the same length.

A **concatenated string** is a string that exactly contains all the strings of any permutation of `words` concatenated.

For example, if:

```text
words = ["ab","cd","ef"]
```

then these are concatenated strings:

```text
"abcdef"
"abefcd"
"cdabef"
"cdefab"
"efabcd"
"efcdab"
```

A string such as `"acdbef"` is not a concatenated string because it is not the concatenation of any permutation of `words`.

Return an array of the **starting indices** of all concatenated substrings in `s`. You can return the answer in any order.

## Examples

### Example 1

**Input:**

```text
s = "barfoothefoobarman"
words = ["foo","bar"]
```

**Output:**

```text
[0,9]
```

**Explanation:**

The substring starting at index `0` is `"barfoo"`. It is the concatenation of `["bar","foo"]`, which is a permutation of `words`.

The substring starting at index `9` is `"foobar"`. It is the concatenation of `["foo","bar"]`, which is a permutation of `words`.

### Example 2

**Input:**

```text
s = "wordgoodgoodgoodbestword"
words = ["word","good","best","word"]
```

**Output:**

```text
[]
```

**Explanation:**

There is no concatenated substring.

### Example 3

**Input:**

```text
s = "barfoofoobarthefoobarman"
words = ["bar","foo","the"]
```

**Output:**

```text
[6,9,12]
```

**Explanation:**

The substring starting at index `6` is `"foobar the"` / `"foobarthe"`. It is the concatenation of `["foo","bar","the"]`.

The substring starting at index `9` is `"barthefoo"`. It is the concatenation of `["bar","the","foo"]`.

The substring starting at index `12` is `"thefoobar"`. It is the concatenation of `["the","foo","bar"]`.

## Constraints

- `1 <= s.length <= 10⁴`
- `1 <= words.length <= 5000`
- `1 <= words[i].length <= 30`
- `s` and `words[i]` consist of lowercase English letters.

## Approach

Use a **sliding window with a frequency map**.

Let:

- `wordLen` = length of each word.
- `wordCount` = number of words.
- `totalLen = wordLen * wordCount`.

First, create a frequency map containing the number of times each word appears in `words`.

Then scan `s` using `wordLen` different starting offsets:

1. Start a sliding window at each offset from `0` to `wordLen - 1`.
2. Read `s` one word at a time.
3. If the current word is not in the frequency map, reset the window.
4. If the word is valid, add it to the current window.
5. If a word occurs too many times, move the left side of the window forward until its count is valid again.
6. When the window contains exactly `wordCount` words, record its starting index.
7. Continue scanning for additional matches.

This avoids generating all permutations of `words`, which would be extremely inefficient.

## Complexity

Let `n` be the length of `s` and `m` be the number of words.

- **Time:** `O(n)` approximately, with hash-map operations treated as `O(1)`.
- **Space:** `O(m)` for the frequency maps.

The sliding window efficiently handles duplicate words and ensures that every candidate substring contains exactly the required number of occurrences of each word.
