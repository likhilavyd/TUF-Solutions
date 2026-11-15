# [Move a Point](https://takeuforward.org/practice/dsa/move-a-point?category=practice-structures&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given a **point** represented by a **Point** structure containing two integer fields:

- **x** : The x-coordinate of the point.
- **y** : The y-coordinate of the point.

You are also given two integers, **changeX** and **changeY** , representing the changes to be made to the point's coordinates.

Your task is to update the original point by adding changeX to its x-coordinate and changeY to its y-coordinate.

The point is passed by reference, so you must modify the original Point object directly rather than creating a separate point. The function returns no value, as the changes are made in place.

**Note:** The driver code constructs a Point structure from the supplied coordinates before calling movePoint()..

### Example 1:

**Input:** p = {x: 3, y: 5}, changeX = 2, changeY = -1

**Output:** {x: 5, y: 4}

**Explanation:** Add 2 to the original x-coordinate: 3 + 2 = 5. Add -1 to the original y-coordinate: 5 + (-1) = 4. The original point is modified in place from (3, 5) to (5, 4).

### Example 2:

**Input:** p = {x: -4, y: 7}, changeX = 4, changeY = 3

**Output:** {x: 0, y: 10}

**Explanation:** The updated x-coordinate is -4 + 4 = 0, and the updated y-coordinate is 7 + 3 = 10. These values are stored in the same point passed by reference, so its coordinates become (0, 10).

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- -10^9 <= p.x, p.y, changeX, changeY <= 10^9

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
