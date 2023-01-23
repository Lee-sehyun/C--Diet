#include <stdio.h>

int main() {
	int p[5][2];

    for(int i = 0 ; i < 5 ; i++){
        scanf("%d %d", &p[i][0], &p[i][1]);
    }

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 19 ; j >= 0 ; j--){
            if(j < p[i][0]) printf("<");
            else printf(" ");
        }
        for(int j = 0 ; j < p[i][1] ; j++){
            printf(">");
        }
        printf("\n");
    }
    


	return 0;
}