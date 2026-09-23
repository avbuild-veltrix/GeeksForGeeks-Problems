class Solution {
public:

    bool isInvalid(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return false;
        }
        else if(ch >= 'a' && ch <= 'z') {
            return false;
        }
        else if(ch >= '0' && ch <= '9') {
            return false;
        }
        else {
            return true;
        }
    }

    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length() - 1;

        while(i < j) {

            if(isInvalid(s[i])) {
                i++;
            }
            else if(isInvalid(s[j])) {
                j--;
            }
            else {

                // Convert uppercase to lowercase
                if(s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = s[i] + 32;
                }

                if(s[j] >= 'A' && s[j] <= 'Z') {
                    s[j] = s[j] + 32;
                }

                if(s[i] != s[j]) {
                    return false;
                }

                i++;
                j--;
            }
        }

        return true;
    }
};