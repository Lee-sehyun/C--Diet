#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int C, N, T, L;
    string S;
    long long total_time, limit_time;

    cin >> C;

    for(int c = 0 ; c < C ; c++){
        cin >> S >> N >> T >> L;

        limit_time = (long long)L * 100000000;

        if(S == "O(N)"){
            total_time = (long long)N * T;
        }
        else if(S == "O(N^2)"){
            total_time = (long long)N * N * T;
        }
        else if(S == "O(N^3)"){
            total_time = (long long)N * N * N * T;
        }
        else if(S == "O(2^N)"){
            total_time = 1;
            for(int i = 0 ; i < N ; i++){
                total_time *= 2;
                if(total_time > limit_time) break;
            }
            total_time *= T;
        }
        else {
            total_time = 1;
            for(int i = N ; i > 0 ; i--){
                total_time *= i;
                if(total_time > limit_time) break;
            }
            total_time *= T;
        }

        if(total_time <= limit_time && total_time >= 0){
            cout << "May Pass." << endl;
        }
        else {
            cout << "TLE!" << endl;
        }
        // cout << total_time << endl;
    }

    

    return 0;
}