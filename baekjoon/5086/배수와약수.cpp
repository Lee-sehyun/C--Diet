#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int first, second;

    while(1){
        cin >> first >> second;
        if(first == 0 && second == 0) break;
        else if(second%first == 0) cout << "factor" << endl;
        else if(first%second == 0) cout << "multiple" << endl;
        else cout << "neither" << endl;
    }

    return 0;
}