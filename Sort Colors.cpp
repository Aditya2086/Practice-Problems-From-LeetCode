class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, l=0, r=nums.size()-1;
        // [0..l-1] are less than pivot 1, 
        // [l..r] equal to 1, [r+1..end] greater than 1
        while( i <= r ){
            if( nums[i] == 0 ) std::swap( nums[l++], nums[i++]);
            else if( nums[i] == 1 ) i++;
            else if( nums[i] == 2 ) std::swap( nums[i], nums[r--]);
        }
    }
};
