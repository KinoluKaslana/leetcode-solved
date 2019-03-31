class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int i = 0;
        vector<bool> ans;
        for(auto it:A){
            ((i <<= 1) |= it) %= 5;             //对每一位进行前移,一旦存在个位(实际上个位为0或5的都可以被整除,所以前面的数据分布不用担心)可以被5整
                                                //该位就为1
            if(!i)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};