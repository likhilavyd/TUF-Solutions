# [Sum of Every Column in 2D Matrix](https://takeuforward.org/practice/dsa/sum-of-every-column-in-2d-matrix?category=practice-multidimensional-arrays&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given a 2D integer matrix with N rows and M columns.

Your task is to calculate the sum of elements in each column and return an array containing the sum of every column in the same order as the columns appear in the matrix.

The sum of a column is calculated by adding all the elements present in that column.

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
[5, 7, 9]
```

**Explanation:**

The first column sums to 1 + 4 = 5.

The second column sums to 2 + 5 = 7.

The Third column sums to 3 + 6 = 9.

The returned array is [5, 7, 9].

### Example 2:

**Input:**

```
Matrix = [
    [-10, 10],
    [7, 8],
    [9, 9]
]
```

**Output:**

```
[6, 27]
```

**Explanation:**

The first column sums to -10 + 7 + 9 = 6.

The second column sums to 10 + 8 + 9 = 27.

The returned array is [6, 27].

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

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
