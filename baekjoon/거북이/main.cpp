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
    int x[1001] = {0};
    int y[1001] = {0};
    int i = 500, j = 500;
    x[i] = 1;
    y[j] = 1;
    int size = strlen(a);
    int direction = 0;

    for (int l = 0 ; l < size ; l++){
        if (a[l] == 'R') direction = (direction+1)%4;
        else if (a[l] == 'L') direction = (direction+3)%4;
        else if (a[l] == 'F'){
            if (direction == 0){
                y[++j] = 1;
            }
            else if (direction == 1) {
                x[++i] = 1;
            }
            else if (direction == 2) {
                y[--j] = 1;
            }
            else {
                x[--i] = 1;
            }
        }
        else if (a[l] == 'B') {
            if (direction == 0){
                y[--j] = 1;
            }
            else if (direction == 1) {
                x[--i] = 1;
            }
            else if (direction == 2) {
                y[++j] = 1;
            }
            else {
                x[++i] = 1;
            }
        }
    }

    int answer_x = 0, answer_y = 0;

    for (i = 0 ; i < 1001 ; i++){
        if (x[i] == 1) answer_x++;
        if (y[i] == 1) answer_y++;
    }

    return (answer_x-1)*(answer_y-1);
}