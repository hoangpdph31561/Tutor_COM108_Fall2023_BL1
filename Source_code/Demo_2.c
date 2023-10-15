#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	int tuoi;
	printf("Nhap tuoi cua ban: ");
	scanf("%d",&tuoi);
	fflush(stdin);
	char name[50];
	printf("Xin moi nhap ten cua ban: ");
	gets(name);
	
	
	
	printf("Tuoi ban la: %d\n",tuoi);
	printf("Ten ban la: ");
	puts(name);
}
