class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> dict;
        vector<int> res;
        for(int i=0; i< nums.size(); ++i){
            //if( !dict[ target - nums[i] ] ){ --> X
            if( !dict.count(target - nums[i]) ){
            //if(dict.find(target - nums[i]) == dict.end()){
                dict[ nums[i] ] = i;
                continue;
            }
            res.push_back( dict[ target - nums[i] ] );
            res.push_back( i );
            break;
        } return res;
    }
};
