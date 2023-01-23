#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int M, N;

    cin >> M >> N;


    // 시작해보자!
    vector<int> prime(N+1);
    for(int i = 2 ; i <= N ; i++){
        if(prime[i] == 0){
            if(i >= M) cout << i << "\n";
            for(int j = i*2 ; j <= N ; j += i){
                if(prime[j] == 0) prime[j] = 1;
            }
        }
    }


    return 0;
}