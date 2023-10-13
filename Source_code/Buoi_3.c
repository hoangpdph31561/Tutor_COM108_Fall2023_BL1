#include <stdio.h>



int main(){
	//hàm: không tra ve, co tra ve.
	// <kieu tra ve> + TenHam (){
	// => Ham khong tham so
	//Khoi lenh
//}
	//<kieu tra ve> + TenHam (<kieudl> tenThamSo,....){
	// => Ham co tham
	//Khoi lenh
//}
	int chon;
	do{
		printf("----Menu----\n");
		printf("1. Tinh tong cac so nguyen tu 1 - 50.\n");
		printf("2. Tinh tong cac so nguyen tu 1-500 nhung chi lay cac so chia het cho 3 va 5.\n");
		printf("3. Tinh tong cac so nguyen tu 1-100 ma chi chia het cho 2, va khong lay so 20.\n");
		printf("4. PT bac 1.\n");
		printf("21. Thoat.\n");
		printf("Chon chuong trinh cua ban: ");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Chuong trinh tinh tong 1 - 50.\n");
				Bai1();
				break;
			case 2:
				printf("Tinh tong 1-500 chi chia het cho 3 va 5.\n");
				Bai2();
				break;
			case 3:
				printf("Tinh tong cac so nguyen 1-100 chi chia het cho 2 va bo qua 20 va 40 va 60.\n");
				Bai3();
				break;
			case 4:
				printf("Tinh pt bac 1.\n");
				float a, b;
				printf("Xin moi nhap so a: ");
				scanf("%f",&a);
				printf("Xin moi nhap so b: ");
				scanf("%f",&b);
				Bai4(a,b);
				break;
			case 21:
				printf("Chon thoat.\n");
				break;
			default:
				printf("Chon sai chuong trinh. Moi chon lai.\n");
				break;
		}
	}while(chon != 21);
}

void Bai1(){
	//ham khong tra ve, khong tham so
	int sum = 0;
	for(int i = 0; i<=50;i++){
		sum += i;
	}
	printf("Tong tu 1 den 50 la: %d\n",sum);
}

void Bai2(){
	//ham khong tra ve (void), khong tham so() ko co tham so truyen vao
	int sum = 0;
	for(int i = 1; i <=500;i++){
		if(i % 3 == 0 && i % 5 ==0){
			sum += i;
		}
	}
	printf("Tong tu 1-500 chi chia het cho 3 va 5 la: %d\n", sum);
}

void Bai3(){
	int sum = 0;
	for(int i = 1; i <=100;i++){
		//lay tong chia het 2. bo qua 20, bo qua 40, bo qua 60
		//continue
		if(i %2 ==0) {
			//&&: Tca deu dung => true
			// dk1 && dk2
			//neu dk 1 = true, dk2 = false => false
			// dk1 = true, dk2 = true => true
			
			//|| chi can 1 trong chung dung => true
			// dk1 || dk2 || dk n
			// dk 1 false, dk2 false ... dkn true => true
			
			if(i == 20 || i ==40 || i == 60){
				continue;
			}
			sum += i;
		}
		
	}
	printf("Tong la: %d\n", sum);
}

//pt bac 1: ax +b = 0;

void Bai4(float a, float b){
	//ham khong tra ve, nhung co chua tham so
	if(a == 0){
		if(b == 0){
			printf("PT co vo so nghiem.\n");
		}
		else{
			printf("PT vo nghiem.\n");
		}
	}
	else{
		printf("PT co nghiem x = %f\n",(-b/a));
	}
}


