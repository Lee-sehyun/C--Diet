#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, X;

    cin >> N >> X;

    vector<int> A(N);

    for(int i = 0 ; i < N ; i++) cin >> A[i];


    // 시작해보자!
    for(int i = 0 ; i < N ; i++) {
        if(A[i] < X) cout << A[i] << " ";
    }


    return 0;
}