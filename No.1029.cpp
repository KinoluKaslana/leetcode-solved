class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int i = 0;
        vector<bool> ans;
        for(auto it:A){
            ((i <<= 1) |= it) %= 5;
            if(!i)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};