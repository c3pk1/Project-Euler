#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    //�J�Ԃ����@��long�Ŏ��������overflow���N����̂�, ���{���������C�u�������K�v
    
    /* naive solution */
    ll p = 1;
    REP(i, 7830457){
        p *= 2;
        p %= 10000000000;
    }

    cout << (28433*p+1)%10000000000 << endl;
    return 0;

}