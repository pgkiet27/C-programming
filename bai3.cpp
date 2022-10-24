//bai 3
#include <stdio.h>
int main(){
	int cn;
	float cc;
	scanf("%f%d", &cc, &cn);
	float bmi;
	bmi = cn/(cc*cc);
	printf("%.2f", bmi);
}
