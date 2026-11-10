# [Transpose of Matrix](https://takeuforward.org/practice/dsa/transpose-of-matrix?category=practice-multidimensional-arrays&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given a matrix with N rows and M columns. Your task is to find and print the transpose of the matrix.

The transpose of a matrix is obtained by swapping its rows and columns. If the original matrix has N rows and M columns, its transpose will have M rows and N columns.

### Example 1:

**Input:**

```
Matrix = [
    [1, 2, 3],
    [4, 5, 6]
]
```

**Output:**

```
1 4
2 5
3 6
```

**Explanation:**

The given matrix has 2 rows and 3 columns.

To find the transpose, interchange the rows and columns. Each row of the original matrix becomes a column in the transpose.

The first row, 1 2 3, becomes the first column.

The second row, 4 5 6, becomes the second column.

### Example 2:

**Input:**

```
Matrix = [
    [7, 8],
    [9, 10],
    [11, 12]
]
```

**Output:**

```
7 9 11
8 10 12
```

**Explanation:**

The given matrix has 3 rows and 2 columns.

Interchange the rows and columns to obtain the transpose.

The first column, containing 7, 9, 11, becomes the first row.

The second column, containing 8, 10, 12, becomes the second row.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Example 3:

**Input:**

```
Matrix = [
    [-10, 12],
    [5, 10]
]
```

### Constraints

- 1 <= N, M <= 100
- -10^5 <= Matrix[i][j] <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
