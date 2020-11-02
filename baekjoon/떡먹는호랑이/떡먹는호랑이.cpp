#include <iostream>

using namespace std;

int f(int n);

int dp[31] = {0};

int main(){

    //입력
    int D, K, A = 1, B;

    cin >> D >> K;


    // 시작해보자!
    while((K - f(D-2)*A)%f(D-1) != 0) A++;
    B = (K - f(D-2)*A)/f(D-1);

    cout << A << "\n" << B << endl;
    


    return 0;
}

int f(int n){
    if(n < 3) return 1;
    else if(dp[n] == 0) dp[n] = f(n-1) + f(n-2);
    return dp[n];
}