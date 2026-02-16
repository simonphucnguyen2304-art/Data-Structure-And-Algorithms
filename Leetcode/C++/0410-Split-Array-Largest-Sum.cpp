class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        int ans = right ; 
        while (left <= right){
            int mid = left + (right - left) / 2;
            int curSum = 0 ;
            
            int temp = 1; 

            for (int x:nums){
                if (curSum + x <= mid){
                    curSum += x; 
                }
                else {
                    temp++ ;
                    curSum = x ;
                }
            }

            if (temp <= k){
                ans = mid; 
                right = mid -1; 
            }
            else {
                left  = mid +1; 
            }
            

        }
        return ans; 
    }
};
