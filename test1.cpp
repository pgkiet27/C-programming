#include <stdio.h>
#include <math.h>
int main(){
	long long n;
	scanf("%lld", &n);
	long long so_mu=1;
	for (long long i=1; i<=9; i++)
		so_mu *= 10;
	long double c=0;
	if (n == 1 && n == 2)
		printf("1") ;
	else {
		c = ((pow((1+sqrt(5))/2, n)) - (pow((1+sqrt(5))/2, n)))/ sqrt(5);
		if (c < 1000000000)
			printf("%lld", c);
		else
			printf("%lld", c%(so_mu + 7));
	}
}
