#include<stdio.h>
int main(){
	int menu,so1,so2;
	do{
		printf("sau day la menu\n");
		printf("1:tinh tong hai so \n");
		printf("2:tinh hieu hai so\n");
		printf("3:tinh tich hai so\n");
		printf("4:tinh thuong hai so \n");
		printf("5:thoat\n");
		printf("hay chon 1 phep tinh\n");
		scanf("%d",&menu);
		switch(menu){
			case 1:
				printf("moi ban nhap so thu nhat\n");
				scanf("%d",&so1);
				printf("moi ban nhap so thu hai\n");
				scanf("%d",&so2);
				printf("tong hai so la %d + %d = %d\n",so1,so2,so1+so2);
				break;
		
			case 2:
				printf("moi ban nhap so thu nhat\n");
				scanf("%d",&so1);
				printf("moi ban nhap so thu hai\n");
				scanf("%d",&so2);
				printf("hieu hai so ban vua nhap la %d - %d = %d\n",so1,so2,so1-so2);
				break;
			case 3:
				printf("moi ban nhap so thu nhat\n");
				scanf("%d",&so1);
				printf("moi ban nhap so thu hai\n");
				scanf("%d",&so2);
				printf("tich hai so ban vua nhap la %d * %d = %d\n",so1,so2,so1*so2);
				break;
			case 4:
				printf("moi ban nhap so thu nhat\n");
				scanf("%d",&so1);
				printf("moi ban nhap so thu hai\n");
				scanf("%d",&so2);
				printf("thuong hai so ban vua nhap la %d \ %d = %d\n",so1,so2,so1/so2);
				break;
			case 5:
			    printf("thoat chuong trinh\n");
			    break;	
			default:
				printf("lua chon cua ban khong hop le\n");
				
					
				
				
				
			
		}
		
	}while(menu!=5);
	return 0;
}
