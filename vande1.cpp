//Chuong trinh nhap vao 2 so a,b va in ra tong
#include <stdio.h>
#include <conio.h>
int main(){
	int a,b;
	printf("\nNhap vap so a: ");
	scanf("%d", &a);
	printf("\nNhap vao so b: ");
	scanf("%d", &b);
	printf("\nTong cua 2 so %d va %d la %d.\n",a,b,a+b);
	getch();
	return 0;
}
