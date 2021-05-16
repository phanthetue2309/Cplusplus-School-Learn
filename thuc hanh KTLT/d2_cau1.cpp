#include <stdio.h>

#include<conio.h>


int sohoanhao(int n)
{
	int s,i,j;
	for (i=2; i<=n; i++)

	{
	 s=1;

     for(j=2;j<=i/2;j++)

         if(i%j==0)s+=j;
	}
     if(s==n) return 1; else return 0;
}
int main()

{ int n,i,j;
int a[1000];

printf("Nhap n="); scanf("%d",&n);
	for (i=0; i < n; i++)
		{	printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
	for (i=0; i< n; i++)
		{
			printf("\na[%d] = %d ",i,a[i]) ; 
		}
	for (i=0 ; i < n; i++)
		{
	
			if (sohoanhao(a[i])==1)
				printf("\n so a[%d] = %d hoan hao",i,a[i]);
			else printf("\n so a[%d] = %d khong hoan hao",i,a[i]);
		} 


return 0;

}
