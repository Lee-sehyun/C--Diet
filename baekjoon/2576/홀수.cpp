#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    vector<int> N(7);

    for(int i = 0 ; i < 7 ; i++) cin >> N[i];


    // 시작해보자!
    
    int min = 0, sum = 0;
    for(int i = 0 ; i < 7 ; i++) {
        if(N[i] % 2 == 1) {
            if(min > N[i]) min = N[i];
            else if(min == 0) min = N[i];
            sum += N[i];
        }
    }
    if(sum == 0) cout << -1 << endl;
    else cout << sum << "\n" << min << endl;


    return 0;
}