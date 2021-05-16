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

{ int n,i,j,s,ts;

printf("Nhap n="); scanf("%d",&n);

if (sohoanhao(n)==1) printf(" N chinh la so hoan hao");
else printf("N khong phai la so hoan hao");


return 0;

}
