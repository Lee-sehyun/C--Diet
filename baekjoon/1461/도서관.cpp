#include <bits/stdc++.h>

using namespace std;

void quick_sort_plus(vector<int> &v, int left, int right);
void quick_sort_minus(vector<int> &v, int left, int right);
void swap(vector<int> &v, int i, int j);

int main(){

    //입력
    int N, M, k;

    cin >> N >> M;
    vector<int> minus;
    vector<int> plus;
    for(int i = 0 ; i < N ; i++){
        cin >> k;
        if(k > 0) plus.push_back(k);
        else minus.push_back(k);
    }


    // 시작해보자!
    if(plus.size() > 0) quick_sort_plus(plus, 0, plus.size()-1);
    if(minus.size() > 0) quick_sort_minus(minus, 0, minus.size()-1);
    int sum = 0;
    for(int i = 0 ; i < plus.size() ; i += M){
        sum += plus[i]*2;
    }
    for(int i = 0 ; i < minus.size() ; i += M){
        sum -= minus[i]*2;
    }

    if(plus.size() == 0) sum += minus[0];
    else if(minus.size() == 0) sum -= plus[0];
    else if(plus[0] > abs(minus[0])) sum -= plus[0];
    else sum += minus[0];

    cout << sum << endl;




    return 0;
}

void quick_sort_plus(vector<int> &v, int left, int right){
    if(left < right){
        int pivot = (left+right)/2;
        swap(v, left, pivot);
        pivot = left;
        int i = left+1;
        int j = right;
        while(i <= j){
            if(v[i] >= v[pivot]) i++;
            else if(v[j] < v[pivot]) j--;
            else swap(v, i, j);
        }
        swap(v, pivot, j);
        quick_sort_plus(v, left, j-1);
        quick_sort_plus(v, j+1, right);
    }
}

void quick_sort_minus(vector<int> &v, int left, int right){
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
        quick_sort_minus(v, left, j-1);
        quick_sort_minus(v, j+1, right);
    }
}

void swap(vector<int> &v, int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}