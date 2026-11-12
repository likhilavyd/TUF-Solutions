# [Palindrome String - I](https://takeuforward.org/practice/dsa/palindrome-string-i?category=practice-strings&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given a string **s** , determine whether it is a **palindrome** . A string is a palindrome if it reads exactly the same from left to right and from right to left.

Return true if **s** is a palindrome; otherwise, return false.

The comparison is **case-sensitive** . Every character, including spaces, digits, and punctuation, must match its corresponding character from the opposite end.

### Example 1:

**Input:** s = "madam"

**Output:** true

**Explanation:** The first and last characters are both `m` , and the second and fourth characters are both `a` . The middle character, `d` , does not need a partner. Reading the string backward gives "madam", exactly the original string. Therefore, the result is `true` .

### Example 2:

**Input:** s = "hello"

**Output:** false

**Explanation:** The first character is h, while the last character is o. These characters differ, so the string cannot read the same in both directions. Its reverse is "olleh", which differs from "hello". Therefore, the result is false.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= s.length() <= 10^5
- s contains printable ASCII characters (codes 32–126), including spaces.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
