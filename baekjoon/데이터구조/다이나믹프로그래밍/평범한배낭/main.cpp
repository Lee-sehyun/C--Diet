// 백준 12865번
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    // 입력
    int N, K;
    int i, j;

    cin >> N >> K;

    int W[N], V[N];
    int dp[N+1][K+1]; // 물건의 개수 N개와 무게 K

    for (i = 0 ; i < N ; i++){
        cin >> W[i] >> V[i];
        for (j = 0 ; j < K+1 ; j++){
            dp[i+1][j] = 0; // 일단 0으로 초기화
        }
    }

    // 코드 시작

    // 크윽.... 다시 돌아오겠다...
    // 다시 돌아왔다.

    for (i = 0 ; i < K+1 ; i++){
        dp[0][i] = 0;
    }
    
    // i는 물건의 갯수, j는 가방의 무게
    for (i = 0 ; i < N ; i++){
        for (j = 1 ; j <= K ; j++){
            if (j >= W[i]){ // j가 물체의 무게보다 클 때
                dp[i+1][j] = max(V[i]+dp[i][j-W[i]], dp[i][j]);
                // 이 물건을 넣었을 때의 가치의 최댓갑과 안 넣었을 때의 최댓값중 큰 것을 고른다.
            }
            else { // j가 물체의 무게보다 작을 때
                dp[i+1][j] = dp[i][j];
                // 이 물건은 넣을 수 없으므로 안 넣었을 때의 최댓값이 최댓값
            }
        }
    }

    cout << dp[N][K] << endl;



    return 0;
}