class Solution {
public:
    string decimalToBinary(int N) {
        // Your code goes here
        if (N == 0) return "0";
        
        string binary = "";
        
        while (N > 0) {
            binary += (N % 2) + '0';
            
            N /= 2;
        }
        
        reverse(binary.begin(), binary.end());
        
        return binary;
    }
};
