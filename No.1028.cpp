class Solution {
public:
    string baseNeg2(int N) {
        if(N == 0){
            return "0";
        }
        string ans = "\0";
        while(N){
            ans += (abs(N % -2) + '0');
            N = (N - abs(N % -2)) / (-2);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};