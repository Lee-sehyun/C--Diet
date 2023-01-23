#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, M;
    cin >> N >> M;
    // string map[N];
    vector<string> map(N);
    vector<vector<bool>> check(N, vector<bool>(M));
    for(int i = 0 ; i < N ; i++){
        cin >> map[i];
        for(int j = 0 ; j < M ; j++){
            check[i][j] = false;
        }
    }


    // 시작해보자!
    int cnt = 0;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            if(check[i][j] == false){
                set<int> s;
                int a = i, b = j;
                while(check[a][b] == false){
                    s.insert(a*M+b);
                    check[a][b] = true;
                    // 다음으로 넘어감.
                    if(map[a][b] == 'D') a++;
                    else if(map[a][b] == 'U') a--;
                    else if(map[a][b] == 'L') b--;
                    else b++;
                }
                if(s.find(a*M+b) != s.end()) cnt++;
            }
        }
    }

    cout << cnt << endl;


    return 0;
}