# [Keep Only Even Numbers](https://takeuforward.org/practice/dsa/keep-only-even-numbers?category=practice-dynamic-arrays&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given an array of integers, your task is to filter the array such that only the even integers are retained. The original relative order of the even elements must be strictly preserved.

### Example 1:

**Input:**

```
[3, 5. 8, 9]
```

**Output:**

```
[8]
```

**Explanation:**

Input array: [3, 5, 8, 9]

- Check each element to determine if it is divisible by 2:
- 3 is odd — filtered out.
- 5 is odd — filtered out.
- 8 is even (8 % 2 == 0) — retained.
- 9 is odd — filtered out.
- Result: Only [8] remains, preserving the original relative order.

### Example 2:

**Input:**

```
[2, 4, 6]
```

**Output:**

```
[2, 4, 6]
```

**Explanation:**

- Input array: [2, 4, 6]
- Check each element:
- 2, 4, and 6 are all even (2 % 2 == 0, 4 % 2 == 0, 6 % 2 == 0).
- Result: All elements satisfy the condition, so the output remains [2, 4, 6] in the original order.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= N <= 10^5
- -10^5 <= nums[i] <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
