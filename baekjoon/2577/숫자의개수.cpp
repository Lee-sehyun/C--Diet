#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    long long temp = (long long)A*B*C;
    map<int, int> num;
    while(temp > 0){
        num[temp%10]++;
        temp /= 10;
    }
    for(int i = 0 ; i < 10 ; i++){
        cout << num[i] << "\n";
    }
}