#include <iostream>
#include <string>
using namespace std;

// My ans
//int hammingWeight(uint32_t n) {
//    int ans = 0;
//    for(int i=0; i<32 ;i++){
//        if(n&1)
//            ans++;
//        n = n>>1;
//    }
//    return ans;
//}

// Optimize
int hammingWeight(uint32_t n) {
    int ans = 0;
    while(n){
        n &=(n-1);
        ans++;
    }
    return ans;
}