#include <iostream>

using namespace std;

void quick_sort(long long [], int left, int right);
void pop(long long [], int i, int n);

int main(){

    //입력
    long long d;
    int n, m;

    cin >> d >> n >> m;

    long long distance[n+2];
    distance[0] = 0;

    for (int i = 1 ; i < n+1 ; i++){
        cin >> distance[i];
    }
    distance[n+1] = d;


    // 시작해보자!
    quick_sort(distance, 1, n);

    // for (int i = 0 ; i < n+2 ; i++){
    //     cout << distance[i] << "  ";
    // }
    // cout << endl;

    long long min;
    long long left = 0, right = d;
    long long ans;

    while(left <= right){
        min = (left + right)/2;
        int start = 0;
        int cnt = 0;
        for (int i = 1 ; i < n+2 ; i++){
            if (distance[i] - distance[start] < min) cnt++;
            else start = i;
        }
        if (cnt > m) right = min-1;
        else {
            left = min+1;
            ans = min;
        }
    } 
    
    cout << ans << endl;

    return 0;
}

void quick_sort(long long a[], int left, int right){
    int pivot = left;
    int i = left+1;
    int j = right;
    long long temp;

    if (left < right){
        while(i <= j){
            if (a[i] <= a[pivot]){
                i++;
            }
            else if (a[j] > a[pivot]){
                j--;
            }
            else {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quick_sort(a, left, j-1);
        quick_sort(a, j+1, right);
    }
}