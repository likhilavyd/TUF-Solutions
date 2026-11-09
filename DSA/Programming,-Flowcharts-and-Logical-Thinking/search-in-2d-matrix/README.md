# [Search in 2D Matrix](https://takeuforward.org/practice/dsa/search-in-2d-matrix?category=practice-multidimensional-arrays&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given a matrix with N rows and M columns and an integer X. Your task is to determine whether the value X exists in the matrix.

If X is present in the matrix, print true. Otherwise, print false.

### Example 1:

**Input:**

```
Matrix = [
    [1, 2, 3],
    [4, 5, 6]
]
X = 5
```

**Output:**

```
true
```

**Explanation:**

The given matrix has 2 rows and 3 columns.

The target value is 5. By checking the matrix elements, we find that 5 is present in the second row and second column.

Since the target value exists in the matrix, the output is true.

### Example 2:

**Input:**

```
Matrix = [
    [7, 8],
    [9, 10],
    [11, 12]
]
X = 13
```

**Output:**

```
false
```

**Explanation:**

The given matrix has 3 rows and 2 columns.

The target value is 13. Checking all the elements, we find that none of them equals 13.

Since the target value does not exist in the matrix, the output is false.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= N, M <= 100
- -10^5 <= X <= 10^5
- -10^5 <= Matrix[i][j] <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
