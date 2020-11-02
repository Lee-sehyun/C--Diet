#include <iostream>

using namespace std;

int main(){

    //입력
    double N, M, B;

    while(cin >> N >> B >> M){
        int cnt = 0;

        double sum = N;

        // 시작해보자!
        while(sum < M){
            sum += sum/100*B;
            cnt++;
        }
        cout << cnt << endl;

    }
    return 0;
}