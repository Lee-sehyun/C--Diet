#include <iostream>

using namespace std;

int room[101][101];
bool visit[101];
int student[101][101];
int N, M;

int findMin(int a);
void check(int a, int k);

int main(){

    //입력
    int T;
    cin >> T;

    for(int t = 0 ; t < T ; t++){
        cin >> N >> M;
    }

    cin >> n >> m;
    int a, b, k;
    int cnt = 1;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            vilage[i][j] = 100000001;
        }
    }

    for(int i = 0 ; i < m ; i++){
        cin >> a >> b >> k;
        if(k < vilage[a][b]) vilage[a][b] = k;
    }

    cin >> a >> b;


    // 시작해보자!
    while (1) {
        k = findMin(a);
        if(k == b){
            cout << vilage[a][b] << endl;
            cout << v[b].size()+2 << endl;
            cout << a << " ";
            for(int i = 0 ; i < v[b].size() ; i++){
                cout << v[b][i] << " ";
            }
            cout << b << endl;;
            return 0;
        }

        check(a, k);
    }
    


    return 0;
}

int findMin(int a){
    int min  = 100000001;
    int idx;
    for(int i = 1 ; i <= n ; i++){
        if(!visit[i] && vilage[a][i] < min){
            idx = i;
            min = vilage[a][i];
        }
    }
    visit[idx] = true;
    return idx;
}

void check(int a, int k){
    for(int i = 1 ; i <= n ; i++){
        if(vilage[k][i] != 100000001){
            if(vilage[a][i] > vilage[a][k] + vilage[k][i]){
                vilage[a][i] = vilage[a][k] + vilage[k][i];
                v[i].clear();
                v[i].assign(v[k].begin(), v[k].end());
                v[i].push_back(k);
            }
        }
    }
}