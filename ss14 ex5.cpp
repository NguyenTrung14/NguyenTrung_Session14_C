#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];  
    int count = 1;  
    int i = 0;
    printf("Moi ban nhap chuoi ki tu : ");
    fgets(str, sizeof(str), stdin);
    while (i<strlen(str)) {
        if(str[i] == ' '){
        	count++;
		}
		i++;
    }
    printf("So tu trong chuoi la : %d\n", count);
    return 0;
}

