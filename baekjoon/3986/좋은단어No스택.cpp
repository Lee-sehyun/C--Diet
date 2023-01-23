#include <bits/stdc++.h>

// using namespace std;

int main(){

    //입력
    int N;

    scanf("%d", &N);

    char word[100001];
    char s[100001];
    int count = 0;
    int cnt = 0;
    for(int i = 0 ; i < N ; i++){
        scanf("%s", word);
        count = 0;
        for(int j = 0 ; j < strlen(word) ; j++){
            if(count == 0) {
                s[count] = word[j];
                count++;
            }
            else if(s[count-1] != word[j]) {
                s[count] = word[j];
                count++;
            }
            else count--;
        }
        if(count == 0) cnt++;
    }

    printf("%d\n", cnt);
    // cout << cnt << endl;




    return 0;
}