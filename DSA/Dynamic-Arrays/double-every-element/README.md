# [Double Every Element](https://takeuforward.org/practice/dsa/double-every-element?category=practice-dynamic-arrays&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

You are given an array nums of N integers. Your task is to traverse the array and multiply each element by 2. You must update the elements directly within the existing array. Print the elements of the array space separated in a single line.

### Example 1:

**Input:**

```
nums = [1, 2, 3]
```

**Output:**

```
2 4 6
```

**Explanation:**

Initial array: nums = [1, 2, 3]

Traverse the array from left to right and multiply each element by 2 in-place:

- At index 0: nums[0] = 1 * 2 = 2
- At index 1: nums[1] = 2 * 2 = 4
- At index 2: nums[2] = 3 * 2 = 6

Result: The modified array is [2, 4, 6].

### Example 2:

**Input:**

```
nums = [1, 0, 1]
```

**Output:**

```
2 0 2
```

**Explanation:**

Initial array: nums = [1, 0, 1]

Traverse the array from left to right and multiply each element by 2 in-place:

- At index 0: nums[0] = 1 * 2 = 2
- At index 1: nums[1] = 0 * 2 = 0
- At index 2: nums[2] = 1 * 2 = 2

Result: The modified array is [2, 0, 2]

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= N <= 100
- -1000^ <= nums[i] <= 1000

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
