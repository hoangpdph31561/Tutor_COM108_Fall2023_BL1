//On tap:
//Làm menu switch case
//1. Nhap so khoi nuoc nha ban
/*
Ð?i voi 10m3 nuoc sinh hoat dau tiên se có giá: 5.937 VNÐ/m3
T? 10m3 d?n 20m3 nuoc sinh hoat se dc tính theo giá: 7.052 VNÐ/m3
T? 20m3 d?n 30m3 nu?c sinh ho?t s? du?c tính theo giá: 8.669 VNÐ/m3
Trên 30m3 nu?c sinh ho?t s? có giá: 15.925 VNÐ/m3
*/
//2. Nhap vao mang so nguyen. Tim max min cua mang so nguyen do va in ra vi tri.
// Tinh tong ma cac so nguyen do la so chan. 
//3. Nhap ho ten, nam sinh cua ban
//in ra ho ten, va tuoi cua ban
//0. Thoát

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
Ð?i voi 10m3 nuoc sinh hoat dau tiên se có giá: 5.937 VNÐ/m3
T? 10m3 d?n 20m3 nuoc sinh hoat se dc tính theo giá: 7.052 VNÐ/m3
T? 20m3 d?n 30m3 nu?c sinh ho?t s? du?c tính theo giá: 8.669 VNÐ/m3
Trên 30m3 nu?c sinh ho?t s? có giá: 15.925 VNÐ/m3
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
		//10 - 20 tính 7k
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
	M?ng ch? khác v?i bi?n ? ch?:
1. M?ng ch?a t?p giá ttr? cùng ki?u, bi?n ch? luu tr? 1 giá tr?
2. M?t ký hi?u, m?ng có ngo?c vuông [index], có ch? s? c?a m?ng
3. Khai báo:
bi?n: int number;
m?ng: int arrNumber[n]; ch?a t?i da n ph?n t?
4. V? tìm Max, coi giá tr? t?i v? trí d?u tiên là max, so sánh t?i các ch? s? l?n lu?t t? d?u d?n cu?i m?ng, giá tr? t?i dâu l?n hon thì ? dó là max m?i: max = arrNumber[i]
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
