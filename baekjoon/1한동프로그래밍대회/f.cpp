#include <bits/stdc++.h>

using namespace std;

int fb(int n);

int main(){

    // 시작해보자!
    cout << fb(45) << endl;


    return 0;
}

int fb(int n){
    if(n < 2) return n;
    else return fb(n-1)+fb(n-2);
}