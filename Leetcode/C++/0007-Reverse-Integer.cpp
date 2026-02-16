class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while (x != 0){
            int digit = x%10 ; 
            rev = 10*rev + digit;
            x/=10 ; 
        }
        if (rev < INT_MIN || rev > INT_MAX)
            return 0 ;
        else 
            return rev; 

    }
};
