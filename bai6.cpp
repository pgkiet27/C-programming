#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,s;
	scanf("%f%f%f", &a, &b, &c);
	float p;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf ("%f", s);
}
