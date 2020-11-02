#include <iostream>

using namespace std;

int main(){

    //입력
    long long X, Y, P1, P2, i;

    cin >> X >> Y >> P1 >> P2;

    for(i = P1-P2+X ; ; i += X){
        if(i < 0) continue;
        else if(i%Y == 0) {
            cout << i+P2 << endl;
            break;
        }
        else if(X==Y && i%X != 0){
            cout << -1 << endl;
            break;
        }
    }

    return 0;
}