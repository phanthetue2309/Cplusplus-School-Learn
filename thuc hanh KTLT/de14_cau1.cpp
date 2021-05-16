#include<stdio.h>

int main()
{
	long long int n;
	long long int s=0;
	do
	{
		scanf("%lld",&n);
		s+=n;
		printf("Gia tri s la %lld\n",s);
	}
	while (n!=0);
	return 0;
}
	
