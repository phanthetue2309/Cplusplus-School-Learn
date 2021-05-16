#include<stdio.h>

int doixung(int n)
{
	int temp;
	int sum=0;
    for(temp=n; n!=0 ; n=n/10){
         int r=n%10;
         sum=sum*10+r;
    }
    if (temp==sum) return sum;
    return 0;
}

int main()
{
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	if (n < 11) printf("Khong co so doi xung trong day");
	else for (int i=10; i <=n ; i++)
		{
			if (doixung(i)!=0) printf("so %d doi dung \n",doixung(i));
		}
}
