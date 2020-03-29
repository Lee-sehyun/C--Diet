#include <iostream>
#include <cstring>

using namespace std;

int move_answer(char []);

int main(){

    //입력
    int T;

    cin >> T;

    char move[T][501];

    for (int i = 0 ; i < T ; i++){
        cin >> move[i];
    }


    // 시작해보자!

    for (int i = 0 ; i < T ; i++){
        cout << move_answer(move[i]) << endl;
    }
    


    return 0;
}

int move_answer(char a[]){
    int x_p = 0, y_p = 0, x_m = 0, y_m = 0;
    int x = 0, y = 0;
    int size = strlen(a);
    int direction = 0;

    for (int l = 0 ; l < size ; l++){
        if (a[l] == 'R') direction = (direction+1)%4;
        else if (a[l] == 'L') direction = (direction+3)%4;
        else if (a[l] == 'F'){
            if (direction == 0){
                if (++y > y_p) y_p = y;
            }
            else if (direction == 1) {
                if (++x > x_p) x_p = x;
            }
            else if (direction == 2) {
                if (--y < y_m) y_m = y;
            }
            else {
                if (--x < x_m) x_m = x;
            }
        }
        else {
            if (direction == 0){
                if (--y < y_m) y_m = y;
            }
            else if (direction == 1) {
                if (--x < x_m) x_m = x;
            }
            else if (direction == 2) {
                if (++y > y_p) y_p = y;
            }
            else {
                if (++x > x_p) x_p = x;
            }
        }
    }

    return (x_p - x_m)*(y_p - y_m);
}