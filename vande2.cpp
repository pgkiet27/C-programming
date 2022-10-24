//van de 2:
#include <stdio.h>
#include <conio.h>
int main(){
	float GrossPay = 0;
	float NettPay = 0;
	float Tax = 0;
	printf("\nNhap vao tong thu nhap: ");
	scanf("%f", &GrossPay);
	Tax  = GrossPay * 0.25;
	NettPay = GrossPay - Tax;
	printf("\nLuong thuc te $%.2f", NettPay);
	getch();
	return 0;
}
