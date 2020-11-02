#include <iostream>

using namespace std;

void sort(int a[], int left, int right);

int main(){

    //입력
    int N;
    cin >> N;
    int num[N];
    for(int i = 0 ; i < N ; i++){
        cin >> num[i];
    }

    // 시작해보자!
    sort(num, 0, N-1);

    int max = num[0]*num[1];
    if(num[2] > 1) max *= num[2];
    int temp = num[N-1]*num[N-2];
    if(num[0] > 1) temp *= num[0];
    if(max < temp) max = temp;

    cout << max << endl;


    return 0;
}

void sort(int a[], int left, int right){
    int pivot = left;
    int i = left+1;
    int j = right;
    int temp;

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
        sort(a, left, j-1);
        sort(a, j+1, right);
    }
}