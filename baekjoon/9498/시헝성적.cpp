#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;


    // 시작해보자!
    if (N >= 90) cout << "A";
    else if (N >= 80) cout << "B";
    else if (N >= 70) cout << "C";
    else if (N >= 60) cout << "D";
    else cout << "F";


    return 0;
}