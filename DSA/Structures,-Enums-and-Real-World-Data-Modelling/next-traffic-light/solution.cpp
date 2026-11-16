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
    TrafficLight nextLight(TrafficLight current) {
        // Write your code here
        if (current == TrafficLight::Red) {
            return TrafficLight::Green;
        }
 
        if (current == TrafficLight::Green) {
            return TrafficLight::Yellow;
        }
 
        return TrafficLight::Red;
    }
};
