class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> indxArray;
        int numsLen = nums.size();
        
        for (int i = 0; i < numsLen - 1; ++i) {
            for (int j = i + 1; j < numsLen; ++j) {
                if ((nums[i] + nums[j]) == target) {
                    indxArray.push_back(i);
                    indxArray.push_back(j);
                }    
            }
        }
        
        return indxArray;
        
    }
};