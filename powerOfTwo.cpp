class Solution {
public:
    bool isPowerOfTwo(int n){
        long long l=n;
        return l==0?false:((l&(l-1))==0?true:false);
    }
};