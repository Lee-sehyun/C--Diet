#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    vector<int> N(9);

    for(int i = 0 ; i < 9 ; i++) cin >> N[i];


    // 시작해보자!
    
    int max = 0, index = -1;
    for(int i = 0 ; i < 9 ; i++) {
        if(max < N[i]) {
            max = N[i];
            index = i+1;
        }
    }
    cout << max << "\n" << index << endl;


    return 0;
}