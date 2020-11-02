#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    //입력
    int t, a, b, x, y, n;
    long long ans;

    cin >> t;


    // 시작해보자!
    for(int i = 0 ; i < t ; i++){
        cin >> a >> b >> x >> y >> n;
        int check = 0;

        int min;
        if(x > y) {
            if((b-y) < n) {
                n -= (b-y);
                b = y;
                if((a-x) < n) a = x;
                else a -= n;
                ans = a*b;
            }
            else {
                if((a-x) > n) {
                    if(a-n > b-n) b -= n;
                    else a -= n;
                    ans = a*b;
                }
                else {
                    
                }
            }
        }
        else {
            if((a-x) < n) {
                n -= (a-x);
                a = x;
                if((b-y) < n) b = y;
                else b -= n;
                ans = a*b;
            }
            else {
                check = 1;
            }
        }
    }


    return 0;
}