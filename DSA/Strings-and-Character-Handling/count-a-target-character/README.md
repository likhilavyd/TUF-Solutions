# [Count a Target Character](https://takeuforward.org/practice/dsa/count-a-target-character?category=practice-strings&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given a string **s** and a target character **target** , return the number of times the target appears in the string.

The comparison is **case-sensitive** : uppercase and lowercase letters are different characters. Count every exact occurrence, including digits, spaces, and special characters. If the target does not occur, return `0` .

### Example 1:

**Input:** s = "banana", target = "a"

**Output:** 3

**Explanation:** The lowercase character a appears at positions 1, 3, and 5 (0-based). Each matches the target exactly, so the total is 3.

### Example 2:

**Input:** s = "AaAaA", target = "A"

**Output:** 3

**Explanation:** Uppercase A appears at positions 0, 2, and 4 and is counted three times. The lowercase a characters at positions 1 and 3 are excluded because the comparison is case-sensitive.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= s.length() <= 10^5
- s contains printable ASCII characters (codes 32–126), including spaces.
- target is exactly one printable ASCII character, including a space.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
