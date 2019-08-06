#include <iostream>
#define REP(i,n) FOR(i,0,n)

const int MAX_LEN = 7;
//ç≈ëÂílÇÕ81*9 = 567

bool become89[100010];
int square[10]={0,1,4,9,16,25,36,49,64,81};
int factorials[MAX_LEN+1] = {1, 1, 2, 6, 24, 120, 720, 5040};
bool f(int n){
    do{
        int s = 0;
        while(n){
            s += square[n%10];
            n /= 10;
        }
        n = s;
    }while(n!=1 && n!= 89);

    return (n==89);
}
int main() {

    for(int i=1; i<=567; ++i){
        become89[i] = f(i);
    }

    int res = 0;
    REP(a, 10){
        REP(b,a+1){
            REP(c,b+1){
                REP(d,c+1){
                    REP(e,d+1){
                        REP(f, e+1){
                            REP(g, f+1) {
                                int cnt[10] = {0};
                                int sum = a * a + b * b + c * c + d * d + e * e + f * f + g * g;
                                cnt[a]++;
                                cnt[b]++;
                                cnt[c]++;
                                cnt[d]++;
                                cnt[e]++;
                                cnt[f]++;
                                cnt[g]++;
                                if(become89[sum]){
                                    int divisor=1;
                                    for(int i=0; i<10; ++i){
                                        divisor *= factorials[cnt[i]];
                                    }

                                    res += factorials[7] / divisor;
                                }
                            }
                        }
                    }
                }
            }
        }
    }


    cout << res << endl;
    return 0;

}