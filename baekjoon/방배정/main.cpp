#include <iostream>

using namespace std;

int main(){

    //입력
    int N, K;

    cin >> N >> K;

    int student[2][6] = {0};

    int m, age;

    for (int i = 0 ; i < N ; i++){
        cin >> m >> age;
        student[m][age-1]++;
    }


    // 시작해보자!
    int cnt = 0;

    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 6 ; j++){
            while(student[i][j] > 0){
                cnt++;
                student[i][j] -= K;
            }
        }
    }

    cout << cnt << endl;


    return 0;
}