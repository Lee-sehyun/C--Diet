#include <iostream>
#include <vector>

using namespace std;

void quick_sort(vector<vector<int>> &v, int left, int right, int k);
void swap(vector<vector<int>> &v, int i, int j);

int main(){

    //입력
    int N;

    cin >> N;

    vector<vector<int>> friends(N, vector<int>(4));

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> friends[i][j];
        }
        friends[i][3] = i;
    }


    // 시작해보자!
    for(int k = 0 ; k < 4 ; k++){
        quick_sort(friends, 0, N-1, k);
        if(k == 3) break;
        int temp = friends[0][k];

        for(int i = 1 ; i < N ; i++){
            if(friends[i][k] == temp){
                friends[i][k] = 0;
                friends[i-1][k] = 0;
            }
            else {
                temp = friends[i][k];
            }
        }
    }
    for(int i = 0 ; i < N ; i++){
        int sum = 0;
        for(int j = 0 ; j < 3 ; j++){
            sum += friends[i][j];
        }
        cout << sum << endl;
    }
    


    return 0;
}

void quick_sort(vector<vector<int>> &v, int left, int right, int k){

    if(left < right){
        // int pivot = (left + right)/2;
        // swap(v, pivot, left);
        int pivot = left;
        int i = left+1;
        int j = right;
        while (i <= j) {
            if(v[i][k] <= v[pivot][k]) i++;
            else if(v[j][k] > v[pivot][k]) j--;
            else {
                swap(v, i, j);
            }
        }
        swap(v, pivot, j);
        quick_sort(v, left, j-1, k);
        quick_sort(v, j+1, right, k);
    }
}

void swap(vector<vector<int>> &v, int i, int j){
    vector<int> temp = v[i];
    v[i] = v[j];
    v[j] = temp;

    // int temp;

    // for(int k = 0 ; k < 4 ; k++){
    //     temp = v[i][k];
    //     v[i][k] = v[j][k];
    //     v[j][k] = temp;
    // }
}