class Solution {
public:
    int maxScoreSightseeingPair(vector<int> &A) {
        int N = A.size();
        int N1 = 0,ans = 0;
        for(int i = 1;i<N;++i){
            N1 = max(A[i - 1] + i - 1,N1);          //这里保留了一直到i-1个数最大的数
            ans = max(A[i] - i + N1,ans);           //这里是第i个和第i个之前最大的数求和,求最大的结果
                                                    //本题解法巧妙的使保留前i-1个数中最大满足要求的数,是一个很巧妙的想法.
        }
        return ans;
    }
};