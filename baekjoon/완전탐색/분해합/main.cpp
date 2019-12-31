#include <iostream>
using namespace std;

int main(){

    int N;
    int i, k;
    int sum;

    cin >> N;

    for (i = 1 ; i <= N ; i++){
        sum = 0;
        sum += i;
        k = i;
        while (k > 0){
            sum += k%10;
            k /= 10;
        }
        if (sum == N){
            cout << i << endl;
            break;
        }
        else if (i == N){
            cout << 0 << endl;
        }
    }

    return 0;
}