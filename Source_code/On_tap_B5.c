//On tap:
//L�m menu switch case
//1. Nhap so khoi nuoc nha ban
/*
�?i voi 10m3 nuoc sinh hoat dau ti�n se c� gi�: 5.937 VN�/m3
T? 10m3 d?n 20m3 nuoc sinh hoat se dc t�nh theo gi�: 7.052 VN�/m3
T? 20m3 d?n 30m3 nu?c sinh ho?t s? du?c t�nh theo gi�: 8.669 VN�/m3
Tr�n 30m3 nu?c sinh ho?t s? c� gi�: 15.925 VN�/m3
*/
//2. Nhap vao mang so nguyen. Tim max min cua mang so nguyen do va in ra vi tri.
// Tinh tong ma cac so nguyen do la so chan. 
//3. Nhap ho ten, nam sinh cua ban
//in ra ho ten, va tuoi cua ban
//0. Tho�t

#include <stdio.h>

int main(){
	int chon;
	do{
		printf("=======Menu=======\n");
		printf("1. Tinh tien nuoc\n");
		printf("2. Nhap mang so nguyen\n");
		printf("3. Nhap mon hoc\n");
		printf("0. Thoat\n");
		printf("Xin moi nhap chuong trinh ban mong muon: ");
		scanf("%d", &chon); 
		
		switch(chon){
			case 1:
				printf("Ban da chon chuong trinh Tinh tien nuoc.\n");
				Bai1();
				break;
			case 2: 
				printf("Ban da chon chuong trinh Nhap mang so nguyen.\n");
				Bai2();
				break;
			case 3:
				printf("Ban da chon Nhap mon hoc.\n");
				Bai3();
				break;
			case 0:
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("Ban da chon sai chuong trinh, moi chon lai.\n");
				break;
		}
	}while(chon != 0);
}

//1. Nhap so khoi nuoc nha ban
/*
�?i voi 10m3 nuoc sinh hoat dau ti�n se c� gi�: 5.937 VN�/m3
T? 10m3 d?n 20m3 nuoc sinh hoat se dc t�nh theo gi�: 7.052 VN�/m3
T? 20m3 d?n 30m3 nu?c sinh ho?t s? du?c t�nh theo gi�: 8.669 VN�/m3
Tr�n 30m3 nu?c sinh ho?t s? c� gi�: 15.925 VN�/m3
*/
void Bai1(){
	float khoiNuoc;
	do{
		printf("Moi nhap khoi nuoc nha ban: ");
		scanf("%f",&khoiNuoc);
		if(khoiNuoc < 0){
			printf("Khoi nuoc la so duong.\n");
		}
	}while(khoiNuoc < 0);
	float tienNuoc;
	if(khoiNuoc < 10){
		tienNuoc = khoiNuoc * 5937;
	}
	else if(khoiNuoc < 20){
		//0 -10 : Khoang 6k
		//10 - 20 t�nh 7k
		tienNuoc = 10 * 5937 + (khoiNuoc - 10)*7052;
	}
	else if(khoiNuoc < 30){
		tienNuoc = 10 * (5937 + 7052) + (khoiNuoc - 20) * 8669;
	}
	else{
		tienNuoc = 10*(5937 + 7052 + 8669) + (khoiNuoc - 30) * 15925;
	}
	printf("Tien nuoc nha ban thang nay la: %.4f\n",tienNuoc);
}

//2. Nhap vao mang so nguyen. Tim max min cua mang so nguyen do va in ra vi tri.
// Tinh tong ma cac so nguyen do la so chan. 

void Bai2(){
	/*
	M?ng ch? kh�c v?i bi?n ? ch?:
1. M?ng ch?a t?p gi� ttr? c�ng ki?u, bi?n ch? luu tr? 1 gi� tr?
2. M?t k� hi?u, m?ng c� ngo?c vu�ng [index], c� ch? s? c?a m?ng
3. Khai b�o:
bi?n: int number;
m?ng: int arrNumber[n]; ch?a t?i da n ph?n t?
4. V? t�m Max, coi gi� tr? t?i v? tr� d?u ti�n l� max, so s�nh t?i c�c ch? s? l?n lu?t t? d?u d?n cu?i m?ng, gi� tr? t?i d�u l?n hon th� ? d� l� max m?i: max = arrNumber[i]
Min tuong t?
	*/
	int n;
	printf("Moi ban nhap so luong so nguyen mong muon: ");
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap so thu %d vao mang: ",i);
		scanf("%d",&array[i]);
	}
	int max, min;
	max = array[0];
	min = array[0];
	//tim max min
	for(int i = 0; i< n;i++){
		if(array[i] > max){
			max = array[i];
		}
		if(array[i] < min){
			min = array[i];
		}
	}
	printf("Max la: %d\n", max);
	printf("Min la: %d\n", min);
	//tim vi tri
	printf("Vi tri max:\n");
	for(int i = 0; i < n; i++){
		if(array[i] == max){
			printf("%d\n",i);
		}
	}
	printf("Vi tri min:\n");
	for(int i = 0; i < n; i++){
		if(array[i] == min){
			printf("%d\n",i);
		}
	}
	//Tinh tong cac so chan trong mang
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(array[i] % 2==0){
			sum += array[i];
		}
	}
	printf("Tong cac so chan trong mang la: %d\n", sum);
}

//3. Nhap ho ten, nam sinh cua ban
//in ra ho ten, va tuoi cua ban
void Bai3(){
	
	char hoTen[50];
	int namSinh;
	printf("Nhap ten cua ban: ");
	fflush(stdin); 
	//getchar();
	gets(hoTen);
	printf("Nhap nam sinh cua ban: ");
	scanf("%d",&namSinh);
	printf("Thong tin cua ban la: \n");
	puts(hoTen);
	int tuoi = 2023 - namSinh;
	printf("Tuoi ban la: %d\n", tuoi);
	
	
}
