#include <stdio.h>

int main(){
	//pt bac 2. ax2 + bx +c = 0 (a !=0)
	/*
	float a, b ,c;
	float delta;
	float x1, x2;
	printf("Giai pt bac 2\n");
	printf("Xin moi nhap so a: ");
	scanf("%f",&a);
	printf("Xin moi nhap so b: ");
	scanf("%f",&b);
	printf("Xin moi nhap so c: ");
	scanf("%f",&c);
	if(a == 0){
		//bx + c = 0 => bx = -c => x = -c/b
		if(b == 0){
			if(c == 0){
				printf("Phuong trinh co vo so nghiem");
			}
			else{
				printf("Phuong trinh vo nghiem");
			}
		}
		else{
			x1 = -c/b;
			printf("Phuong trinh co nghiem duy nhat la: %.2f",x1);
		}
	}
	else{
		//ax2 + bx + c = 0;
		delta = b*b - 4*a*c;
		if(delta < 0){
			printf("Phuong trinh vo nghiem");
		}
		else if(delta == 0){
			x1 = -b/(2*a);
			printf("Phuong trinh co nghiem kep: %.2f",x1);
		}
		else{
			x1 = (-b - sqrt(delta))/(2*a);
			x2 = (-b + sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet\n");
			printf("x1 = %.2f",x1);
			printf("\nx2 = %.2f",x2);
		}
	}
	*/
	/* Huong dan switch case
	int chon;
	printf("---Menu---\n");
	printf("1. Nhap nam sinh de tinh tuoi.\n");
	printf("2. Nhap can nang va chieu cao de tinh chi so imp.\n");
	printf("3. Tinh dien tich hinh chu nhat\n");
	printf("4. Tinh dien tich hinh tron\n");
	printf("Xin moi nhap chuong trinh muon chon: ");
	scanf("%d",&chon);
	switch(chon){
		case 1:
			printf("Ban da chon chuong trinh tinh tuoi\n");
			break;
		case 2:
			printf("Ban da chon chuong trinh tinh toan imp\n");
			break;
		case 3:
			printf("Ban da chon tinh dien tich hinh chu nhat\n");
			break;
		case 4:
			printf("Ban da chon tinh dien tich hinh tron\n");
			break;
		default:
			printf("Khong co chuong trinh ban chon\n");
			break;
	}
	*/
	
	//for, while, do while
	// for (diem bdau; dk ketThuc; buocNhay)
	//Tinh tong tu 1 den 100
	/*
	int sum = 0;
	for(int i = 1; i<=100;i++){
		//diem bdau la i = 1
		// so sanh voi dk ket thuc: i = 1 <= 100 (dung)
		//chay vao than vong lap
		//i++ => i = 2
		//so sanh voi dk ket thuc: i = 2 <= 100 (dung)
		//chay vao than vong lap...
		//.....
		//i = 100
		//So sanh dk vs: i = 100 <= 100 (Dung)
		//chay vao than vong lap
		//i++ => 101
		//So sanh dk vs: i = 101 <= 100 (sai)
		// Thoat vong lap
		//sum = sum + i;
		sum += i;
	}
	printf("Tong tu 1 den 100 la: %d",sum);
	*/
	
	//Tinh tong cac so chan tu 1 - 100;
	/*
	int sum = 0;
	for(int i = 0;i <= 100;i++){
		//diem bdau la i = 1
		// so sanh voi dk ket thuc: i = 1 <= 100 (dung)
		//chay vao than vong lap
		//i = 1 %2 != 0 (dung) => sum+
		//i++ =2
		
		// so sanh voi dk ket thuc: i = 2 <= 100 (dung)
		//chay vao than vong lap
		// i = 2 % 2 != 0 (sai)
		//i++ = 3
		if(i%2 !=0){
			sum+=i;
		}
	}
	
	printf("Tong cac so le tu 1- 100 la: %d",sum);
	*/
	
	//dung cho for, do while, while
	//break, continue
	//break: thoat luon vong lap//
	//continue: nhay den buoc nhay tiep
	
	//Tinh tong tu 1 - 5
	/*
	int sum = 0;
	for(int i = 1; i < 6; i++){
		//i = 4
		if(i == 4){//dung
			continue;
		}
		sum+= i;
	}
	//diem toi cua break
	printf("Tong la %d",sum);
	*/
	
	//tinh tong tu 1 - 100
	/*
	int sum = 0;
	int i = 1;
	
	while(i <= 5){
		if(i==4){
			i++;
			continue;
		}
		sum +=i;
		i++;
	}
	printf("Tong la: %d",sum);
	*/
	
	//do - while
	/*
	do{
		printf("Aloi");
		printf("Aloi");
		printf("Aloi");
	}while(5 < 3);
	*/
	
	//Tao menu switch - case co 4 chuong trinh: tinh tuoi, tinh imp, dien tich hcn, dien tich hinh tron
	//yeu cau menu lap di lap lai
	
	
	int chon;
	const float PI = 3.14;
	do{
		printf("---Menu---\n");
		printf("1. Nhap nam sinh de tinh tuoi.\n");
		printf("2. Nhap can nang va chieu cao de tinh chi so imp.\n");
		printf("3. Tinh dien tich hinh chu nhat\n");
		printf("4. Tinh dien tich hinh tron\n");
		printf("21. Thoat chuong trinh\n");
		printf("Xin moi nhap chuong trinh muon chon: ");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Ban da chon chuong trinh tinh tuoi\n");
				int namSinh;
				printf("Moi ban nhap nam sinh cua ban: ");
				scanf("%d",&namSinh);
				printf("Tuoi cua ban la: %d\n",2023 - namSinh);
				break;
			case 2:
				printf("Ban da chon chuong trinh tinh toan bmi\n");
				float canNang;
				float chieuCao;
				printf("Moi ban nhap can nang cua ban: ");
				scanf("%f",&canNang);
				printf("Moi ban nhap chieu cao cua ban: ");
				scanf("%f",&chieuCao);
				float bmi = canNang / (chieuCao*chieuCao);
				printf("Chi so BMI cua ban la: %.1f\n",bmi);
				break;
			case 3:
				printf("Ban da chon tinh dien tich hinh chu nhat\n");
				float chieuDai, chieuRong;
				printf("Chieu dai hcn la: ");
				scanf("%f",&chieuDai);
				printf("Chieu rong hcn la: ");
				scanf("%f",&chieuRong);
				float dienTich = chieuDai*chieuRong;
				printf("Dien tich hinh chu nhat la: %.4f\n",dienTich);
				break;
			case 4:
				printf("Ban da chon tinh dien tich hinh tron\n");
				float banKinh;
				printf("Xin moi nhap ban kinh: ");
				scanf("%f",&banKinh);
				float dienTichHinhTron = pow(banKinh,2) * PI;
				printf("Dien tich hinh tron la: %.3f",dienTichHinhTron);
				break;
			case 21:
				printf("Ban da chon thoat");
				break;
			default:
				printf("Khong co chuong trinh ban chon\n");
				break;
		}
	}while(chon != 21);
	
}
