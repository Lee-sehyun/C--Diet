#include <iostream>

using namespace std;

long long Catalan(int n);

long long dp[31];

int main(){

    //입력
    int N;

    // 시작해보자!
    for(cin >> N; N != 0 ; cin >> N) cout << Catalan(N) << endl;

    return 0;
}

long long Catalan(int n){
    if(dp[n] == 0){
        if(n == 1) dp[n] = 1;
        else dp[n] = Catalan(n-1)*2*(2*n-1)/(n+1);
    }
    return dp[n];
}