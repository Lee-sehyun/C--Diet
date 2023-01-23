#include <stdio.h>

int found(char m[7][7], int i, int j, char * str, int l);

int main() {
	char m[7][7];
    char str[100];
    int l = 0;

    for(int i = 0 ; i < 7 ; i++){
        scanf("%s", m[i]);
    }
    int k = found(m, 1, 1, str, 0);
    str[k] = '\0';
    if(k > 0) printf("Found! : %s", str);
    else printf("Not found!");
    
    


	return 0;
}

int found(char m[7][7], int i, int j, char * str, int l){
    if(i == 5 && j == 5) return l;
    int k = 0;
    m[i][j] = '#';
    if(m[i-1][j] == '-'){
        if(k == 0) {
            str[l] = 'U';
            k = found(m, i-1, j, str, l+1);
        }
    }
    if(m[i][j+1] == '-'){
        if(k == 0) {
            str[l] = 'R';
            k = found(m, i, j+1, str, l+1);
        }
    }
    if(m[i+1][j] == '-'){
        if(k == 0) {
            str[l] = 'D';
            k = found(m, i+1, j, str, l+1);
        }
    }
    if(m[i][j-1] == '-'){
        if(k == 0) {
            str[l] = 'L';
            k = found(m, i, j-1, str, l+1);
        }
    }
    return k;
}