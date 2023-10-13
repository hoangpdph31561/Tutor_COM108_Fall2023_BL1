#include <stdio.h>

int main(){
	int n = 5;
	int a[n];
	
	for (int i = 0; i < n;i++){
		printf("Xin moi nhap so thu %d: ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("Danh sach cac so vua nhap la\n");
	for(int i = 0; i < n-1;i++){
		for(int j = i+1; j < n;j++){
			if(a[i] > a[j]){
				int swap = a[i];
				a[i] = a[j];
				a[j] = swap;
			}
		}
	}
	for (int i = 0; i < n ; i++){
		printf("%d\n",a[i]);
	}

}
