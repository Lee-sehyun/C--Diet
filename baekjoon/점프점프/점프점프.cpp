#include <iostream>

using namespace std;

int main(){

    //입력
    long long X, Y, P1, P2, i, x, y;

    cin >> X >> Y >> P1 >> P2;

    i = abs(X-Y);
    x = P1%X;
    y = P2%Y;
    if(i == 0 && abs(x-y) != 0) cout << -1 << endl;
    else if(i != 0 && abs(x-y)%i != 0) cout << -1 << endl;
    else {
        for(int j = X+P1 ; ; j+=X){
            if(j-P2 < 0) continue;
            else if((j-P2)%Y == 0){
                cout << j << endl;
                break;
            }
        }
    }

    

    return 0;
}