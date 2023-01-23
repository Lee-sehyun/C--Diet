#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, cnt = 0;
    int num[9] = {0};

    cin >> N;


    // 시작해보자!
    if(N == 0) num[0]++;
    while(N > 0){
        if(N%10 == 9) num[6]++;
        else num[N%10]++;
        N /= 10;
    }
    num[6] = num[6]/2+num[6]%2;
    for(int i = 0 ; i < 9 ; i++){
        if(cnt < num[i]) cnt = num[i];
    }
    cout << cnt;


    return 0;
}