#include <bits/stdc++.h>

using namespace std;

int main()
{

    //입력
    int t, n;
    string paper;

    cin >> t;

    for (int T = 0 ; T < t ; T++){
        cin >> n;
        cin >> paper;
        int checkR = 0, checkB = 0, check = 0;
        for (int N = 0 ; N < n ; N++){
            if(paper[N] == 'R'){
                checkR = 1;
            }
            else if(paper[N] == 'B'){
                checkB = 1;
            }
            else {
                if(checkR != checkB){
                    check = 1;
                }
                checkR = 0;
                checkB = 0;
            }
        }
        if(checkR != checkB){
            check = 1;
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