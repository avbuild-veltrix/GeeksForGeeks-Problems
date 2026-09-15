class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int last = n-1;
        int neg = 0, pos = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                neg++;
            }else if(nums[i] > 0){
                pos++;
            }else{

            }
        }
        if(pos > neg){
            return pos;
        }else{
            return neg;
        }
    }
};