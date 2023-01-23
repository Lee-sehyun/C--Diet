#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;


    for(int i = 0 ; i < N ; i++){
        string str;
        cin >> str;
        if((str[str.length()-1] - '0')%2 == 1) cout << "odd" << endl;
        else cout << "even" << endl;
    }

    return 0;
}