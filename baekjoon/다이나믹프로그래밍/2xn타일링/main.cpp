// 백준 11726번
#include <iostream>
using namespace std;

int dp[1001];

int f(int n);

int main(){

    // 입력
    int n;

    cin >> n;

    // 코드 시작

    /* 이것도....
       N = 1 --> 1개 
       N = 2 --> 2개
       N = 3 --> 3개 
       N = 4 --> 5개 
       N = 5 --> 8개 
       N = 6 --> 13개
       --> 피보나치 수열!*/
    
    fill(dp, dp+n+1, -1);

    cout << f(n) << endl;


    return 0;
}

int f(int n){
    if (n == 0 || n == 1) return 1; // N = 1일때만 1이니까 0일 때도 1로 만들어 피보나치 수열을 만들어준다.
    else if (dp[n] != -1) return dp[n];
    dp[n] = (f(n-1) + f(n-2))%10007; // 피보나치 수열 일반항
    return dp[n]; // 피보나치 수열 일반항
}