#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	printf("Tong %d + %d = %d\n", a, b, a+b);
	printf("Hieu %d - %d = %d\n", a, b, a-b);
	printf("Tich %d * %d = %d\n", a, b, a*b);
	printf("Thuong %d : %d = %f\n", a, b, (a/b)*1.0);
}
