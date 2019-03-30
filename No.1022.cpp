class Solution {
public:
    int smallestRepunitDivByK(int K) {
        if(!(K % 2) || !(K % 5))                //只要个位数非能被2或5整除的,均有N位为1的一个数与之整除
            return -1;
        int sum=0;
        int i = 1;
        (sum=sum*10+1)%=K;
        while(sum){
            (sum=sum*10+1)%=K;                  //模拟除法以N位1的过程(从第二位开始比如111 / 3 ==> 21 / 3)
            ++i;
        }
        return i;
    }
};