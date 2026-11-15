/**
 * Definition for a point.
 * struct Point {
 *     int x;
 *     int y;
 * };
 */


class Solution {
public:
    void movePoint(Point& p, int changeX, int changeY) {
        // Write your code here
        p.x += changeX;
        p.y += changeY;
    }
};