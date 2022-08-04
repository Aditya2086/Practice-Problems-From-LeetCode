class Solution { // Time: O(n); Space: O(1)
public:
    bool canJump(vector<int>& nums) {
        int max_idx_can_jump = 0;
        for(int i=0; i<=max_idx_can_jump && max_idx_can_jump<=nums.size()-1; i++){
            max_idx_can_jump = std::max( max_idx_can_jump, i+nums[i]);
        } return max_idx_can_jump >= nums.size()-1;
    }
};
