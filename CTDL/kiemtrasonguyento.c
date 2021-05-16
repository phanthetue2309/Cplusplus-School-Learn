#include<stdio.h>
#include<math.h>
int check(int n) {	 
	int i;
	if (n == 2) return 1;
	else for (i = 2; i <= (sqrt(n)); i++)
		{
			if (n%i == 0) return 0;				
			
		}

	return 1;
}
main()
{
	int n,x;
	printf("Nhap n ");
	scanf("%d",&n);
	x=check(n);
	if (x==0)
	{printf("\nKhong phai so nguyen to ");
		while (n--)
	{
		x=check(n);
		if (x==1) break;
	
	}
	printf("\nso nguyen to gan n la ");
	printf("%d",n);
	 } 
	else printf("N la so nguyen to"); 

}
