# [Sum of Every Row in 2D Matrix](https://takeuforward.org/practice/dsa/sum-of-every-row-in-2d-matrix?category=practice-multidimensional-arrays&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given a 2D integer matrix with N rows and M columns.

Your task is to calculate the sum of elements in each row and return an array containing the sum of every row in the same order as the rows appear in the matrix.

The sum of a row is calculated by adding all the elements present in that row.

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
[6, 15]
```

**Explanation:**

The first row sums to 1 + 2 + 3 = 6.

The second row sums to 4 + 5 + 6 = 15.

The returned array is [6, 15].

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
[0, 15, 18]
```

**Explanation:**

The first row sums to -10 + 10 = 0.

The second row sums to 7 + 8 = 15.

The third row sums to 9 + 9 = 18.

The returned array is [0, 15, 18].

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
