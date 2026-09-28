class Solution {
public:
    char getMaxOccuringChar(string& s) {

        int freq[256] = {0};

        // Count frequency
        for(char ch : s) {
            freq[(unsigned char)ch]++;
        }

        int maxFreq = 0;

        // Find maximum frequency
        for(int i = 0; i < 256; i++) {
            if(freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }

        // Find alphabetically first character
        for(int i = 0; i < 256; i++) {
            if(freq[i] == maxFreq) {
                return char(i);
            }
        }

        return '\0';
    }
};