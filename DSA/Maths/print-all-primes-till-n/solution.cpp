class Solution{
    private:
        bool isPrime(int n) {
        int count = 0;
        
        for(int i = 1; i <= sqrt(n); ++i) {
            
            if(n % i == 0) {
                count = count + 1;
                if(n / i != i) {
                    count = count + 1;
                }
            }
        }
        if(count == 2) return true;
        return false;
    }
    
    public:
        vector<int> primeTillN(int n){
            //your code goes here
            vector<int> primes;
        for (int i = 2; i <= n; i++) {
            
            if (isPrime(i)){
                primes.push_back(i);
            }
        }
        return primes;
        }
};