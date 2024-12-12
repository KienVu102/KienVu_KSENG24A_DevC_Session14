#include <stdio.h>

int main(){
	char str[100];
	printf("Moi nhap 1 chuoi bat ki: ");
	fgets(str, 100, stdin);
	printf("%s", str);
	
	return 0;
}
