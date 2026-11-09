# [Discounted Price](https://takeuforward.org/practice/dsa/discounted-price?category=practice-normal-operations&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given the original price **P** of an item and its discount percentage **D** .

Calculate the discount and final price using:

- **Discount = (P × D) / 100**
- **Final Price = P - Discount**

**Input**

- The input contains two space-separated integers P and D, representing the original price and discount percentage.

**Output**

- Print the final price after applying the discount, rounded to exactly two decimal places. Print the result without labels or trailing spaces.

### Example 1:

**Input:**

```
1000 20
```

**Output:**

```
800.00
```

**Explanation:**

The discount is (1000 × 20) / 100 = 200. Therefore, the final price is 1000 - 200 = 800.00.

### Example 2:

**Input:**

```
999 15
```

**Output:**

```
849.15
```

**Explanation:**

The discount is (999 × 15) / 100 = 149.85. Therefore, the final price is 999 - 149.85 = 849.15.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= P <= 1000000
- 0 <= D <= 100

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
