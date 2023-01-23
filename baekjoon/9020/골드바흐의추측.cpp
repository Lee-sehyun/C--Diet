#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int T, n;

    cin >> T;

    // 시작해보자!
    for(int t = 0 ; t < T ; t++){
        cin >> n;
        vector<int> prime(n);
        vector<int> p;
        for(int i = 2 ; i < n ; i++){
            if(prime[i] == 0){
                p.push_back(i);
                for(int j = i*2 ; j <= n ; j += i){
                    if(prime[j] == 0) prime[j] = 1;
                }
            }
        }
        int i = 0, j = p.size()-1, a, b;
        while(i<=j){
            if(p[i]+p[j] == n){
                a = p[i];
                b = p[j];
            }
            if(p[i]+p[j] <= n) i++;
            else j--;
        }
        cout << a << " " << b << endl;
        prime.clear();
        p.clear();
    }


    return 0;
}