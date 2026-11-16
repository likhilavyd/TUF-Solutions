/**
 * Enumeration supplied by the platform:
 * enum class TrafficLight {
 *     Red,
 *     Yellow,
 *     Green
 * };
 */
class Solution {
public:
    std::string lightName(TrafficLight light) {
        // Write your code here
        if (light == TrafficLight::Red) {
            return "Red";
        }
 
        if (light == TrafficLight::Yellow) {
            return "Yellow";
        }
 
        return "Green";
    }
};
