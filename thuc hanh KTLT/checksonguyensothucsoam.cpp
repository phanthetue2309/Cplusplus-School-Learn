#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[100];
	int m=0;
	int j=0;
	printf("Nhap gia tri=");
	scanf("%s",&s);
	for (int i=0; i < strlen(s); i++)
		{
			if (s[i]=='.' || s[i]=='-') 
			{
				printf("Gia tri nhap vao khong thoa ");
				return 0;
			}
		}
	for (int i=strlen(s)-1; i >= 0 ; i--)
		{
			m+=(int)(s[i]-'0')*pow(10.0,j);
			j++;
		}
	printf("%d",m);
}
