#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    vector<int> A(9), B(9);
    for(int i = 0 ; i < 9 ; i++){
        cin >> A[i];
    }
    for(int i = 0 ; i < 9 ; i++){
        cin >> B[i];
    }

    // 시작해보자!
    int sum = 0, check = 0;
    for(int i = 0 ; i < 9 ; i++){
        sum += A[i];
        if(sum > 0) {
            check = 1;
            break;
        }
        sum -= B[i];
    }
    if(check == 0) cout << "No" << endl;
    else cout << "Yes" << endl;


    return 0;
}