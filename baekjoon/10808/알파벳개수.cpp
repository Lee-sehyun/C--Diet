#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    string S;

    cin >> S;

    int alpha[26] = {0};


    // 시작해보자!
    for(int i = 0 ; i < S.length() ; i++){
        alpha[S[i]-'a']++;
    }
    for(int i = 0 ; i < 26 ; i++){
        cout << alpha[i] << " ";
    }
    


    return 0;
}