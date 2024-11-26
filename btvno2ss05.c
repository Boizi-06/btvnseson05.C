#include <stdio.h>

int main(){
	int num1=32;
    int num2;
    printf("moi ban nhap vao so dung de ket thuc chuong trinh\n");
    do{
    	printf("hay nhap so ban muon doan\n");
    	scanf("%d",&num2);
    	if(num1!=num2){
    		printf("ban da nhap sai roi\n");
		}
	}while(num1!=num2);
	printf("ban da doan dung roi so do la %d\n",num2);
	return 0;
}

