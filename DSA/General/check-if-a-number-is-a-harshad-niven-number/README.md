# [904. Check if a Number is a Harshad (Niven) Number](https://takeuforward.org/practice/dsa/check-if-a-number-is-a-harshad-niven-number)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given a positive integer **N** , determine whether it is a **Harshad** number (also known as a **Niven** number) or not.

A number is said to be a **Harshad** number if it is **divisible** by the **sum** of its **digits** .

### Example 1:

**Input:** 378

**Output:** true

**Explanation:**

- **** Sum of digits = 3 + 7 + 8 = 18
- 378 is divisible by 18 → 378 % 18 == 0
- So, it is a Harshad number.

### Example 2:

**Input:** 379

**Output:** false

**Explanation:**

- Sum of digits = 3 + 7 + 9 = 19
- 379 is **not** divisible by 19 → 379 % 19 != 0
- So, it is **not** a Harshad number.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= N <= 10^9
- Do not use any inbuilt libraries for digit sum.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
