#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int C, N;
    cin >> C >> N;
    vector<int> dp(1500);
    vector<vector<int>> city(N, vector<int>(2));

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> city[i][j];
        }
    }

    // 시작해보자!
    dp[0] = 0;
    for(int i = 1 ; i < 1500 ; i++){
        dp[i] = 1000000;
    }
    int min = 1000000;
    for(int i = 1 ; i < 1500 ; i++){
        int cnt = 0;
        for(int j = 0 ; j < N ; j++){
            if(i >= city[j][1]){
                if(dp[i] > dp[i-city[j][1]] + city[j][0]) dp[i] = dp[i-city[j][1]] + city[j][0];
                cnt++;
            }
        }
        if(i >= C && dp[i] < min) min = dp[i];
    }

    cout << min << endl;
    


    return 0;
}