class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int t = target - x;
            if (mpp.find(t) != mpp.end()) {
                return {mpp[t], i};
            }
            mpp[x] = i;
        }
        return {-1, -1};
    }
};
