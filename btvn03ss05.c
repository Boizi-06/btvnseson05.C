#include <stdio.h>

int main() {
    int so1, so2 = 0;

    printf("nhap so ngguyen ");
    scanf("%d",&so1);
    int so3;
    for (so3 = 1; so3 <= so1; so3++) {
        so2 += so3;
    }

    printf("tong tat ca cac chu so la%d\n",so2);
    return 0;
}

