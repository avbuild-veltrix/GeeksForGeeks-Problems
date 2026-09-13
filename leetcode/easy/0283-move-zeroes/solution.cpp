class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                while(k < n && nums[k] == 0){
                    k++;
                }
                if(k < n){
                    nums[i] = nums[k];
                    nums[k] = 0;
                    k++;
                }

            }
        }
    }
};