#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	int hcn, hv;
	float htron;
	hcn = a*b;
	hv = b*b;
	htron = (b/2)*(b/2)*3.14;
	int mauden1;
	float mauden2;
	mauden1 = hcn - hv;
	mauden2 = hv-htron;
	printf("%d %f", mauden1, mauden2);
}
