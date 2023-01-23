#include <bits/stdc++.h>

using namespace std;

void quick_sort(vector<int> &a,int left = 0,int right = 2);
void swap(vector<int> &v, int i, int j);

int main(){

    //입력
    vector<int> N(3);

    for(int i = 0 ; i < 3 ; i++) cin >> N[i];


    // 시작해보자!
    quick_sort(N);

    for(int i = 0 ; i < 3 ; i++) cout << N[i] << " ";


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