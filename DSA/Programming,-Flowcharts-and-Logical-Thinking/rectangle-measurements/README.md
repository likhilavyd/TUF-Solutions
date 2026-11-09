# [Rectangle Measurements](https://takeuforward.org/practice/dsa/rectangle-measurements?category=practice-normal-operations&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given a rectangle represented by a **Rectangle** structure containing the following fields:

- **length** : A double representing the length of the rectangle.
- **width** : A double representing the width of the rectangle.

Your task is to implement two functions to calculate the rectangle's area and perimeter.

- **findArea()** : Returns the area of the rectangle using the formula length * width.
- **findPerimeter():** Returns the perimeter of the rectangle using the formula 2 * (length + width).

Both functions receive the same Rectangle object through a constant reference. They must calculate their respective measurements independently without modifying the rectangle.

The output displays the area followed by the perimeter, each formatted to six decimal places.

**Note:** The rectangle is provided using its length and width. The driver constructs a Rectangle structure from these values and passes it to both functions.

### Example 1:

**Input:** rectangle = {length: 5, width: 3}

**Output:** 15.000000 16.000000

**Explanation:** The area is 5 * 3 = 15. The perimeter is 2 * (5 + 3) = 2 * 8 = 16. Printing the area first and the perimeter second, with six decimal places, gives 15.000000 16.000000.

### Example 2:

**Input:** rectangle = {length: 2.5, width: 4}

**Output:** 10.000000 13.000000

**Explanation:** The area is 2.5 * 4 = 10. The perimeter is 2 * (2.5 + 4) = 2 * 6.5 = 13. Therefore, the result is 10.000000 13.000000, with the area before the perimeter.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 < length, width <= 10^4
- Each dimension has at most six decimal places.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
