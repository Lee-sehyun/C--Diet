#include <iostream>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;

    int D[N], V[N];

    for (int i = 0 ; i < N ; i++){
        cin >> D[i] >> V[i];
    }

    int sum = 0;
    for (int i = 0 ; i < N ; i++){
        sum += V[i];
    }


    // 시작해보자!
    // int i = N-2;
    // int j = N-1;
    // int save;
    // while(1){
    //     if (i == -1){
    //         break;
    //     }
    //     else if(D[i] == 0){
    //         i--;
    //     }
    //     else if(V[j] == 0){
    //         j--;
    //     }
    //     else if (i == j){
    //         V[j] += save;
    //         break;
    //     }
    //     else if(D[i] <= V[j]){
    //         save = D[i];
    //         D[i] -= D[i];
    //         V[j] -= D[i];
    //     }
    //     else if(D[i] > V[j]){
    //         save = V[j];
    //         D[i] -= V[j];
    //         V[j] -= V[j];
    //     }
    // }
    // int sum = 0;
    // for (i = 0 ; i < sizeof(V)/sizeof(int) ; i++){
    //     sum += V[i];
    // }

    // cout << sum << endl;

    for (int i = V[0] ; i <= sum ; i++){
        int j = 0, k;
        int sum1 = i, sum2 = 0;
        for(k = 0 ; k < N ; k++){
            sum2+=V[k];
            if(sum2>sum1){
                k--;
                break;
            }
        }
    }


    return 0;
}