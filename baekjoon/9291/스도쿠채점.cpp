#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int T, k;
    vector<int> row(9);
    vector<int> colum(9);
    vector<int> nemo(9);

    cin >> T;

    for(int t = 0 ; t < T ; t++){
        for(int i = 0 ; i < 9 ; i++){
            row[i] = 0;
            colum[i] = 0;
            nemo[i] = 0;
        }
        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){
                cin >> k;
                row[i] += k;
                colum[j] += k;
                nemo[(i/3)*3+j/3] += k;
            }
        }
        for(int i = 0 ; i < 9 ; i++){
            if(row[i] != 45 || colum[i] != 45 || nemo[i] != 45){
                cout << "Case " << t+1 << ": INCORRECT" << endl;
                break;
            }
            else if(i == 8){
                cout << "Case " << t+1 << ": CORRECT" << endl;
            }
        }
    }


    return 0;
}