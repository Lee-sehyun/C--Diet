#include <bits/stdc++.h>

using namespace std;

int find(vector<vector<int>> &map, int i, int j);

int main(){

    //입력
    int n, m;

    cin >> n >> m;

    vector<vector<int>> map(n, vector<int>(m));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> map[i][j];
        }
    }


    // 시작해보자!
    int cnt = 0, max = 0, temp;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(map[i][j] == 1) {
                cnt++;
                temp = find(map, i, j);
                if(max < temp) max = temp;
            }
        }
    }
    cout << cnt << "\n" << max << endl;


    return 0;
}

int find(vector<vector<int>> &map, int i, int j){
    int cnt = 0;
    map[i][j] = 0;
    if(i < map.size()-1 && map[i+1][j] == 1) cnt += find(map, i+1, j);
    if(i > 0 && map[i-1][j] == 1) cnt += find(map, i-1, j);
    if(j < map[i].size()-1 && map[i][j+1] == 1) cnt += find(map, i, j+1);
    if(j > 0 && map[i][j-1] == 1) cnt += find(map, i, j-1);
    return cnt+1;
}