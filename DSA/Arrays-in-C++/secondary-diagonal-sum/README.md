# [Secondary Diagonal Sum](https://takeuforward.org/practice/dsa/secondary-diagonal-sum?category=practice-multidimensional-arrays&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given a square matrix of size N x N. Your task is to calculate the sum of the elements present on the secondary diagonal of the matrix.

The secondary diagonal runs from the top-right corner to the bottom-left corner. Its elements have row and column indices whose sum is (N-1), using zero-based indexing.

### Example 1:

**Input:**

```
Matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
```

**Output:**

```
15
```

**Explanation:**

The main diagonal elements are 3, 5, 7. Their sum is 3 + 5 + 7 = 15.

### Example 2:

**Input:**

```
Matrix = [
    [-10, 20],
    [30, 40]
]
```

**Output:**

```
50
```

**Explanation:**

The main diagonal elements are 20, 30. Their sum is 20 + 30 = 50.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= N <= 100
- -10^5 <= Matrix[i][j] <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
