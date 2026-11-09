/**
 * Definition for a rectangle.
 * struct Rectangle {
 *     double length;
 *     double width;
 * };
 */
class Solution {
public:
    double findArea(const Rectangle& rectangle) {
        // Write your code here
        return rectangle.length * rectangle.width;
    }

    double findPerimeter(const Rectangle& rectangle) {
        // Write your code here
        return 2 * (rectangle.length + rectangle.width);
    }
};
