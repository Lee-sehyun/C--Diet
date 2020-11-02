#include <iostream>

using namespace std;

long long dp[1001][1001] = {-1};

int color(int a, int b);

int main(){

    //입력
    int N;
    int K;

    cin >> N;
    cin >> K;

    for (int i = 0 ; i < 1001 ; i++){
        for (int j = 0 ; j < 1001 ; j++){
            if (j == 0) dp[i][j] = 1;
            else dp[i][j] = -1;
        }
        // dp[i][0] = 1;
    }
    dp[1][1] = 1;
    dp[3][2] = 0;


    // 시작해보자!
    cout << color(N, K) << endl;


    return 0;
}

int color(int a, int b){
    if (dp[a][b] != -1){
        return dp[a][b];
    }
    else if (a <= b) {
        dp[a][b] = 0;
        return dp[a][b];
    }
    dp[a][b] = (color(a-1, b) + color(a-2, b-1)) % 1000000003;
    return dp[a][b];
}