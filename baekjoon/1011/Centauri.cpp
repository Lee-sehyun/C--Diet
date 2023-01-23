#include <bits/stdc++.h>

using namespace std;

long long minTeleport(long long x);

int main(){

    //입력
    int T;
    long long x, y;

    cin >> T;


    // 시작해보자!
    for(int t = 0 ; t < T ; t++){
        cin >> x >> y;
        cout << minTeleport(y-x) << endl;
    }


    return 0;
}

long long minTeleport(long long x){
    if(x == 1) return 1;
    else if(x == 2) return 2;
    else {
        long long k = 2, min = 2;
        x -= 2;
        while(x > 0){
            x -= k;
            min++;
            if(min%2 == 0) k++;
        }
        return min;
    }
}