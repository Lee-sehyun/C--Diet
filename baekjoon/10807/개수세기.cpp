#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, v;
    cin >> N;
    map<int, int> num;
    for(int i = 0 ; i < N ; i++){
        cin >> v;
        num[v]++;
    }
    cin >> v;
    cout << num[v];
}