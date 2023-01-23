#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct st_word{
	char str[100];
	int length;
};

void sort(struct st_word * s[], int left, int right);

int main() {
    int N;
    scanf("%d", &N);
    struct st_word * s[N];

    for(int i = 0 ; i < N ; i++){
        s[i] = (struct st_word*)malloc(sizeof(struct st_word));
        scanf("%s", s[i]->str);
        s[i]->length = strlen(s[i]->str);
    }
    sort(s, 0, N-1);
    printf("Sorted.\n");
    for(int i = 0 ; i < N ; i++){
        printf("%s\n", s[i]->str);
    }

	return 0;
}

void sort(struct st_word * s[], int left, int right){
    int p = left, i = left+1, j = right;
    if(left <= right){
        while(i <= j){
            int f1 = 0, f2 = 0;
            if(s[i]->length < s[p]->length) i++;
            else if(s[i]->length == s[p]->length){
                if(strcmp(s[i]->str, s[p]->str) <= 0) i++;
                else f1 = 1;
            }
            else f1 = 1;
            if(s[j]->length > s[p]->length) j--;
            else if(s[j]->length == s[p]->length){
                if(strcmp(s[j]->str, s[p]->str) > 0) j--;
                else f2 = 1;
            }
            else f2 = 1;
            if(f1 == 1 && f2 == 1){
                struct st_word * temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                // free(temp);
            }
        }
        struct st_word * temp = s[j];
        s[j] = s[p];
        s[p] = temp;
        // free(temp);
        sort(s, left, j-1);
        sort(s, j+1, right);
    }
}