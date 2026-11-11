# [915. Check Whether a Floating-Point Number is Even or Odd](https://takeuforward.org/practice/dsa/check-whether-a-floating-point-number-is-even-or-odd)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are given a floating-point number as input. Your task is to determine whether the number is **even** or **odd** .

Unlike integers, you cannot determine evenness or oddness by simply looking at the last digit. You must consider only the **integer part** (i.e., the part before the decimal point) of the number and apply the standard rule:

- A number is **even** if its integer part is divisible by 2.
- A number is **odd** otherwise.

**Note:**

- The digits after the decimal point are **ignored** .
- Trailing zeroes after the decimal point do not affect the result.

### Example 1:

**Input:** num = 100.7

**Output:** even

**Explanation:** Integer part = 100 → 100 % 2 == 0 → even

### Example 2:

**Input:** num = 98.8

**Output:** even

**Explanation:** Integer part = 98 → 98 % 2 == 0 → even

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- The number will be a valid floating-point number with up to 10 digits before the decimal and up to 6 digits after it.
- The number may or may not include trailing zeros after the decimal point.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
