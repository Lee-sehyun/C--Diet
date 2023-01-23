#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int t, n;
    int k, check = -1;
    vector<int> F(200001);

    cin >> t;

    for (int T = 0 ; T < t ; T++){
        cin >> n;
        check = -1;
        for(int i = 1 ; i < 200001 ; i++){
            F[i] = 0;
        }
        for (int N = 0 ; N < n ; N++){
            cin >> k;
            F[k]++;
            if(F[k] > 2){
                check = k;
            }
        }
        cout << check << endl;
    }
    

    return 0;
}