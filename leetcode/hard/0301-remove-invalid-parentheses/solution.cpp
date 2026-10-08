class Solution {
public:

    vector<string> ans;

    void DFS(string &s, int index, int count,int left, int right, string current,bool prevRemoved) {

        if (index == s.length()) {
            if (left == 0 && right == 0 && count == 0) {
                ans.push_back(current);
            }
            return;
        }

        char ch = s[index];

        if (ch == '(') {
            if (left > 0) {

                // Removing '('
                if (index == 0 ||s[index] != s[index - 1] ||prevRemoved) {

                    DFS(s, index + 1, count,left - 1, right,current, true);
                }
            }

            DFS(s, index + 1, count + 1,left, right,current + '(',false);
        }

        else if (ch == ')') {
            if (right > 0) {
                // Removing ')'
                if (index == 0 ||s[index] != s[index - 1] ||prevRemoved) {

                    DFS(s, index + 1, count,left, right - 1,current, true);
                }
            }

            if (count > 0) {

                DFS(s, index + 1, count - 1,left, right,current + ')',false);
            }
        }
        else {

            DFS(s, index + 1, count,left, right,current + ch,false);
        }
    }


    vector<string> removeInvalidParentheses(string s) {

        ans.clear();

        int count = 0;
        int left = 0;
        int right = 0;

        // Find minimum number of removals
        for (char ch : s) {

            if (ch == '(') {
                count++;
            }

            else if (ch == ')') {

                count--;

                if (count < 0) {
                    count = 0;
                    right++;
                }
            }
        }

        left = count;
        DFS(s, 0, 0,left, right,"", false);

        return ans;
    }
};

// class Solution {
// public:

//     unordered_set<string> ans;

//     void DFS(string &s, int index, int count,
//              int left, int right, string current,
//              bool prevRemoved) {

//         // End of string
//         if (index == s.length()) {

//             if (left == 0 && right == 0 && count == 0) {
//                 ans.insert(current);
//             }

//             return;
//         }

//         char ch = s[index];

//         // '('
//         if (ch == '(') {

//             // Remove '('
//             if (left > 0) {

//                 // Skip duplicate removal
//                 if (index == 0 ||
//                     s[index] != s[index - 1] ||
//                     prevRemoved) {

//                     DFS(s, index + 1, count,
//                         left - 1, right,
//                         current, true);
//                 }
//             }

//             // Keep '('
//             DFS(s, index + 1, count + 1,
//                 left, right,
//                 current + '(',
//                 false);
//         }

//         // ')'
//         else if (ch == ')') {

//             // Remove ')'
//             if (right > 0) {

//                 // Skip duplicate removal
//                 if (index == 0 ||
//                     s[index] != s[index - 1] ||
//                     prevRemoved) {

//                     DFS(s, index + 1, count,
//                         left, right - 1,
//                         current, true);
//                 }
//             }

//             // Keep ')' only if valid
//             if (count > 0) {

//                 DFS(s, index + 1, count - 1,
//                     left, right,
//                     current + ')',
//                     false);
//             }
//         }

//         // Normal character
//         else {

//             DFS(s, index + 1, count,
//                 left, right,
//                 current + ch,
//                 false);
//         }
//     }


//     vector<string> removeInvalidParentheses(string s) {

//         ans.clear();

//         int count = 0;
//         int left = 0;
//         int right = 0;

//         // Find minimum number of removals
//         for (char ch : s) {

//             if (ch == '(') {
//                 count++;
//             }

//             else if (ch == ')') {

//                 count--;

//                 if (count < 0) {
//                     count = 0;
//                     right++;
//                 }
//             }
//         }

//         left = count;

//         // Start DFS
//         DFS(s, 0, 0,
//             left, right,
//             "", false);

//         return vector<string>(ans.begin(), ans.end());
//     }
// };

// class Solution {
// public:

//     vector<string> ans;

//     void DFS(string s, int index, int count, int left, int right, string current){
//         if(index == s.length()){
//             if(left == 0 && right == 0 && count == 0){
//                 ans.push_back(current);
//             }
//             return;
//         }

//         char ch = s[index];

//         if(ch == '('){
//             if(left > 0){
//                 DFS(s, index+1, count, left-1, right, current);
//             }
//             DFS(s, index+1, count+1, left, right, current + '(');
//         }
//         else if(ch == ')'){
//             if(right > 0){
//                 DFS(s, index+1, count, left, right-1, current);
//             }
//             if(count > 0){
//                 DFS(s, index+1, count-1, left, right, current + ')');
//             }
//         }
//         else{
//             DFS(s, index + 1, count, left, right, current + ch);
//         }
//     }

//     vector<string> removeInvalidParentheses(string s) {
//         int count = 0;
//         int left = 0;
//         int right = 0;

//         for(char ch : s){
//             if(ch == '('){
//                 count++;
//             }else if(ch == ')'){
//                 count--;
//                 if(count < 0){
//                     count = 0;
//                     right++;
//                 }
//             }
//         }
//         left = count;
//         DFS(s,0,0,left, right, "");
//         for (int i = 0; i < ans.size(); i++) {
//             for (int j = i + 1; j < ans.size(); j++) {
//                 if (ans[i] == ans[j]) {
//                     ans.erase(ans.begin() + j);
//                     j--;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:

//     unordered_set<string> ans;

//     void DFS(string s, int index, int count, int left, int right, string current){
//         if(index == s.length()){
//             if(left == 0 && right == 0 && count == 0){
//                 ans.insert(current);
//             }
//             return;
//         }

//         char ch = s[index];

//         if(ch == '('){
//             if(left > 0){
//                 DFS(s, index+1, count, left-1, right, current);
//             }
//             DFS(s, index+1, count+1, left, right, current + '(');
//         }
//         else if(ch == ')'){
//             if(right > 0){
//                 DFS(s, index+1, count, left, right-1, current);
//             }
//             if(count > 0){
//                 DFS(s, index+1, count-1, left, right, current + ')');
//             }
//         }
//         else{
//             DFS(s, index + 1, count, left, right, current + ch);
//         }
//     }

//     vector<string> removeInvalidParentheses(string s) {
//         int count = 0;
//         int left = 0;
//         int right = 0;

//         for(char ch : s){
//             if(ch == '('){
//                 count++;
//             }else if(ch == ')'){
//                 count--;
//                 if(count < 0){
//                     count = 0;
//                     right++;
//                 }
//             }
//         }
//         left = count;
//         DFS(s,0,0,left, right, "");
//         return unordered_set<string> ans;
//     }
// };