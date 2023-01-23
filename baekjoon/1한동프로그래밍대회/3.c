#include <stdio.h>

int main() {
	int N, sum = 0;

    scanf("%d", &N);

    for(int i = 0 ; i < N ; i++){
        char name[20];
        int cnt, coin;
        scanf("%s %d %d", name, &cnt, &coin);
        sum += cnt*coin;
    }

    printf("Total : %d", sum);
    
    


	return 0;
}