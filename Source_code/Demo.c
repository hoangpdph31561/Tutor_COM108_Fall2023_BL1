#include <stdio.h>

int main() {
	float a,b;
	scanf("%f %f",&a,&b);
	fflush(stdin);
	printf("Nghiem la");
	PTBac1(a,b);
}

void PTBac1(float a, float b){
	if(a==0){
		if(b==0){
			printf("PT vo so nghiem");
			
		}
		else{
			printf("PT vo nghiem");
		}
	}
	else{
		printf("%f",-b/a);
	}
}
