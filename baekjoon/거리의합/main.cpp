#include <iostream>

using namespace std;

void quick_sort(long long [], int left, int right);

int main(){

    //입력
    int n;

    cin >> n;

    long long x[n];

    for (int i = 0 ; i < n ; i++){
        cin >> x[i];
    }


    // 시작해보자!
    long long sum = 0;

    quick_sort(x, 0, n-1);

    for (int i = 0 ; i < n ; i++){
        for (int j = i+1 ; j < n ; j++){
            sum += x[i]-x[j];
        }
    }

    cout << sum*2;

    // for (int i = 0 ; i < n ; i++){
    //     cout << x[i] << " ";
    // }


    return 0;
}

// 퀵숄트를 만들어보자
void quick_sort(long long a[], int left, int right){
    int pivot = left;
    int i = left+1;
    int j = right;
    long long temp;

    if (left < right){
        while(i <= j){
            if (a[i] >= a[pivot]){
                i++;
            }
            else if (a[j] < a[pivot]){
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