#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    vector<int> N(4);

    for(int t = 0 ; t < 3 ; t++){
        for(int i = 0 ; i < 4 ; i++) cin >> N[i];


        // 시작해보자!
        int cnt = 0;
        for(int i = 0 ; i < 4 ; i++) {
            if(N[i] == 0) cnt++;
        }

        if(cnt == 0) cout << "E" << endl;
        else if(cnt == 1) cout << "A" << endl;
        else if(cnt == 2) cout << "B" << endl;
        else if(cnt == 3) cout << "C" << endl;
        else if(cnt == 4) cout << "D" << endl;
    }
    

    return 0;
}