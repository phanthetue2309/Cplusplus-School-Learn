#include<stdio.h>
#include<math.h>
int min(int x,int y)
{
	if (x<y) return x;
	if (x==y) return x;
	if (x>y) return y;
}

int main()
{
	int n,i;
	long long int a[10000],s;
	int h=0;
	printf("Nhap so luong cac so can nhap "); scanf("%d",&n);
	printf("\nNhap cac so muon tinh \n");
	s=1;
	for (i=0; i < n; i++)
	{		printf("Nhap so a[%d]= ",i);
			scanf("%lld",&a[i]);
			int x=0;
			int y=0;
			if (a[i]==0) 
				{
					printf("co 1 so 0");
					return 0;
				}
			long long int temp=a[i];
				while (a[i]%2==0) 
				{
					x++;
					a[i]=a[i]/2;		
				}

				while (a[i]%5==0)
				{
					 y++;
					a[i]=a[i]/5;
				}
				
				if (min(x,y)==0) a[i]=temp;
				s*=a[i];
				while (s%10==0)
				{
					s=s/10;
					h++;
				}
			h=h+min(x,y);
	}
	printf("h=%d\n",h); 	 
}
