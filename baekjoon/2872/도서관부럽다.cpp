#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;

    vector<int> book(N);
    for(int i = 0 ; i < N ; i++){
        cin >> book[i];
    }


    // 시작해보자!
    int k = N;
    for(int i = N-1 ; i >= 0 ; i--){
        if(k == book[i]) k--;
    }

    cout << k << endl;


    return 0;
}