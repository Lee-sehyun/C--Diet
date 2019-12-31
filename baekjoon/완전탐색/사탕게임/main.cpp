#include <iostream>
using namespace std;

int main(){

    int N;
    int i, j;
    int i_, j_;
    int cnt;
    int max = 0;
    char temp;

    cin >> N;


    char boad[N][N];
    for (i = 0 ; i < N ; i++){
        for (j = 0 ; j < N ; j++){
            cin >> boad[i][j];
        }
    }

    for (i = 0 ; i < N ; i++){
        for (j = 0 ; j < N ; j++){
            if (j+1 < N){
                temp = boad[i][j];
                boad[i][j] = boad[i][j+1];
                boad[i][j+1] = temp;
                cnt = 0;
                // 알아서 해라
            }
        }
    }
    
    

    return 0;
}