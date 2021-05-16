/*#include<stdio.h>

void print(int n)
{
	if (n==0) return  ;
	else  print(n-1);
	
	printf("%d\t",n);
}
int main()
{
	int n;
	print(5);
} */

#include<stdio.h>

void print(unsigned n)
{
	if (n>0 && n<=10) printf("\t %d",n);
//	return print(n-1); // ri cx dc
	print(n-1); // in tu 10 ve 1 
	
}

int main()
{
	print(10);
	return 0;
}
