# [Traffic Light](https://takeuforward.org/practice/dsa/traffic-light?category=practice-enums&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given the current state of a traffic light, represented by a **TrafficLight** enumeration. The TrafficLight enumeration contains three possible states: **Red** , **Yellow** , and **Green** .

Return the exact color name corresponding to the given traffic light state. The returned string is case-sensitive.

Note: The input light is represented by an integer, where 0 = Red, 1 = Yellow, and 2 = Green. The driver code converts this integer into the corresponding TrafficLight enumeration value before calling lightName().

### Example 1:

**Input:** light = 0

**Output:** "Red"

**Explanation:** The integer 0 represents TrafficLight::Red. The driver passes this enumeration value to the function, which returns the exact color name Red, with an uppercase R and lowercase e and d.

### Example 2:

**Input:** light = 2

**Output:** "Green"

**Explanation:** The integer 2 represents TrafficLight::Green. Its corresponding name is Green, so the function returns that string with an uppercase G followed by lowercase letters.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= light <= 2

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
