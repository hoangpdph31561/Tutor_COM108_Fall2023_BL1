#include <stdio.h>

int main(){
	//mang luu tru tap gia tri cung kieu du lieu
	//kich thuoc cua mang. Luu toi da bao nhieu phan tu 
	//Vi tri cua cac phan tu. Vi tri 0 - (kich thuoc mang - 1)
	//<kieu dl> tenmang[kich thuoc mang];
	/*
	int n;
	printf("Xin moi nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n;i++){
		printf("Xin moi nhap gia tri vao vi tri %d cua mang: ",i);
		scanf("%d",&array[i]);
	}
	for(int i = 0; i < n;i++){
		printf("Gia tri thu %d cua mang la: %d\n",i,array[i]);
	}
	*/
	
	//tim max min, va in ra vi tri cua max min trong mang
	/*
	int n;
	printf("Xin moi nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap gia tri vao vi tri %d cua mang: ",i);
		scanf("%d",&array[i]);
	}
	int min, max;
	//tim ra max min
	min = array[0];
	max = array[0];
	for(int i = 0 ; i < n; i++){
		if(array[i] < min){
			min = array[i];
		}
		if(array[i] > max){
			max = array[i];
		}
	}
	printf("Gia tri max la: %d\n",max);
	printf("Gia tri min la: %d.\n",min);
	//tim vi tri cua no trong mang
	printf("Vi tri max la\n");
	for(int i = 0; i < n;i++){
		if(array[i] == max){
			printf("vi tri max la: %d\n",i);
		}
	}
	//vi tri cua min tu lam
	*/
	//Sap xep cac phan tu theo vi tri tang dan
	
	/*
	int n;
	printf("Xin moi nhap kich thuoc cua mang: ");
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap gia tri vao vi tri %d cua mang: ",i);
		scanf("%d",&array[i]);
	}
	//sap xep noi tang dan
	for(int i = 0; i < n;i++){
		for(int j = i+1; j <n;j++){
			if(array[i]>array[j]){
				int swap = array[i];
				array[i] = array[j];
				array[j]= swap;
			}
		}
	}
	printf("Sau sap xep\n");
	for(int i = 0 ; i <n;i++){
		printf("%d\n", array[i]);
	}
	*/
	
}
