#include<stdio.h>
int main(){
	int so1,so2,so3;
    printf("moi ban nhap vao mot so nguyen duong tu 1 den 10\n");
    scanf("%d",&so1);
    printf("bang cua chuong cua so ban da nhap la\n");
    for(so2=1;so2<=10;so2++){
    	so3=so1*so2;
    	printf("%d x %d = %d \n",so1,so2,so3);
	}
	return 0;
}
