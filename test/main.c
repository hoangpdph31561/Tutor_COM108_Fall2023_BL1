/*
1. Nhập thông tin người yêu cũ
2. Tính tổng 
3. Thông tin sinh viên các lớp
4.Thoát
*/
// Menu in ra như sau
//(sự lựa chọn được lặp lại đến khi chọn 10): (2.5 điểm)
#include<stdio.h>
void nhapThongTin(){
    // tên, tuổi, địa chỉ, sở thích của người yêu cũ 
    // Khai bao
    // chu thi ngan 17
    char ten[50];
    int tuoi;
    char diaChi[100];
    char soThich[100];
    // Nhap vao tu ban phim
    fflush(stdin);
    printf("Moi nhap ten:");
    gets(ten);
    printf("Moi nhap tuoi:");
    scanf("%d",&tuoi);
    fflush(stdin);
    printf("Moi nhap dia chi:");
    gets(diaChi);
    printf("Moi nhap so thich:");
    gets(soThich);
    //In ra ket qua
    printf("Ho ten la: %s\n", ten);
    printf("Tuoi: %d\n",tuoi);
    printf("Dia chi: %s\n", diaChi);
    printf("So thich: %s\n", soThich);
}
/*
 Nhập 1 số nguyên n từ bàn phím (1,5 điểm)
Tính tích các số từ 1 đến n chia hết cho 3 và 5.
*/
void tinhTich(){
    //Khai bao
    int n;
    int tich = 1;
    //Nhap
    printf("Moi nhap so nguyen n= ");
    scanf("%d",&n);
    // Tinh toan/thuc thi yeu cau
    for (int i = 1; i < n; i++)
    {// 6:3 = 2 du 0. 9:3=3 du 0
        if (i % 3 == 0 && i % 5 == 0)
        {
           tich *= i;
           //1
        }  
        // 2    
    }
    //In ra ket qua
    printf("Tich la: %d",tich);
    
}
/*
 Thông tin Sinh Viên các lớp -------+
	Mời nhập tổng lớp: 
	Nhập mảng số lượng SV các lớp : ….

*/
void nhapXuatMang(){
    int n;
    printf("Moi nhap tong so lop: ");
    scanf("%d",&n);
    int arrSLSinhVien[n];
    // Nhap mang
    for (int i = 0; i < n; i++)
    {
        printf("Moi nhap phan tu thu %d:",i);
        scanf("%d",&arrSLSinhVien[i]);
    }    
    // Xuat mang
    for (int i = 0; i < n; i++)
    {
        printf("%d",arrSLSinhVien[i]);
    }
    // Liệt kê vị trí các lớp có số lượng SV nhỏ hơn 30 :……  (1 điểm)
    printf("Vi tri cac lop co so luong sv <30:");
    for (int i = 0; i < n; i++)
    {
        if(arrSLSinhVien[i] < 30){
            printf("%4d",i);
        }
    }
    //Vị trí các lớp có số lượng sinh viên lớn nhất là : ….. (1 điểm)
    printf("Vi tri cac lop co so luong sv lon nhat");
    int max = arrSLSinhVien[0];
    for (int i = 0; i <n; i++)
    {
        if (arrSLSinhVien[i] > max)
        {
            max = arrSLSinhVien[i];
        }      
    }
    for (int i = 0; i < n; i++)
    {
        if (arrSLSinhVien[i] == max)
        {
            printf("%d",i);
        }      
    }      
}
int main(){
    //code
    printf("1. Nhap thong tin NYC\n");
    printf("2. Tinh tong\n");
    printf("3. Thong tin sv cac lop\n");
    int choice;
    do
    {
        printf("\nMoi chon:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            nhapThongTin();
            break;
        case 2:
           tinhTich();
            break;
        case 3:
            nhapXuatMang();
            break;
        case 10:
            /* code */
            break;
        
        default:
        printf("Khong co trong menu. Moi nhap lai!");
            break;
        }
    } while (choice != 10);
    
}