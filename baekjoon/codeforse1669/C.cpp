#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int t, n;

    cin >> t;

    for (int T = 0 ; T < t ; T++){
        cin >> n;
        int odd = 0, even = 0, k, check = 0;
        for (int N = 0 ; N < n ; N++){
            cin >> k;
            if(N == 0){
                odd = k;
            }
            else if(N == 1){
                even = k;
            }
            else if(N%2 == 0 && odd%2 != k%2){
                check = 1;
            }
            else if(N%2 == 1 && even%2 != k%2){
                check = 1;
            }
        }
        if(check == 0){
            cout << "Yes" << endl; 
        }
        else {
            cout << "No" << endl;
        }
    }
    

    return 0;
}