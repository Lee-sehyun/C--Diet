#include <iostream>

using namespace std;

int main(){

    //입력
    char color[4] = {0}, c;
    int P[9] = {0}, p, count = 9, K4, K3, K2, K2M, K1, cnt = 0, ans;

    for(int i = 0 ; i < 5 ; i++){
        cin >> c >> p;
        if(c == 'R') color[0]++;
        else if(c == 'B') color[1]++;
        else if(c == 'Y') color[2]++;
        else color[3]++;
        P[p-1]++;
    }

    // 시작해보자!
    for(int i = 0 ; i < 9 ; i++){
        if(P[i] == 4){
            count = 2;
            K4 = i+1;
        }
        else if(P[i] == 3){
            if(count == 9) count = 6;
            else count = 3;
            K3 = i+1;
        }
        else if(P[i] == 2){
            if(count == 8){
                count = 7;
                K2M = i+1;
            }
            else {
                if(count == 9) count = 8;
                else count = 3;
                K2 = i+1;
            }
        }
        else if(P[i] == 1){
            cnt++;
            K1 = i+1;
            if(cnt == 5) count = 5;
        }
        else {
            cnt = 0;
        }
    }
    for(int i = 0 ; i < 4 ; i++){
        if(color[i] == 5){
            if(count == 9) count = 4;
            else count = 1;
        }
    }

    if(count == 1) ans = K1 + 900;
    else if(count == 2) ans = K4 + 800;
    else if(count == 3) ans = K3 * 10 + K2 + 700;
    else if(count == 4) ans = K1 + 600;
    else if(count == 5) ans = K1 + 500;
    else if(count == 6) ans = K3 + 400;
    else if(count == 7) ans = K2M * 10 + K2 + 300;
    else if(count == 8) ans = K2 + 200;
    else ans = K1 + 100;

    cout << ans << endl;


    return 0;
}