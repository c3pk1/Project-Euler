#include <iostream>
using namespace std;

typedef long long ll;

inline ll Ns1(ll n) {return 4*n*n-6*n+3;}
inline ll Ns2(ll n) {return 4*n*n-4*n+1;}
inline ll Ns3(ll n) {return 4*n*n-8*n+5;}
inline ll Ns4(ll n) {return 4*n*n-10*n+7;}

bool isprime(ll n){
    for(ll i=2; i*i<=n; ++i) if(n%i==0) return false;
    return true;
}
int main() {
    //cin.tie(0);
    //ios::sync_with_stdio(false);
    //cout << fixed << setprecision(10);


    //upper left 4*n^2 - 6*n + 3
    //bottom right 4*n^2 - 4*n + 1
    //upper right 4*n^2 - 8*n + 5
    //bottom left 4*n^2 - 10*n + 7
    int cnt=0;
    for(int i=2;; ++i){
        if(isprime(Ns1(i))) cnt++;
        if(isprime(Ns2(i))) cnt++;
        if(isprime(Ns3(i))) cnt++;
        if(isprime(Ns4(i))) cnt++;

        if((double)cnt/(4*(i-1)+1) <= 0.1){
            cout << (i-1)*2+1 << endl;
            break;
        }

    }
    return 0;

}