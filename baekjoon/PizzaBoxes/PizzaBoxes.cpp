#include <iostream>

using namespace std;

int main(){

    //입력
    int n, m;

    cin >> n >> m;

    int pizza[n][m];
    bool check[n][m];

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> pizza[i][j];
            check[i][j] = false;
        }
    }

    // 시작해보자!
    int max, idx;
    for(int i = 0 ; i < n ; i++){
        max = pizza[i][0];
        idx = 0;
        for(int j = 1 ; j < m ; j++){
            if(max < pizza[i][j]){
                max = pizza[i][j];
                idx = j;
            }
        }
        check[i][idx] = true;
    }
    for(int i = 0 ; i < m ; i++){
        max = pizza[0][i];
        idx = 0;
        for(int j = 1 ; j < n ; j++){
            if(max < pizza[j][i]){
                max = pizza[j][i];
                idx = j;
            }
        }
        check[idx][i] = true;
    }
    long long sum = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(!check[i][j]){
                sum += pizza[i][j];
            }
        }
    }

    cout << sum << endl;


    return 0;
}