#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, cnt = 0;

    cin >> N;


    // 시작해보자!
    for(int i = 1 ; i <= N ; i++){
        int K = i, flag = 0;
        int d = (K%10)-((K/10)%10);
        while(K >= 10){
            int temp = K%10;
            K/=10;
            if(temp-K%10 != d){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cnt++;
    }
    cout << cnt << endl;


    return 0;
}