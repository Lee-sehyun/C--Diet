#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;
    int alpha[26] = {0};
    string str1, str2;
    cin >> N;


    // 시작해보자!
    for(int t = 0 ; t < N ; t++){
        int flag = 0;
        for(int i = 0 ; i < 26 ; i++) alpha[i] = 0;
        cin >> str1 >> str2;
        for(int i = 0 ; i < str1.length() ; i++){
            alpha[str1[i]-'a']++;
        }
        for(int i = 0 ; i < str2.length() ; i++){
            alpha[str2[i]-'a']--;
        }
        for(int i = 0 ; i < 26 ; i++) {
            if(alpha[i] != 0) flag = 1;
        }
        if(flag == 0) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }


    return 0;
}