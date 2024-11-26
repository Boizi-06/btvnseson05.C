#include<stdio.h>
int main(){
	int so1,so2,so3;
	printf("duoi day la bang cuu chuong cua cac so tu 1 den 9\n");
	for(so1=1;so1<=9;so1++){
		printf("bang %d\n",so1);
		for(so2=1;so2<=10;so2++){
			so3=so1*so2;
			printf("%d * %d = %d\n",so1,so2,so3);
		}
		
	}
	return 0;
}
