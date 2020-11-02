#include <iostream>

using namespace std;

char win[1001];

int main(){

    //입력
    int N;

    cin >> N;

    win[1] = 'O';
    win[2] = 'X';
    win[3] = 'O';
    win[4] = 'O';


    // 시작해보자!
    for(int i = 5 ; i <= N ; i++){
        if(win[i-1] == 'X' || win[i-3] == 'X' || win[i-4] == 'X') win[i] = 'O';
        else win[i] = 'X';
    }

    if(win[N] == 'O') cout << "SK";
    else cout << "CY";


    return 0;
}