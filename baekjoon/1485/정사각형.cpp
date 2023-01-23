#include <bits/stdc++.h>

using namespace std;

struct P
{
    int x, y;
};

double sideLength(P p1, P p2);

int main(){

    //입력
    int T;
    cin >> T;
    vector<double> m;

    // 시작해보자!
    for(int t = 0 ; t < T ; t++){
        P p[4];
        m.clear();
        for(int i = 0 ; i < 4 ; i++){
            cin >> p[i].x >> p[i].y;
        }
        for(int i = 0 ; i < 4 ; i++){
            for(int j = i+1 ; j < 4 ; j++){
                double temp = sideLength(p[i], p[j]);
                m.push_back(temp);
            }
        }
        sort(m.begin(), m.end());
        // for(int i = 0 ; i < 6 ; i++){
        //     cout << m[i] << " ";
        // }
        if((m[0] == m[1] && m[1] == m[2] && m[2] == m[3]) && (m[4] == m[5])){
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }


    return 0;
}

double sideLength(P p1, P p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}