#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;

    for(int k = 0 ; k < N ; k++){
        int R, C;
        cin >> R >> C;
        vector<vector<char>> arr(R, vector<char>(C));
        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                cin >> arr[i][j];
            }
        }
        int check = 0;
        int N_i, N_j;
        for(int i = 0 ; i < R ; i++){
            int cnt = 1;
            char temp = '0';
            for(int j = 0 ; j < C ; j++){
                if(arr[i][j] != temp){
                    cnt = 1;
                    temp = arr[i][j];
                    N_i = i;
                    N_j = j;
                }
                else {
                    cnt ++;
                    if(cnt == 3) {
                        check = 1;
                        break;
                    }
                }
            }
            if(check == 1) break;
        }
        if(check == 1){
            for(int i = 0 ; i < 3 ; i++){
                cout << N_i+1 << " " << N_j+i+1 << " ";
            }
            cout << endl;
            continue;
        }
        for(int i = 0 ; i < C ; i++){
            int cnt = 1;
            char temp = '0';
            for(int j = 0 ; j < R ; j++){
                if(arr[j][i] != temp){
                    cnt = 1;
                    temp = arr[j][i];
                    N_i = j;
                    N_j = i;
                }
                else {
                    cnt ++;
                    if(cnt == 3) {
                        check = 1;
                        break;
                    }
                }
            }
            if(check == 1) break;
        }
        if(check == 1){
            for(int i = 0 ; i < 3 ; i++){
                cout << N_i+i+1 << " " << N_j+1 << " ";
            }
            cout << endl;
        }
        else {
            cout << "no set found" << endl;
        }

    }


    return 0;
}