class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        
        long n = ceil((-1.0 + sqrt(1 + 8.0*target)) / 2);
        long sum = n * (n+1) / 2;
        
        if (sum == target) {
            return n;
        }
        
        long diff = sum - target;
        
        if (diff % 2 == 0) {
            return n;
        }
        return n + 1 + n%2;
    }
};