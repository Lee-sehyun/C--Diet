#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int T, x1, x2, y1, y2, r1, r2, r;
    double d;

    cin >> T;


    // 시작해보자!
    for(int t = 0 ; t < T ; t++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        r = abs(r2-r1);
        d = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
        if(d == 0){
            if(r1 == r2) cout << -1 << endl;
            else cout << 0 << endl;
        }
        else {
            if(r1+r2 == d || d == r) cout << 1 << endl;
            else if(d < r1+r2 && d > r) cout << 2 << endl;
            else cout << 0 << endl;
        }
    }


    return 0;
}