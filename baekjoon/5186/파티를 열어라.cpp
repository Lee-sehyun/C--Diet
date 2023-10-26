#include <bits/stdc++.h>

using namespace std;

bool cmp(vector<int> a, vector<int> b){         
    return a[1] > b[1];
}

int main(){

    //입력
    int K, n, c, l;
    cin >> K;

    for(int k = 1 ; k <= K ; k++){
        cin >> n >> c >> l;

        vector<int> people_S, people_I;
        for(int i = 0 ; i < n ; i++){
            int P;
            char S;
            cin >> P >> S;

            if(S == 'S'){
                people_S.push_back(P);
            }
            else {
                people_I.push_back(P);
            }
        }

        vector<vector<int>> car;
        for(int i = 0 ; i < c ; i++){
            vector<int> temp(3);
            cin >> temp[0] >> temp[1];

            car.push_back(temp);
        }

        int answer = 0;
        sort(car.begin(), car.end(), cmp);

        for(int i = 0 ; i < people_S.size() ; i++){
            for(int j = 0 ; j < c ; j++){
                if(people_S[i] == car[j][0] && car[j][2] == 0 && car[j][1] > 0){
                    car[j][2] = 1;
                    car[j][1]--;
                    break;
                }
                if(j == c-1){
                    people_I.push_back(people_S[i]);
                }
            }
        }

        for(int i = 0 ; i < people_I.size() ; i++){
            for(int j = 0 ; j < c ; j++){
                if(people_I[i] == car[j][0] && car[j][2] == 1 && car[j][1] > 0){
                    car[j][1]--;
                    break;
                }
                if(j == c-1){
                    answer++;
                }
            }
        }

        cout << "Data Set " << k << ":" << endl;
        cout << answer << endl;
    }
    


    return 0;
}