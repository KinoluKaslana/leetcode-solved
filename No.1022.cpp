class Solution {
public:
    int smallestRepunitDivByK(int K) {
        int sum=0;
        for (int i=1;i<=10*K;++i){              //为什么是10 * K?
            (sum=sum*10+1)%=K;                  //模拟除法以N位1的过程(从第二位开始比如111 / 3 ==> 21 / 3)
            if (sum==0) return i;
        }
        return -1;
    }
};