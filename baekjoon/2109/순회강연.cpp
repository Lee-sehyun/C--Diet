#include <iostream>
#include <vector>

using namespace std;

void quick_sort(vector<vector<int>> &v, int left, int right);
void swap(vector<vector<int>> &v, int i, int j);

int main(){

    //입력
    int n;

    cin >> n;

    vector<vector<int>> P(n, vector<int>(2));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin >> P[i][j];
        }
    }


    // 시작해보자!
    quick_sort(P, 0, n-1);
    int max = 0, sum = 0;
    int maxidx = n-1, idx = -1;
    for(int i = 10000 ; i > 0 ; i--){
        // for(int j = maxidx ; j >= -1 ; j--){
        //     if(i > P[j][1] || j == -1){
        //         maxidx = j;
        //         break;
        //     }
        // }
        // for(int j = maxidx+1 ; j < n ; j++){
        //     if(max < P[j][0]){
        //         max = P[j][0];
        //         idx = j;
        //     }
        // }
        // sum += max;
        // if(idx != n) P[idx][0] = 0;
        // max = 0;
        
        for(int j = 0 ; j < n ; j++){
            if(P[j][1] >= i && max < P[j][0]){
                max = P[j][0];
                idx = j;
            }
        }
        sum += max;
        if(idx != -1) P[idx][0] = 0;
        max = 0;
    }
    
    cout << sum << endl;

    return 0;
}

void quick_sort(vector<vector<int>> &v, int left, int right){
    if(left < right){
        int pivot = left;
        int i = left+1;
        int j = right;
        while(i <= j){
            if(v[i][1] <= v[pivot][1]) i++;
            else if(v[j][1] > v[pivot][1]) j--;
            else swap(v, i, j);
        }
        swap(v, pivot, j);
        quick_sort(v, left, j-1);
        quick_sort(v, j+1, right);
    }
}

void swap(vector<vector<int>> &v, int i, int j){
    vector<int> temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}