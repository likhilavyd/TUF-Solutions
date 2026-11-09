# [Logical Operators](https://takeuforward.org/practice/dsa/logical-operator?category=practice-normal-operations&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given two integers **A** and **B** , and a logical operator **op** .

The supported operators are:

- **&&** — Logical AND
- **||** — Logical OR

For logical operations, 0 is treated as false and every non-zero integer is treated as true.

**Input**

The input contains two space-separated integers A and B, followed by the operator op.

**Output**

Print 1 if the logical operation evaluates to true. Otherwise, print 0.

### Example 1:

**Input:**

```
1 0 &&
```

**Output:**

```
0
```

**Explanation:**

1 && 0 evaluates to false because one operand is zero.

### Example 2:

**Input:**

```
0 8 ||
```

**Output:**

```
1
```

**Explanation:**

0 || 8 evaluates to true because one operand is non-zero.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- -100 <= A, B <= 100
- op is either && or ||

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
