//viet chuong trinh tinh luong ky 2 cua can bo nhan vien theo cong thuc
#include <stdio.h>;                
int main(){
	int bl,n, lk1;
	printf("Nhap bac luong: ");
	scanf("%d",&bl);
	printf("Nhap so ngay cong trong thang: ");
	scanf("%d",&n);
	printf("Nhap luong ky 1:");
	scanf("%d",&lk1);
	int lk2;
	lk2 = (bl *n)/26 - lk1;
	printf("%d", lk2);
}
