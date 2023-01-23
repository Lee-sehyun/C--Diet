#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    vector<int> N(3);

    for(int i = 0 ; i < 3 ; i++) cin >> N[i];


    // 시작해보자!
    if(N[0] == N[1] && N[1] == N[2]){
        cout << 10000+N[0]*1000 << endl;
    }
    else if(N[0] == N[1] || N[0] == N[2]){
        cout << 1000+N[0]*100 << endl;
    }
    else if(N[1] == N[2]){
        cout << 1000+N[1]*100 << endl;
    }
    else {
        int max = 0;
        for(int i = 0 ; i < 3 ; i++) {
            if(max < N[i]) max = N[i];
        }
        cout << max*100 << endl;
    }


    return 0;
}