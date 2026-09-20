class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> previous;

        for (int i = 0; i < nums.size(); i++) {

            if (previous.count(nums[i]) &&
                i - previous[nums[i]] <= k) {
                return true;
            }

            previous[nums[i]] = i;
        }

        return false;
    }
};