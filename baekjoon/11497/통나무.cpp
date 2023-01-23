#include <iostream>
#include <vector>

using namespace std;

void quick_sort(vector<int> &v, int left, int right);
void swap(vector<int> &v, int i, int j);

int main(){

    //입력
    int T;
    cin >> T;
    for(int t = 0 ; t < T ; t++){
        int N;
        cin >> N;
        vector<int> log(N);
        for(int i = 0 ; i < N ; i++){
            cin >> log[i];
        }
        quick_sort(log, 0, N-1);
        int max = 0;
        for(int i = 2 ; i < N ; i++){
            if(max < log[i] - log[i-2]) max = log[i] - log[i-2];
        }
        cout << max << endl;
    }
    


    return 0;
}

void quick_sort(vector<int> &v, int left, int right){
    if(left < right){
        int pivot = left;
        int i = left+1;
        int j = right;
        while(i <= j){
            if(v[i] <= v[pivot]) i++;
            else if(v[j] > v[pivot]) j--;
            else swap(v, i, j);
        }
        swap(v, pivot, j);
        quick_sort(v, left, j-1);
        quick_sort(v, j+1, right);
    }
}

void swap(vector<int> &v, int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}