class Solution{	
public:		
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        int left = 0;
        int right = s.size() - 1;

        while (left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
	}
};