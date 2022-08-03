class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> counter;

        for(int num : nums){
            counter[num]++;
        }

        int ans = 0;

        for(auto it = counter.begin(); it != counter.end(); ++it){
            if(it->second > 1){
                ans += it->second * (it->second-1) /2;
            }
        }

        return ans;
    }
};
