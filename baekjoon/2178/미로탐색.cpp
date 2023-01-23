#include <bits/stdc++.h>

using namespace std;

int find(vector<vector<int>> &m, int i, int j);

int N, M;

int main(){

    //입력
    string str;

    cin >> N >> M;

    vector<vector<int>> m(N, vector<int>(M));

    for(int i = 0 ; i < N ; i++){
        cin >> str;
        for(int j = 0 ; j < M ; j++){
            m[i][j] = str[j] - '0';
        }
    }

    // for(int i = 0 ; i < N ; i++){
    //     for(int j = 0 ; j < M ; j++){
    //         cout << map[i][j];
    //     }
    //     cout << endl;
    // }


    // 시작해보자!
    cout << find(m, 0, 0) << endl;

    // for(int i = 0 ; i < N ; i++){
    //     for(int j = 0 ; j < M ; j++){
    //         cout << map[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    return 0;
}

int find(vector<vector<int>> &m, int i, int j){
    int min = N*M, temp;
    if(i == N-1 && j == M-1) return 1;
    // map[i][j] = 0;
    if(m[i][j] == 1){
        m[i][j] = 0;
        if(i < N-1 && m[i+1][j] != 0) {
            temp = find(m, i+1, j);
            if(min > temp) min = temp;
        }
        if(i > 0 && m                             [i-1][j] != 0) {
            temp = find(m, i-1, j);
            if(min > temp) min = temp;
        }
        if(j < M-1 && m[i][j+1] != 0) {
            temp = find(m, i, j+1);
            if(min > temp) min = temp;
        }
        if(j > 0 && m[i][j-1] != 0) {
            temp = find(m, i, j-1);
            if(min > temp) min = temp;
        }
        m[i][j] = min+1;
    }
    return m[i][j];
}