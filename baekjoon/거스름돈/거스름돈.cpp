#include <iostream>

using namespace std;

int main(){

    //입력
    int n;

    cin >> n;

    int coin[n+1];
    coin[0] = 0;
    coin[1] = -1;


    // 시작해보자!
    for(int i = 2 ; i <= n ; i++){
        if(i < 5){
            if(coin[i-2] == -1) coin[i] = -1;
            else coin[i] = coin[i-2]+1;
        }
        else if(coin[i-2] == -1 && coin[i-5] == -1) coin[i] = -1;
        else if(coin[i-2] == -1) coin[i] = coin[i-5]+1;
        else if(coin[i-5] == -1) coin[i] = coin[i-2]+1;
        else coin[i] = min(coin[i-2]+1, coin[i-5]+1);
    }

    cout << coin[n] << endl;


    return 0;
}