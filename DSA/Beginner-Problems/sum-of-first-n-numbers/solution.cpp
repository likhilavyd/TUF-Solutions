class Solution{	
	public:
		int NnumbersSum(int N){
			//your code goes here
            int ans;
            if (N==0) return N;
            if (N==1) return N;
            if (N>1) return N + NnumbersSum(N-1);
		}
};