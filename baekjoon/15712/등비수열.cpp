#include <bits/stdc++.h>

using namespace std;

long long R(long long  r, long long  n, long long  mod);
long long Pow(long long  r, long long  n, long long  mod);

int main(){

    //입력
    long long  a, r, n, mod;

    cin >> a >> r >> n >> mod;

    // 시작해보자!
    // (a*(r^n-1)/r-1)%mod
    // (a%mod)*((r^n)%mod-1)/((r-1)%mod)
    long long ans = (a*R(r, n-1, mod))%mod;

    
    cout << ans << endl;


    return 0;
}

long long R(long long  r, long long  n, long long  mod){
    if(n == 0) return 1;
    else if(n == 1) return (r+1)%mod;
    else {
        if(n%2 == 0){
            return ((R(r, n/2-1, mod)*(1+Pow(r, n/2, mod)))%mod+Pow(r, n, mod)%mod)%mod;
        }
        else {
            return (R(r, n/2, mod)*(1+Pow(r, n/2+1, mod)))%mod;
        }
    }
}

long long Pow(long long  r, long long  n, long long  mod){
    // if(n == 0) return 1;
    // else if(n == 1) return r;
    // else {
    //     long long temp;
    //     if(n%2 == 0){
    //         temp = Pow(r, n/2, mod);
    //         return (temp*temp)%mod;
    //     }
    //     else {
    //         temp = Pow(r, n/2, mod);
    //         return (temp*temp*r)%mod;
    //     }
    // }
    long long sum = 1;
    while(n){
       if(n % 2 == 1) sum = (sum * r)%mod;
       r = (r*r)%mod;
       n /= 2; 
    }
    return sum;
}