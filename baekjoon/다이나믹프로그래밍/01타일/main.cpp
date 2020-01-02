// 백준 1904번
#include <iostream>
using namespace std;

int dp[1000001];

int f(int n);

int main(){

    // 입력
    int N;

    cin >> N;

    // 코드 시작

    /* N = 1 --> 1개 (1)
       N = 2 --> 2개 (00, 11)
       N = 3 --> 3개 (001, 100, 111)
       N = 4 --> 5개 (0000, 00*1 1*2 = 3P1, 111)
       N = 5 --> 8개 (00*2 1*1 = 3P1, 00*1, 1*3 = 4P1 , 1*5)
       N = 6 --> 13개
       --> 피보나치 수열!*/
    
    fill(dp, dp+N+1, -1);

    cout << f(N) << endl;


    return 0;
}

int f(int n){
    if (n == 0 || n == 1) return 1; // N = 1일때만 1이니까 0일 때도 1로 만들어 피보나치 수열을 만들어준다.
    else if (dp[n] != -1) return dp[n];
    dp[n] = (f(n-1) + f(n-2))%15746; // 피보나치 수열 일반항
    return dp[n]; // 피보나치 수열 일반항
}