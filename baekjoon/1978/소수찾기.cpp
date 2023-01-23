#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;

    vector<int> prime(N);

    for(int i = 0 ; i < N ; i++){
        cin >> prime[i];
    }


    // 시작해보자!
    int cnt = 0;
    for(int i = 0 ; i < N ; i++){
        if(prime[i] != 1){
            int flag = 0;
            for(int j = 2 ; j < prime[i] ; j++){
                if(prime[i] % j == 0) flag = 1;
            }
            if(flag == 0) cnt++;
        }
    }

    cout << cnt << endl;


    return 0;
}