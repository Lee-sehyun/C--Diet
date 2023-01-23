#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int alpha[26] = {0};
    string str1, str2;


    // 시작해보자!
    int cnt = 0;
    cin >> str1 >> str2;
    for(int i = 0 ; i < str1.length() ; i++){
        alpha[str1[i]-'a']++;
    }
    for(int i = 0 ; i < str2.length() ; i++){
        alpha[str2[i]-'a']--;
    }
    for(int i = 0 ; i < 26 ; i++) {
        if(alpha[i] != 0) cnt += abs(alpha[i]);
    }
    cout << cnt;


    return 0;
}