#include<stdio.h>
#include<Windows.h>
int main()
{
	int i,j;
	HANDLE h;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
	printf("Nhap ban cuu chuong \n");
	for (i=1; i <= 10 ; i++)
		{
			for (j=2 ; j <= 10 ; j++)
				{
					SetConsoleTextAttribute(h, j);
					int s = j * i;
					printf(" %d  x %d =%d \t",j,i,s);
					if (j==10) printf("\n");
					
				}
		}
}
