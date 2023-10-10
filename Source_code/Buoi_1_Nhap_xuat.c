#include <stdio.h>

int main(){
	//Xuat
	/*
	Comment
	nhieu
	dong
	*/
	/*
	printf("Hello world");
	printf("\nI love u so much");
	*/
	//Khai bao bien
	//int, float
	// <kieu du lieu> + <ten bien>; 
	/*
	int a;
	int b;
	*/
	//gan gia tri
	//a = 5;
	//b = 6;
	//in ra gia tri do
	/*
	printf("So a la: %d", a);
	printf("\nSo b la: %d",b);
	printf("\nSo a la: %d, So b la: %d",a,b);
	//khai bao va in ra float
	float c = 2.3, d = 3.44;
	printf("\nSo c la: %0.1f. So d la: %0.1f",c,d);*/
	//nhap
	/*
	printf("Xin moi nhap so a: ");
	scanf("%d",&a);
	printf("So a vua nhap la: %d",a);
	*/
	/*
	float c;
	printf("Xin moi nhap so c: ");
	scanf("%f",&c);
	printf("So c vua nhap la: %.2f",c);
	*/
	//khai bao bien tuoi, bien nam sinh, bien can nang. Gan cac gia tri cua ban than vao
	//In ra man hinh
	/*
	int tuoi, namSinh;
	float canNang;
	printf("Xin moi nhap tuoi cua ban: ");
	scanf("%d",&tuoi);
	printf("Xin moi nhap nam sinh cua ban: ");
	scanf("%d",&namSinh);
	printf("Xin moi nhap can nang cua ban: ");
	scanf("%f",&canNang);
	printf("Chung toi dang tinh toan thong tin cua ban");
	printf("\nKet qua la: %d tuoi, sinh nam: %d, nang %.1f kg",tuoi,namSinh,canNang);
	*/
	//5 loai toan tu: So hoc, gan, so sanh, logic (&& || !), toan tu 3 ngoi (tu tim hieu)
	//So hoc: + - * / %
	/* Tinh tong so qua
	int quaCam, quaQuyt, quaTao;
	printf("Moi nhap so qua cam: ");
	scanf("%d",&quaCam);
	printf("Moi nhap so qua quyt: ");
	scanf("%d",&quaQuyt);
	printf("Moi nhap so qua tao: ");
	scanf("%d",&quaTao);
	*/
	//Cach 1:
	//int sum = quaCam + quaQuyt + quaTao;
	//printf("Tong so qua co la: %d",sum);
	//Cach 2:
	//printf("Tong so qua co la: %d",quaCam + quaQuyt + quaTao);
	//Thuc hien phep chia
	/*
	int a,b;
	printf("Moi nhap so a: ");
	scanf("%d",&a);
	printf("Moi nhap so b: ");
	scanf("%d",&b);
	printf("Ket qua phep chia: %d : %d = %f",a,b,(a*1.0)/b); //Ngam dinh
	*/
	/*
	int a,b;
	printf("Moi nhap so a: ");
	scanf("%d",&a);
	printf("Moi nhap so b: ");
	scanf("%d",&b);
	printf("Ket qua phep chia: %d : %d = %f va du %d",a,b,(a*1.0)/b,a % b);
	*/
	// 11 : 5
	// = 2 du 1
	// 11 % 5 = 1
	// ++ --
	//++ => + lên 1 
	//-- => - di 1
	/*
	int a = 5;
	printf("Gia tri cua a la: %d",a); //a = 5
	printf("\nGia tri cua a++ hien tai la: %d", a++);// a = 5
	//a = 6
	printf("\nGia cua a la: %d",a);// a = 6
	printf("\nGia tri cua a++ part 2 la: %d",++a); // a = 7
	//a++: bien a da tang len 1. KQ tra ve van a truoc khi +
	//++a: bien a da tang len 1. KQ tra ve la kq cua bien a sau khi + 1;
	*/
	//Gan: = , +=, -=, *=, /=
	/*
	int a = 5;
	int b = a;
	//b = 5; += => b = b +3 => 5 + 3
	b += 3; //=> b = b + 3;
	printf("Gia tri cua b la: %d",b);
	*/
	//So sanh: >, <, >=, <=, ==, !=, ===(tu tim hieu) 
	//if(dkien) {}
	//else{}
	//khai bao 3 bien diem kieu int: diemCSharp, diemJava, diemPHP
	//Tinh diem trung binh va in ra
	//Xep hang sinh vien
	/*
	0 - <3: SV yeu
	3 - < 5: svTB
	5 - <8: Kha
	8-<9:gioi
	9 - <=10: xuat sac
	*/
	/*
	int diemCSharp, diemJava, diemPHP;
	printf("Xin moi nhap diem C#: ");
	scanf("%d",&diemCSharp);
	printf("Xin moi nhap diem java: ");
	scanf("%d",&diemJava);
	printf("Xin moi nhap diem PHP: ");
	scanf("%d",&diemPHP);
	float diemTrungBinh = (diemCSharp*1.0 + diemJava + diemPHP)/3;
	printf("Diem trung binh mon la: %f",diemTrungBinh);
	//Toan tu logic: &&, ||, !
	//&&: if(DK1 && DK2) {}
	// ||: if(DK1 || DK2) {}
	// !: if(! 3 != 3) {}
	if(diemTrungBinh >= 0 && diemTrungBinh <3){
		printf("Sinh vien qua kem. Hoc lai: 650k");
	}
	// >= 3 <0
	else if(diemTrungBinh < 5){
		printf("Sinh vien Trung binh. Hoc lai. 400k");
	}
	else if(diemTrungBinh < 8){
		printf("Sinh vien kha. Du qua mon");
	}
	else if(diemTrungBinh < 9){
		printf("Nhan bang khen pdf. Sv gioi");
	}
	else{
		printf("Top 200 sv xuat sac. 500k vao tai khoan");
	}
	*/
	//kiem tra tinh chan le. %
	/*
	int a;
	printf("Moi nhap so a: ");
	scanf("%d",&a);
	if(a % 2 ==0){
		printf("So a la so chan");
	}
	else{
		printf("So a la so le");
	}
	*/
	
}
