# [Next Traffic Light](https://takeuforward.org/practice/dsa/next-traffic-light?category=practice-enums&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given the current state of a traffic light, represented by a **TrafficLight** enumeration, containing three possible states: **Red** , **Yellow** , and **Green** .

The traffic light follows a fixed, repeating sequence:

**Red → Green → Yellow → Red**

The Task is to determine and return the next traffic light state in this sequence. After Yellow, the sequence repeats from Red.

**Note:** The input currentis represented by an integer, where 0 = Red, 1 = Yellow, and 2 = Green. The driver converts this integer into the corresponding TrafficLightenumeration value before calling nextLight().

### Example 1:

**Input:** current = 0

**Output:** "Green"

**Explanation:** The integer 0 represents TrafficLight::Red. Green follows Red in the specified cycle, so the function returns TrafficLight::Green. The driver prints its name, Green.

### Example 2:

**Input:** current = 2

**Output:** "Yellow"

**Explanation:** The integer 2 represents TrafficLight::Green. The next state after Green is Yellow, so the function returns TrafficLight::Yellow, which the driver prints as Yellow.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= current <= 2

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
