#include <iostream>
#include <queue>

using namespace std;

int main(){

    //입력
    int R, C;
    queue<pair<int, int>> P, F;

    cin >> R >> C;

    char maze[R][C];

    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            cin >> maze[i][j];
            if(maze[i][j] == 'J'){
                P.push(make_pair(i, j));
            }
            else if(maze[i][j] == 'F'){
                F.push(make_pair(i, j));
            }
        }
    }


    // 시작해보자!
    int cnt = 0, K = 0;
    P.push(make_pair(-1, -1));
    F.push(make_pair(-1, -1));
    while(1){
        if(P.front().first == -1){
            cnt = -1;
            break;
        }
        while(F.front().first != -1) {
            if(F.front().first != 0 && (maze[F.front().first - 1][F.front().second] == '.' || maze[F.front().first - 1][F.front().second] == 'J')){
                maze[F.front().first - 1][F.front().second] = 'F';
                F.push(make_pair(F.front().first - 1, F.front().second));
            }
            if(F.front().first != R-1 && (maze[F.front().first + 1][F.front().second] == '.' || maze[F.front().first + 1][F.front().second] == 'J')){
                maze[F.front().first + 1][F.front().second] = 'F';
                F.push(make_pair(F.front().first + 1, F.front().second));
            }
            if(F.front().second != 0 && (maze[F.front().first][F.front().second - 1] == '.' || maze[F.front().first][F.front().second - 1] == 'J')){
                maze[F.front().first][F.front().second - 1] = 'F';
                F.push(make_pair(F.front().first, F.front().second - 1));
            }
            if(F.front().second != C-1 && (maze[F.front().first][F.front().second + 1] == '.' || maze[F.front().first][F.front().second + 1] == 'J')){
                maze[F.front().first][F.front().second + 1] = 'F';
                F.push(make_pair(F.front().first, F.front().second + 1));
            }
            F.pop();
        }
        while(P.front().first != -1){
            if(P.front().first == 0 || P.front().first == R-1 || P.front().second == 0 || P.front().second == C-1){
                K = 1;
                break;
            }
            else {
                if(maze[P.front().first - 1][P.front().second] == '.'){
                    maze[P.front().first - 1][P.front().second] = 'J';
                    P.push(make_pair(P.front().first - 1, P.front().second));
                }
                if(maze[P.front().first + 1][P.front().second] == '.'){
                    maze[P.front().first + 1][P.front().second] = 'J';
                    P.push(make_pair(P.front().first + 1, P.front().second));
                }
                if(maze[P.front().first][P.front().second - 1] == '.'){
                    maze[P.front().first][P.front().second - 1] = 'J';
                    P.push(make_pair(P.front().first, P.front().second - 1));
                }
                if(maze[P.front().first][P.front().second + 1] == '.'){
                    maze[P.front().first][P.front().second + 1] = 'J';
                    P.push(make_pair(P.front().first, P.front().second + 1));
                }
            }
            P.pop();
        }
        cnt++;
        if(K == 1){
            break;
        }
        P.pop();
        F.pop();
        P.push(make_pair(-1, -1));
        F.push(make_pair(-1, -1));
    }
    
    if(cnt == -1){
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        cout << cnt << endl;
    }

    return 0;
}