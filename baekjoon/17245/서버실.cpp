#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N;

    cin >> N;

    vector<vector<int>> server(N, vector<int>(N));

    int computer, max_index = 0;
    long long max = 0, sum = 0;

    for(int i = 0 ; i < N ; i++){
        for(int j = 0; j < N ; j++){
            cin >> computer;

            server[i][j] = computer;
            max += computer;
            if(computer > max_index){
                max_index = computer;
            }
        }
    }

    max = max/2+max%2;
    int index = max_index/2, min_index = 0;

    while(min_index < max_index){
        sum = 0;
        for(int i = 0 ; i < N ; i++){
            for(int j = 0; j < N ; j++){
                if(server[i][j] >= index){
                    sum += index;
                }
                else{
                    sum += server[i][j];
                }
            }
        }
        if(sum < max){
            min_index = index+1;
            index = (min_index+max_index)/2;
        }
        else{
            max_index = index;
            index = (min_index+max_index)/2;
        }
    }

    cout << index << endl;

    return 0;
}