class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        if( nums.empty() ) return res;
        auto start = lower_bound(nums.begin(), nums.end(), target);
        if( start == nums.end() || *start != target ) return res;
        else res[0] = start - nums.begin();
        auto end = upper_bound(nums.begin(), nums.end(), target);
        res[1] = end - nums.begin() - 1;
        return res;
    }
};
