#include<stdio.h>
#include<math.h>
#include<string.h>

int checkso(char *s)
{
		for (int i=0 ; i < strlen(s); i++)
		{
			if (s[i]=='.')
			{
			return 0;
			}
		}
		return 1;
		
}

int chuyendoi(char *s)
{
		int m=0,j=0;
		for (int i=strlen(s)-1; i >=0; i--)
		{
		m+=(int)(s[i]-'0')*pow(10,j);
		j++;
		}
}

int songuyento(int n)
{
		int i;
	if (n<=1) return 0;
	if (n==2) return 1;
	else for (i=2; i <= sqrt(n) ; i++) 
		 if (n%i==0) return 0;
	return 1;
}

int main()
{
	char s[10],s1[10];
	int i,n;
	int b[10];
	int tong=0;
	printf("Nhap n=");
	scanf("%d",&n);
	int j=0;
	for (int i=0; i < n; i++ )
	{
	scanf("%s",&s);
	if (checkso(s)==1) 
		{
			int m=chuyendoi(s);
			if (songuyento(m)==1) 
				{
					b[j]=m;
					j++;
				}
		}
	}

	if (j==0) printf("khong co so nguyen to trong mang");
	else printf("So nguyen to cuoi cung trong mang:%d",b[j-1]);

}
