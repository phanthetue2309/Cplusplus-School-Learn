#include<stdio.h>

int main ()
{
	unsigned char ch;
	int i,j;
		do 
		{
			printf("Chon AND(a) OR(o) NOT(n)\n");
			scanf("%c",&ch);
			if (ch!='a' && ch!='o' && ch!='n') printf("Nhap lai\n ");
		 } 
		while (ch!='a' && ch!='o' && ch!='n');
	switch (ch)
	{
		case 'a':
			printf("AND \t");
			for (i=0; i <= 1 ; i++)
				{	
					for (j=1; j>=0; j--)
					{
						if (i==1)
						{
							printf("%d \t %d \t %d \n \t ",i,j,i&&j);
							break;
						}
						printf("%d \t %d \t %d \n \t",i,j,i&&j);
					}
				}
			break;
	
		case 'o':
			printf("OR \t");
			for (i=0; i <= 1 ;i++)
				for (j=1; j>=0; j--)
					{
						if (i==1)
						{
							printf("%d \t %d \t %d \n \t ",i,j,i || j);
							break;
						
						}
						printf("%d \t %d \t %d \n \t",i,j,i || j);
					}
			break;
		case 'n':
			printf("NOT \t");
			for (i=0; i <=1; i++)
				{
					printf("%d \t %d \n \t",i,!i);
					
				}
			break;
			
	}
	return 0;
}

