#include <bits/stdc++.h>

using namespace std;

int main(){

    //입력
    int N, d, k, c;

    cin >> N >> d >> k >> c;

    vector<int> sushi(N);

    for(int i = 0 ; i < N ; i++){
        cin >> sushi[i];
    }


    // 시작해보자!
    int i = 0, j = k, max = 0;
    map<int, int> plate;
    plate[c] = 1;
    // plate.insert(pair<int, int>(c, 1));
    for(int l = i ; l < j ; l++){
        if(plate.find(sushi[l]) != plate.end()){
            plate[sushi[l]]++;
        }
        else {
            plate[sushi[l]] = 1;
            // plate.insert(pair<int, int>(sushi[j], 1));
        }
    }
    max = plate.size();
    for(int l = 0 ; l < N ; l++){
        if(j == N){
            j = 0;
        }
        if(plate[sushi[i]] == 1){
            plate.erase(plate.find(sushi[i]));
        }
        else {
            plate[sushi[i]]--;
        }
        if(plate.find(sushi[j]) != plate.end()){
            plate[sushi[j]]++;
        }
        else {
            plate[sushi[j]] = 1;
        }
        i++;
        j++;
        if(plate.size() > max) max = plate.size();
    }

    cout << max << endl;


    return 0;
}