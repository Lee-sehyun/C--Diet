#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, M;
    vector<int> player(10001);

    while(1){
        cin >> N >> M;

        //둘 다 0이면 끝.
        if(N == 0 && M == 0) break;

        //초기화
        for(int i = 1 ; i <= 10000 ; i++){
            player[i] = 0;
        }
        
        int p;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0 ; j < M ; j++){
                cin >> p;
                player[p]++;
            }
        }

        //2등 찾기
        int max = 0, max_2 = 0;
        for(int i = 1 ; i <= 10000 ; i++){
            if(player[i] > max){
                max_2 = max;
                max = player[i];
            }
            else if(player[i] > max_2){
                max_2 = player[i];
            }
        }

        for(int i = 1 ; i <= 10000 ; i++){
            if(player[i] == max_2){
                cout << i << " ";
            }
        }
        cout << endl;


    }
    

    return 0;
}