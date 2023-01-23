#include <bits/stdc++.h>

using namespace std;

int findMiddle(vector<int> &v, int left, int right, int k);
void swap(vector<int> &v, int i, int j);

int main(){

    //입력
    int T;

    cin >> T;


    for(int t = 0 ; t < T ; t++){
        int N, k;
        cin >> N;
        vector<int> arr;
        queue<int> mid;
        for(int i = 0 ; i < N ; i++){
            cin >> k;
            arr.push_back(k);
            if(i % 2 == 0){
                k = findMiddle(arr, 0, arr.size()-1, (arr.size()-1)/2);
                mid.push(k);
            }
        }
        cout << mid.size() << endl;
        k = mid.size();
        for(int i = 0 ; i < k ; i++){
            cout << mid.front() << " ";
            mid.pop();
            if(i % 10 == 9 && !mid.empty()) cout << endl;
        }
        cout << endl;
    }


    return 0;
}

int findMiddle(vector<int> &v, int left, int right, int k){
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
    if(j == k) return v[k];
    else if(j < k) return findMiddle(v, j+1, right, k);
    else return findMiddle(v, left, j-1, k);
}

void swap(vector<int> &v, int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}