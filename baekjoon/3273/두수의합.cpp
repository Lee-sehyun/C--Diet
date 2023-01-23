#include <bits/stdc++.h>

using namespace std;

void mergesort(vector<int> &v, int left, int right);

int main(){

    //입력
    int n, x, cnt = 0;
    cin >> n;
    vector<int> num(n);
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
    }
    cin >> x;

    // 시작해보자!
    int i = 0, j = n-1;
    mergesort(num, i, j);
    // for(int i = 0 ; i < n ; i++){
    //     cout << num[i] << " ";
    // }
    while(i < j){
        if(num[i]+num[j] == x) cnt++;
        if(num[i]+num[j] <= x) i++;
        else j--;
    }
    cout << cnt;

    


    return 0;
}

void mergesort(vector<int> &v, int left, int right){
    if(left < right){
        vector<int> temp;
        int mid = (left+right)/2;
        mergesort(v, left, mid);
        mergesort(v, mid+1, right);
        int i = left, j = mid+1, k = left;
        while(i <= mid || j <= right){
            if(i <= mid && j <= right){
                if(v[i] <= v[j]){
                    temp.push_back(v[i]);
                    i++;
                }
                else {
                    temp.push_back(v[j]);
                    j++;
                }
            }
            else if(i <= mid){
                temp.push_back(v[i]);
                i++;
            }
            else {
                temp.push_back(v[j]);
                j++;
            }
        }
        for(int i = 0 ; i < temp.size() ; i++, left++){
            v[left] = temp[i];
        }
    }
}