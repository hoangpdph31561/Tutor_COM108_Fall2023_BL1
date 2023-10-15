#include <stdio.h>
#include <stdbool.h>
//tao menu switch case, co lap lai
//1 nhap diem so cua 3 mon hoc Java, C#, php -> tinh tb -> dua ra hoc luc
//2 Nhap chi so khoi luong cua may tinh vao mang -> tinh tong -> tim ra
// khoi luong lon nhat, nho nhat
//3 Nhap vao mang cac so tu nhien. Sap xep chung tu lon nhat den be nhat.
// va tim ra so ma nguoi dung nhap vao. In ra vi tri xuat hien dau tien
//4 Nhap vao ten mon hoc, ten giang vien, so tin chi, diem mong muon -> in ra
//Cac bai tap phai viet vao trong ham, va goi o trong switch case
int main(){
	int chon;
	do{
		printf("=======Menu=======\n");
		printf("1. Tinh diem trung binh. Xep hoc luc.\n");
		printf("2. Nhap khoi luong may tinh.\n");
		printf("3. Nhap so tu nhien.\n");
		printf("4. Nhap ten mon hoc.\n");
		printf("21. Thoat.\n");
		printf("Xin moi nhap chuong trinh ban mong muon: ");
		scanf("%d", &chon); //\n
		//getchar();
		//fflush(stdin);
		switch(chon){
			case 1:
				printf("Ban da chon chuong trinh tinh diem trung binh.\n");
				Bai1();
				break;
			case 2: 
				printf("Ban da chon chuong trinh khoi luong may tinh.\n");
				Bai2();
				break;
			case 3:
				printf("Ban da chon nhap so tu nhien.\n");
				Bai3();
				break;
			case 4:
				printf("Ban da chon nhap ten mon hoc.\n");
				Bai4();
				break;
			case 21:
				printf("Thoat chuong trinh.\n");
				break;
			default:
				printf("Ban da chon sai chuong trinh, moi chon lai.\n");
				break;
		}
	}while(chon != 21);
}

//1 nhap diem so cua 3 mon hoc Java, C#, php -> tinh tb -> dua ra hoc luc
//< 3 => Yeu | <5 => TB | <8: Kha | <9 : Gioi | <=10: Xuat Sac
void Bai1(){
	float diemJava, diemCSharp, diemPHP;
	//chi dc nhap tu >=0 <=10
	do{
		printf("Xin moi nhap diem Java: ");
		scanf("%f",&diemJava);
		printf("Xin moi nhap diem C#: ");
		scanf("%f",&diemCSharp);
		printf("Xin moi nhap diem PHP: ");
		scanf("%f",&diemPHP);
		if(diemJava <0 || diemJava > 10 || diemCSharp < 0 || diemCSharp > 10 || diemPHP < 0 || diemPHP > 10){
			printf("Ban da nhap sai khoang diem. Moi nhap lai.\n");
		}
	}while(diemJava <0 || diemJava > 10 || diemCSharp < 0 || diemCSharp > 10 || diemPHP < 0 || diemPHP > 10);
	float diemTrungBinh = (diemJava + diemCSharp + diemPHP)/3;
	printf("Diem trung binh cua ban la: %.3f\n",diemTrungBinh);
	if(diemTrungBinh < 3){
		printf("Hoc kem qua.\n");
	}
	else if(diemTrungBinh < 5){
		printf("Hoc qua trung binh.\n");
	}
	else if(diemTrungBinh <8){
		printf("Hoc cung tam tam.\n");
	}
	else if(diemTrungBinh <9){
		printf("Hoc cung dc dc.\n");
	}
	else{
		printf("Ong vang poly.\n");
	}
}

//2 Nhap chi so khoi luong cua cac may tinh vao mang -> tinh tong -> tim ra
// khoi luong lon nhat, nho nhat

void Bai2(){
	int soLuongMayTinh;
	printf("Xin moi nhap so luong may tinh de tinh toan: ");
	scanf("%d",&soLuongMayTinh);
	float khoiLuong[soLuongMayTinh];
	//Nhap khoi luong cua tung may tinh vao mang
	for(int i = 0; i < soLuongMayTinh;i++){
		printf("Khoi luong cua may tinh thu %d la: ",i);
		scanf("%f",&khoiLuong[i]);
	}
	float sum = 0;
	for(int i = 0; i < soLuongMayTinh;i++){
		sum += khoiLuong[i];
	}
	printf("Tong khoi luong cua may tinh la: %.3f\n",sum);
	sum = 0;
	//Tinh tong khoi luong cua cac may tinh ma vi tri cua no chia het cho 2;
	for(int i = 0; i < soLuongMayTinh; i++){
		if(i%2 == 0){
			sum += khoiLuong[i];
		}
	}
	printf("Tong khoi luong cua may tinh ma vi tri chia het cho 2 la: %.3f\n",sum);
	float min, max;
	//Cach 1
	min = khoiLuong[0];
	max = khoiLuong[0];
	for(int i = 0; i < soLuongMayTinh; i++){
		if(khoiLuong[i] < min){
			min = khoiLuong[i];
		}
		if(khoiLuong[i] > max){
			max = khoiLuong[i];
		}
	}
	printf("Khoi luong min la: %f\n",min);
	printf("Khoi luong max la: %f\n",max);
	//Cach 2
	//Sap xep giam dan
	/*
	for(int i = 0; i< soLuongMayTinh;i++){
		for(int j = i+1; j < soLuongMayTinh; j++){
			if(khoiLuong[j] > khoiLuong[i]){
				float swap = khoiLuong[i];
				khoiLuong[i] = khoiLuong[j];
				khoiLuong[j] = swap;
			}
		}
	}
	
	float minC2 = khoiLuong[soLuongMayTinh - 1];
	float maxC2 = khoiLuong[0];
	
	printf("Cach 2 min: %f\n",minC2);
	printf("Cach 2 max: %f\n", maxC2);
	*/
	//tim vi tri cua min max
	for(int i = 0 ;i <soLuongMayTinh;i++){
		if(khoiLuong[i] == min){
			printf("Vi tri min trong mang la: %d\n",i);
		}
	}
	for(int i = 0 ;i <soLuongMayTinh;i++){
		if(khoiLuong[i] == max){
			printf("Vi tri max trong mang la: %d\n",i);
		}
	}
}

//3 Nhap vao mang cac so tu nhien. Sap xep chung tu lon nhat den be nhat.
// va tim ra so ma nguoi dung nhap vao. In ra vi tri xuat hien dau tien

void Bai3(){
	int n;
	printf("So luong phan tu mong muon: ");
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n; i++){
		printf("Xin moi nhap so thu %d cua mang: ",i);
		scanf("%d",&array[i]);
	}
	int soCanTim;
	bool isFound = false;
	printf("Nhap so ma ban can tim: ");
	scanf("%d",&soCanTim);
	for(int i = 0 ; i < n; i++){
		if(array[i] == soCanTim){
			printf("Vi tri dau tien ma no xuat hien la: %d.\n",i);
			isFound = true;
			break;
		}
	}
	if(!isFound){
		printf("Khong tim thay gia tri cua ban.\n");
	}
}

//4 Nhap vao ten mon hoc, ten giang vien, so tin chi, diem mong muon -> in ra
void Bai4(){
	//chuoi trong C la 1 mang 1 chieu cua cac ky tu ket thu la ky tu null '\0'
	//char 
	//do dai chuoi: kich thuoc mang - 1;
	//char tenChuoi[so luong ky tu];
	char monHoc[50]; //=> chi dc nhap max 49 ky tu. 
	printf("Moi nhap ten mon hoc: ");
	//nhap chuoi
	//scanf
	//getchar();
	//fflush(stdin);
	//gets
	gets(monHoc); //\n
	//scanf("%s",monHoc);
	
	//In ra chuoi
	printf("Ten mon hoc la: ");
	printf("%s",monHoc);
	puts(monHoc);
}
