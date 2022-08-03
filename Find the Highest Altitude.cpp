class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res = 0;
        gain.insert(gain.begin(), 0);
        for(int i=1; i<gain.size(); i++){
            gain[i] = gain[i-1] + gain[i];
            res = std::max( res, gain[i]);
        } return res;
    }
};
