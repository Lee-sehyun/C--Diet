#include <iostream>

using namespace std;

int main(){

    //입력
    int C, N;

    cin >> C >> N;

    int contry[N][2];
    int num = 0;

    for (int i = 0 ; i < N ; i++){
        cin >> contry[i][0] >> contry[i][1];
        num += contry[i][1];
    }

    int result[C+num+1];

    // 시작해보자!
    // result[0] = 0;
    int res;
    for (int i = 0 ; i <= C+num ; i++){
        result[i] = 100001;
        for (int j = 0 ; j < N ; j++){
            if (contry[j][1] > i){
                continue;
            }
            if(result[i-contry[j][1]] + contry[j][0] < result[i]){
                result[i] = result[i-contry[j][1]] + contry[j][0];
            }
        }
        if(result[i] == 100001){
            result[i] = 0;
        }
        if(i == C){
            res = result[i];
        }
        else if (i > C){
            if (res > result[i]){
                res = result[i];
            }
        }
    }

    cout << res << endl;


    return 0;
}