class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        for(int i=0; i<k; i++){
            int num = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), num);
        }
    }
};
