#include <bits/stdc++.h>

using namespace std;

int main(){
    int map[100][100];

    int N, M, x1, x2, y1, y2;

    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            map[i][j] = 0;
        }
    }

    cin >> N >> M;

    for(int i = 0 ; i < N ; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int y = y1 ; y <= y2 ; y++){
            for(int x = x1 ; x <= x2 ; x++){
                map[y-1][x-1]++;
            }
        }
    }

    int cnt = 0;

    for(int i = 0 ; i < 100 ; i++){
        for(int j = 0 ; j < 100 ; j++){
            if(map[i][j] > M){
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}