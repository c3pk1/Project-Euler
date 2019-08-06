#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    //繰返し二乗法をlongで実装するとoverflowが起こるので, 多倍長整数ライブラリが必要
    
    /* naive solution */
    ll p = 1;
    REP(i, 7830457){
        p *= 2;
        p %= 10000000000;
    }

    cout << (28433*p+1)%10000000000 << endl;
    return 0;

}