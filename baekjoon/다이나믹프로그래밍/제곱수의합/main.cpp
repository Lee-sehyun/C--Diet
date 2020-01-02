// 백준 1699번
#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int dp[100001];

int Square(int n);

int main(){

    // 입력
    int N;

    cin >> N;

    // 코드 시작

    /* 
       엄... 12같은 경우는 3^2+(1^2 3개)면 4개이고 (2^2 3개)면 3개이기 때문에 2^2을 넣는게 더 적다.
       이거 어디선가 풀어봤는데...
       그 전 값의 최솟값을 구해서 1를 더하면은 그 값의 최솟값!
    */

   fill(dp, dp+N+1, -1);

   cout << Square(N) << endl;


    return 0;
}

int Square(int n){
    if (n == 1) return 1; // 1은 1개
    else if (dp[n] != -1) return dp[n];
    else if (n == (int(sqrt(n))*int(sqrt(n)))) { // n자체가 무엇의 제곱수일때면 1개
        dp[n] = 1;
        return dp[n];
    }

    int result = Square(n-(int(sqrt(n))*int(sqrt(n)))); 
    /* n에 그보다 작은 어떤것의 제곱수를 뺀 것이 첫번 째 
       (n의 제곱수에서 소수점 이하는 버린다. )
       --> 이유: n의 제곱수보다 큰 정수를 제곱하면 n보다 커지기 때문
    */
    for (int i = sqrt(n) ; i > 0 ; i--){
        result = min(result, Square(n-(i*i))); // 더 작은 값이 있는지 확인
    }
    dp[n] = result+1; // 결과에 1 더한 것이 n의 최소
    return dp[n];
}
