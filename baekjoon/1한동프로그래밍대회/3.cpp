#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point{
    int x;
    int y;
};
int main() {
	Point P, Q, R, S, X, Y;
    int temp;
    vector<int> x, y;

    cin >> P.x >> P.y;
    cin >> Q.x >> Q.y;
    cin >> R.x >> R.y;
    cin >> S.x >> S.y;

    if(P.x > Q.x){
        temp = P.x;
        P.x = Q.x;
        Q.x = temp;
    }
    if(P.y < Q.y){
        temp = P.y;
        P.y = Q.y;
        Q.y = temp;
    }
    if(R.x > S.x){
        temp = R.x;
        R.x = S.x;
        S.x = temp;
    }
    if(R.y < S.y){
        temp = R.y;
        R.y = S.y;
        S.y = temp;
    }
    x.push_back(P.x);
    x.push_back(Q.x);
    x.push_back(R.x);
    x.push_back(S.x);
    sort(x.begin(), x.end());
    if((x[1] == Q.x && x[2] == R.x) || (x[1] == S.x && x[2] == P.x)){
        X.x = 0;
        Y.x = 0;
    }
    else {
        X.x = x[1];
        Y.x = x[2];
    }
    y.push_back(P.y);
    y.push_back(Q.y);
    y.push_back(R.y);
    y.push_back(S.y);
    sort(y.begin(), y.end());
    if((y[1] == R.y && y[2] == Q.y) || (y[1] == P.y && y[2] == S.y)){
        X.y = 0;
        Y.y = 0;
    }
    else {
        X.y = y[1];
        Y.y = y[2];
    }

    int result = abs(X.x - Y.x) * abs(X.y - Y.y);
    cout << result << endl;
    

	return 0;
}