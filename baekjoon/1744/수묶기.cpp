#include <bits/stdc++.h>

using namespace std;

void quick_sort(vector<int> &v, int left, int right);
void swap(vector<int> &v, int i, int j);

int main(){

    //입력
    int N;
    cin >> N;
    vector<int> array(N);
    for(int i = 0 ; i < N ; i++){
        cin >> array[i];
    }

    // 시작해보자!
    int sum = 0, temp = 1;
    quick_sort(array, 0, N-1);
    for(int i = 0 ; i < N ; i++){
        if(array[i] <= 0) {
            if(temp == 1) temp = array[i];
            else {
                sum += temp * array[i];
                temp = 1;
            }
        }
        else if(array[i] == 1) sum += 1;
        else {
            break;
        }
    }
    if (temp != 1) {
        sum += temp;
        temp = 1;
    }
    for(int i = N-1 ; i >= 0 ; i--){
        if(array[i] > 1) {
            if(temp == 1) temp = array[i];
            else {
                sum += temp * array[i];
                temp = 1;
            }
        }
        else {
            break;
        }
    }
    if (temp != 1) sum += temp;

    cout << sum << endl;
    
    

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