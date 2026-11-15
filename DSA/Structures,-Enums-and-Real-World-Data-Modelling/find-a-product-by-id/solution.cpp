/**
 * Definition for a product.
 * struct Product {
 *     int id;
 *     double price;
 *     int quantity;
 * };
 */
class Solution {
public:
    int findProduct(const std::vector<Product>& products, int targetId) {
        // Write your code here
        for (int i = 0; i < products.size(); i++) {
            if (products[i].id == targetId) {
                return i;
            }
        }
        return -1;
    }
};
