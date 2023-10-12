#include <stdio.h>

int main() {
	/*
	printf("Hello word\n");
	int a;
	printf("Moi nhap so a: ");
	scanf("%d",&a);
	printf("So vua nhap la: %d\n",a);
	float b;
	printf("Moi nhap so b: ");
	scanf("%f",&b);
	printf("So b vua nhap la: %.2f\n",b);
	*/
	int chon;
	printf("Moi ban chon chuong trinh: ");
	scanf("%d",&chon);
	switch(chon){
		case 0:
			printf("I love u");
			break;
		case 1:
			printf("Meo meo");
			break;
		default:
			printf("Alo");
			break;
	}
	return 0;
}


