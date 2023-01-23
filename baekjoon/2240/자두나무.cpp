#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int T, W, k;

    cin >> T >> W;


    // 시작해보자!
    vector<vector<int>> plum(T+1, vector<int>(W+1));
    for(int i = 1 ; i <= T ; i++){
        cin >> k;
        for(int j = 0 ; j <= W ; j++){
            if(k == 1){
                if(j == 0) plum[i][j] = plum[i-1][j]+1;
                else if(j % 2 == 0){
                    plum[i][j] = (plum[i-1][j]+1 > plum[i][j-1]+1)? plum[i-1][j]+1 : plum[i][j-1]+1;
                }
                else plum[i][j] = plum[i-1][j];
            }
            else {
                if(j % 2 == 1){
                    plum[i][j] = (plum[i-1][j]+1 > plum[i][j-1]+1)? plum[i-1][j]+1 : plum[i][j-1]+1;
                }
                else plum[i][j] = plum[i-1][j];
            }
        }
    }
    int max = 0;
    for(int i = 0 ; i <= W ; i++){
        if(max < plum[T][i]) max = plum[T][i];
    }

    cout << max << endl;


    return 0;
}