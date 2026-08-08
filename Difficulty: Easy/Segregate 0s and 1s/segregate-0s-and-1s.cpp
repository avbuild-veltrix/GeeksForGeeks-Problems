class Solution {
public:
    void segregate0and1(vector<int> &arr) {
        // Your code here
        int zeros = 0, ones = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){zeros++;}
            if(arr[i] == 1){ ones++;}
        }
        int i = 0;
        while(zeros>0){
            arr[i] = 0;
            zeros--;
            i++;
        }
        while(ones>0){
            arr[i] = 1;
            ones--;
            i++;
        }
    }
};