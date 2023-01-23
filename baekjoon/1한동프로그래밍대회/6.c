#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
    char str2[100];
    int i = 0;

    scanf("%[^\n]", str);

    for(i = 0 ; i < strlen(str) ; i++){
        if(str[i] == ' ') str2[i] = '_';
        else str2[i] = str[i];
    }
    str2[i] = '\0';
    printf("Converted : %s\n", str2);
    printf("Reversed : ");
    for(i = 0 ; i < strlen(str2) ; i++){
        printf("%c", str2[strlen(str2)-i-1]);
    }
    


	return 0;
}