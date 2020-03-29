#include <iostream>

using namespace std;

void way(int [], int i, int a, int sum, int n);
void way(int [], int i, int a, int [], int b, int sum, int n);

int answer = 0;
int save_A[1000] = {-1};
int save_B[1000] = {-1};

int main(){

    //입력
    int N;

    cin >> N;

    int A, B;

    cin >> A >> B;

    int slice_A[A];
    int slice_B[B];

    for (int i = 0 ; i < A ; i++){
        cin >> slice_A[i];
    }
    for (int i = 0 ; i < B ; i++){
        cin >> slice_B[i];
    }


    // 시작해보자!
    for (int i = 0 ; i < A ; i++){
        way(slice_A, i, A, slice_B, B, 0, N);
    }
    for (int i = 0 ; i < B ; i++){
        way(slice_B, i, B, 0, N);
    }

    cout << answer << endl;
    

    return 0;
}

void way(int slice[], int i, int a, int sum, int n){
    sum = sum+slice[i];
    if (sum == n) answer++;
    else if (sum < n){
        way(slice, (i+1)%a, a, sum, n);
    }
}

void way(int slice_A[], int i, int a, int slice_B[], int b, int sum, int n){
    sum = sum + slice_A[i];
    if (sum == n) answer++;
    else if (sum < n){
        for (int l = 0 ; l < b ; l++){
            way(slice_B, l, b, sum, n);
        }
        way(slice_A, (i+1)%a, a, slice_B, b, sum, n);
    }
}