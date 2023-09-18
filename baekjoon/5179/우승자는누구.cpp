#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int K;
    cin >> K;

    for(int k = 1 ; k <= K ; k++){
        int M, N, P;
        cin >> M >> N >> P;

        vector<vector<int>> participant(P, vector<int>(3));
        vector<vector<int>> problem(P, vector<int>(M));
        for(int i = 1 ; i <= P ; i++){
            participant[i-1][0] = i;
        }

        int p, m, t, j;
        char temp;
        for(int n = 0 ; n < N ; n++){
            cin >> p >> temp >> t >> j;
            m = temp - 'A';

            if(j == 0){
                if(problem[p-1][m] != -1){
                    problem[p-1][m]++;
                }
            }
            else {
                if(problem[p-1][m] != -1){
                    participant[p-1][1]++;
                    participant[p-1][2] += t + problem[p-1][m]*20;
                    problem[p-1][m] = -1;
                }
            }
        }

        for(int i = 0 ; i < P ; i++){
            for(int j = i+1 ; j < P ; j++){
                if(participant[i][1] < participant[j][1]){
                    vector<int> temp;
                    temp = participant[i];
                    participant[i] = participant[j];
                    participant[j] = temp;
                }
                else if(participant[i][1] == participant[j][1]){
                    if(participant[i][2] > participant[j][2]){
                        vector<int> temp;
                        temp = participant[i];
                        participant[i] = participant[j];
                        participant[j] = temp;
                    }
                }
            }
        }

        cout << "Data Set " << k << ":" << endl;
        for(int i = 0 ; i < P ; i++){
            cout << participant[i][0] << " " << participant[i][1] << " " << participant[i][2] << endl;
        }
        cout << endl;
    }
    

    return 0;
}