// 백준 1463번
#include <iostream>
using namespace std;

int dp[1000001]; // 각각의 숫자가 1이 되는 연산의 최솟값

int one(int n);

int main(){

    int N;

    cin >> N;

    fill(dp, dp+N+1, -1);

    cout << one(N) << endl;


    


    return 0;
}

int one(int n){
    if (n == 1) return 0; // base case : n = 1 이면 연산 횟수는 0회
    if (dp[n] != -1) return dp[n]; // 이미 값이 나온 것들은 최솟값

    int result;

    /* 1를 뺏을 때의 값과 3으로 나눴을 때의 값, 2로 나눴을 때의 값중 가장 최솟값을 고르고 
    그 최솟값에 1를 더하여 숫자 n이 1이 되는 연산의 최솟값을 구한다 */
    result = one(n-1);
    if (n%3 == 0) result = min(result, one(n/3));
    if (n%2 == 0) result = min(result, one(n/2));
    dp[n] = result+1; // result는 그 전까지의 최솟값 그래서 숫자 n이 1이 되는 연산의 최솟값은 result+1이 된다.
    return dp[n];
}