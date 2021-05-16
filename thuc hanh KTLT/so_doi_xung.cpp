#include<stdio.h>
#include<math.h>
#include<string.h>

int checkso(char *s)
{
		for (int i=0 ; i < strlen(s); i++)
		{
			if (s[i]=='.')
			{
			printf("khong phai so nguyen\n");
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
int main()
{
	char s[10],s1[10];
	int i,n;
	int tong=0;
	printf("Nhap n=");
	scanf("%s",&s);
	if (checkso(s)==1) 
		{
			int m=chuyendoi(s);
			if (m<=0) 
			{
				printf("So nhap vao khong phai so nguyen duong");
				return 0;
			}
			for (int i=0 ; i < strlen(s)/2 ; i++)
			if (s[i]!=s[strlen(s)-i-1]) 
				{
					printf("Khong phai so doi xung");
					return 0;
				}
			printf("So doi xung");
		}
	
}
