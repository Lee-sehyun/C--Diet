#include <iostream>
using namespace std;

int main(){

    int a[9];
    int i, j;
    int b, c;
    int temp;
    int sum = 0;

    for (i = 0 ; i < 9 ; i++){
        cin >> a[i];
    }
    for (i = 0 ; i < 8 ; i++){
        for (j = i+1 ; j < 9 ; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    b = 0;
    c = b+1;
    while (b < 9){
        for (i = 0 ; i < 9 ; i++){
            if (i == b || i == c){
                continue;
            }
            sum += a[i];
        }
        if (sum == 100){
            for (i = 0 ; i < 9 ; i++){
                if (i == b || i == c){
                    continue;
                }
                cout << a[i] << endl;
            }
            break;
        }
        else {
            sum = 0;
            if (c < 8){
                c++;
            }
            else {
                b++;
                c = b+1;
            }
        }
    }

    return 0;
}