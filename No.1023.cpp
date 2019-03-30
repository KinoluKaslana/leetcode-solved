class Solution {
public:
    bool queryString(string S, int N) {
        for(int i = 0;i<=N;++i){
            int j = i;
            string s{};
            while(j){
                s += (j % 2 + '0');                 //以0,[N的子串的二进制的反转]存储的字符串
                j >>= 1;
            }
            reverse(s.begin(),s.end());             //反转为正常的字符串
            if(S.find(s) == string::npos)           //string实现的寻找第一个字串的方法,如果没有直接返回false
                return 0;
        }
        return 1;
    }
};