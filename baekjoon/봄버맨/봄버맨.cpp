#include <iostream>
#include <stack>

using namespace std;

int main(){

    //입력
    int R, C, N;
    stack<pair<int, int>> B;

    cin >> R >> C >> N;

    char boom[R][C];

    for(int i = 0 ; i < R ; i++){
        cin >> boom[i];
    }

    if(N == 1){
        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                cout << boom[i][j];
            }
            cout << endl;
        }
        return 0;
    }

    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            if(boom[i][j] == 'O'){
                B.push(make_pair(i, j));
            }
            boom[i][j] = 'O';
        }
    }
    while(!B.empty()){
        int i = B.top().first;
        int j = B.top().second;
        boom[i][j] = '.';
        if(i-1 >= 0) boom[i-1][j] = '.';
        if(i+1 < R) boom[i+1][j] = '.';
        if(j-1 >= 0) boom[i][j-1] = '.';
        if(j+1 < C) boom[i][j+1] = '.';
        B.pop();
    }


    // 시작해보자!
    N = (N-2)%4;
    if(N == 1) {
        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                cout << boom[i][j];
            }
            cout << endl;
        }
    }
    else if(N == 3) {
        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                if(boom[i][j] == 'O'){
                    B.push(make_pair(i, j));
                }
                boom[i][j] = 'O';
            }
        }
        while(!B.empty()){
            int i = B.top().first;
            int j = B.top().second;
            boom[i][j] = '.';
            if(i-1 >= 0) boom[i-1][j] = '.';
            if(i+1 < R) boom[i+1][j] = '.';
            if(j-1 >= 0) boom[i][j-1] = '.';
            if(j+1 < C) boom[i][j+1] = '.';
            B.pop();
        }
        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                cout << boom[i][j];
            }
            cout << endl;
        }
    }
    else {
        for(int i = 0 ; i < R ; i++){
            for(int j = 0 ; j < C ; j++){
                cout << "O";
            }
            cout << endl;
        }
    }
    


    return 0;
}