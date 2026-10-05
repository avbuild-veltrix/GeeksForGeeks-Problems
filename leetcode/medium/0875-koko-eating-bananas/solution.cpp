class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = piles[0];
        for(int i = 0; i < piles.size(); i++){
            if(max < piles[i]){
                max = piles[i];
            }
        }
        int high = max;
        int low = 1;
        int answer = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long hours = 0;
            for(int pile: piles){
                hours += (pile + mid - 1)/mid; 
            }
            if(hours <= h){
                answer = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return answer;
    }
};