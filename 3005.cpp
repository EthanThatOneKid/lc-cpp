#include <vector>
#include <map>

class Solution {
    public:
        int maxFrequencyElements(vector<int>& nums) {
            map<int, int> frequencyMap;
            for (int num : nums) {
                frequencyMap[num]++;
            }
            
            int maxFreq = 0;
            for (auto& pair : frequencyMap) {
                maxFreq = max(maxFreq, pair.second);
            }
            
            int count = 0;
            for (auto& pair : frequencyMap) {
                if (pair.second == maxFreq) {
                    count += pair.second;
                }
            }
            
            return count;
        }
};