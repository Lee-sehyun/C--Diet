#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;
    long long K;

    cin >> N >> K;

    vector<int> distance(N*2);

    for(int i = 0 ; i < N ; i++){
        cin >> distance[i];
        distance[N*2-i-1] = distance[i];
    }

    for(int i = 0 ; i < N*2 ; i++){
        K -= distance[i];
        if(K < 0){
            if(i - N < 0){
                cout << i+1 << endl;
            }
            else{
                cout << 2*N-i << endl;
            }
            break;
        }
    }
    

    return 0;
}