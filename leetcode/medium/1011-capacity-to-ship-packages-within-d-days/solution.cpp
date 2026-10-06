class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;

        for (int weight : weights) {
            low = max(low, weight);
            high += weight;
        }

        while(low <= high){
            int mid = low + (high - low)/2;
            
            int currentWeight = 0;
            int reqDays = 1;

            for(int i = 0; i < weights.size(); i++){
                if(currentWeight + weights[i] > mid){
                    reqDays++;
                    currentWeight = weights[i];
                }else{
                    currentWeight += weights[i];
                }
            }
            if(reqDays <= days){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};

// class Solution {
// public:
//     int shipWithinDays(vector<int>& weights, int days) {

//         int low = 0;
//         int high = 0;

//         // Find search range
//         for (int weight : weights) {
//             low = max(low, weight);
//             high += weight;
//         }

//         // Binary Search
//         while (low <= high) {

//             int mid = low + (high - low) / 2;

//             int requiredDays = 1;
//             int currentWeight = 0;

//             // Check how many days are needed
//             for (int weight : weights) {

//                 if (currentWeight + weight > mid) {
//                     requiredDays++;
//                     currentWeight = weight;
//                 }
//                 else {
//                     currentWeight += weight;
//                 }
//             }

//             // Capacity is enough
//             if (requiredDays <= days) {
//                 high = mid - 1;
//             }
//             // Capacity is not enough
//             else {
//                 low = mid + 1;
//             }
//         }

//         return low;
//     }
// };