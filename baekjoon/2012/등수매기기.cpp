#include <bits/stdc++.h>

using namespace std;

void quick_sort(vector<int> &v, int left, int right);
void swap(vector<int> &v, int i, int j);

int main(){

    //입력
    int N;
    cin >> N;
    vector<int> score(N);
    for(int i = 0 ; i < N ; i++){
        cin >> score[i];
    }


    // 시작해보자!
    quick_sort(score, 0, N-1);
    // sort(score.begin(), score.end());
    long long sum = 0;
    for(int i = 1 ; i <= N ; i++){
        sum += abs(i - score[i-1]);
    }

    cout << sum << endl;


    return 0;
}

void quick_sort(vector<int> &v, int left, int right){
    if(left < right){
        int pivot = (left+right)/2;
        swap(v, left, pivot);
        pivot = left;
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