#include <iostream>
#include <vector>

using namespace std;

int main(){

    //입력
    int N, M, k;

    cin >> N;

    vector<int> solder(N);

    for(int i = 0 ; i < N ; i++){
        cin >> k;
        if(i == 0) solder[i] = k;
        else solder[i] = solder[i-1]+k;
    }

    cin >> M;

    int plag, unit, p;
    for(int i = 0 ; i < M ; i++){
        cin >> plag;
        if(plag == 1){
            cin >> unit >> p;
            for(int j = unit-1 ; j < N ; j++) solder[j] += p;
        }
        else {
            cin >> p;
            int a = 0, b = N-1;
            while(1){
                if(a == b) {
                    cout << a+1 << endl;
                    break;
                }
                else if(p <= solder[(a+b)/2]){
                    b = (a+b)/2;
                }
                else {
                    a = (a+b)/2+1;
                }
            }
        }
    }

    return 0;
}