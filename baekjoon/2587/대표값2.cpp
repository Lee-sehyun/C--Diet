#include <bits/stdc++.h>

using namespace std;

void quick_sort(vector<int> &a,int left = 0,int right = 4);
void swap(vector<int> &v, int i, int j);

int main(){

    //입력
    vector<int> N(5);

    for(int i = 0 ; i < 5 ; i++) cin >> N[i];


    // 시작해보자!
    quick_sort(N);

    int sum = 0;
    for(int i = 0 ; i < 5 ; i++) sum += N[i];

    cout << sum / 5 << "\n" << N[2] << endl;


    return 0;
}

void quick_sort(vector<int> &a, int left, int right){
    int pivot = left;
    int i = left+1;
    int j = right;
    int temp;

    if (left < right){
        while(i <= j){
            if (a[i] <= a[pivot]){
                i++;
            }
            else if (a[j] > a[pivot]){
                j--;
            }
            else {
                swap(a, i, j);
            }
        }
        swap(a, j, pivot);
        quick_sort(a, left, j-1);
        quick_sort(a, j+1, right);
    }
}

void swap(vector<int> &v, int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}