#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int n, d;

    cin >> n;
    vector<pair<int, int> > position;
    int H, O;

    for(int i = 0 ; i < n ; i++){
        cin >> H >> O;
        if (H < O){
            position.push_back(make_pair(H, O));
        }
        else {
            position.push_back(make_pair(O, H));
        }
    }
    cin >> d;

    vector<pair<int, int> > position2;
    vector<int> P_x, P_y;

    for(int i = 0 ; i < n ; i++){
        if(position[i].second - position[i].first <= d){
            position2.push_back(position[i]);
            P_x.push_back(position[i].first);
            P_y.push_back(position[i].second);
        }
    }

    sort(P_x.begin(), P_x.end());
    sort(P_y.begin(), P_y.end());
    n = position2.size();

    int min = 0, max = 0;

    // 시작해보자!
    int x = 0, y = 0;
    while(y != n){
        int cnt = 0;
        if(P_y[y] - P_x[x] <= d){
            y++;
        }
        else {
            for(int i = 0 ; i < n ; i++){
                if(position2[i].first >= P_x[x] && position2[i].second <= P_y[y-1]){
                    cnt++;
                }
            }
            x++;
        }
        if(cnt > max){
            max = cnt;
        }
    }
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(position2[i].first >= P_x[x] && position2[i].second <= P_y[y-1]){
            cnt++;
        }
    }
    if(cnt > max){
        max = cnt;
    }

    cout << max << endl;
    


    return 0;
}