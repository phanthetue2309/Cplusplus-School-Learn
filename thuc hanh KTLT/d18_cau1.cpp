#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n="); scanf("%d",&n);
	int temp;
	int sum=0;
    for(temp=n; n!=0 ; n=n/10){
         int r=n%10;
         sum=sum*10+r;
    }
    printf("so dao nguoc la %d",sum);
    return 0;
}


