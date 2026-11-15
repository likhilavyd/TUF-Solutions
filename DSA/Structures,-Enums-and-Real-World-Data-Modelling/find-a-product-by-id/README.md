# [Find a Product by ID](https://takeuforward.org/practice/dsa/find-a-product-by-id?category=practice-structures&source=cpp)

![Difficulty: Basic](https://img.shields.io/badge/Difficulty-Basic-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given an integer **n** representing the number of products and a list of n **products** . Each product is represented by a **Product** structure containing the following fields:

- **id** : An integer representing the unique product identifier.
- **price** : A double representing the product's price.
- **quantity** : An integer representing the available quantity.

You are also given an integer **targetId** .

Your task is to **find the product whose ID matches targetId** and return its 0-based index in the given list.

If no product has the specified ID, return -1.

Product IDs are unique. Only the product ID is used for matching; the price and quantity do not affect the result. Do not change the original order of the products.

Note: Each product is provided as a list iid, price, quantity in input. The driver code converts the input lists into a vector<Product> before calling findProduct().

### Example 1:

**Input:** n = 3, products = [{id: 101, price: 99.5, quantity: 5}, {id: 102, price: 150.0, quantity: 3}, {id: 10^3, price: 75.0, quantity: 10}], targetId = 102

**Output:** 1

**Explanation:** The IDs at indices 0, 1, and 2 are 101, 102, and 10^3. The target 102 matches id[1]. Its corresponding price is 150.0 and quantity is 3, but the match depends only on the ID. Return index 1.

### Example 2:

**Input:** n = 2, products = [{id: 10, price: 20.0, quantity: 2}, {id: 20, price: 30.0, quantity: 4}], targetId = 50

**Output:** -1

**Explanation:** The ID array contains 10 and 20. Neither value equals 50, so no product has the requested ID. Therefore, return -1.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= n <= 10^4
- All three arrays contain n elements.
- 0 <= id[i], targetId, prices[i], quantity[i] <= 10^9
- Prices have at most six decimal places.
- IDs, quantities, and targetId are integers.
- Product IDs are unique.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
