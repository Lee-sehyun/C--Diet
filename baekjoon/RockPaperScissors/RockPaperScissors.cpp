#include <iostream>
#include <stack>

using namespace std;

int minimun(int a[3], int b[3], int n);
int maximun(int a[3], int b[3]);

int main(){

    //입력
    int n;
    int alice[3], bob[3];
    cin >> n;
    cin >> alice[0] >> alice[1] >> alice[2];
    cin >> bob[0] >> bob[1] >> bob[2];


    // 시작해보자!
    int min = minimun(alice, bob, n);
    int max = maximun(alice, bob);

    


    return 0;
}

int minimun(int a[3], int b[3], int n){
    stack<int, int> idx;
    int i = 0, j = 0;
    int max = 0;
    whlie(i > 2){
        if(max < abs(a[i] - b[i]))
    }
}