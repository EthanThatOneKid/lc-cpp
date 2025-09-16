#include <string>
#include <unordered_set>
#include <sstream>

class Solution {
    public:
        int canBeTypedWords(string text, string brokenLetters) {
            int sum = 0;
            unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
            
            stringstream ss(text);
            string word;
            
            while (ss >> word) {
                bool canType = true;
                for (char c : word) {
                    if (broken.count(c)) {
                        canType = false;
                        break;
                    }
                }
                if (canType) {
                    sum++;
                }
            }
            
            return sum;
        }
};