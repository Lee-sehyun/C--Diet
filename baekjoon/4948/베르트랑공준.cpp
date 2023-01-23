#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int n;

    // 시작해보자!
    while(1){
        cin >> n;
        if(n == 0) break;
        int cnt = 0;
        vector<int> prime(2*n+1);
        for(int i = 2 ; i <= 2*n ; i++){
            if(prime[i] == 0){
                if(i > n) cnt++;
                for(int j = i*2 ; j <= 2*n ; j += i){
                    if(prime[j] == 0) prime[j] = 1;
                }
            }
        }
        cout << cnt << endl;
    }


    return 0;
}