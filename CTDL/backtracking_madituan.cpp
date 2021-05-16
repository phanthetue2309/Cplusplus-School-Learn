#include<stdio.h>
#include<conio.h>
#define maxn 10

void Thunuoctieptheo(int i, int x, int y, int *q);
void Inbanco( int n);
void Xoabancon(int n);

int Banco[maxn][maxn];
int dx[8]={-2,1,-1,-2,-2,-1,1,2};
int dy[8]={-1,-2,-2,-1,1,2,2,1};
int n=8;

void Thunuoctieptheo(int i, int x, int y, int *q)
{
	int k,u,v,*q1;
	k=0;
	do {
		*q1=0;
		u=x+dx[k];
		v=y+dy[k];
		if ((0<=u) && (u<n) && (0<=v) && (Banco[u][v]==0))
			{
				Banco[u][v]=i;
				if (i < n*n)
					{
						Thunuoctieptheo(i+1, u, v , q1);
						if ((*q1)==0) Banco[u][v]=0;
						
					} else (*q1=1);
			}
			k++;
	}	while (((*q1)==0) && (k<8));
	*q=*q1;
}

void Inbanco(int n){
	int i,j;
	for (i=0; i <= n-1; i++)
	 {	for (j=0; j<= n-1 ; j++)
	 	if (Banco[i][j] < 10 ) printf("%d   ", Banco[i][j]);
	 	else printf("%d  ",Banco[i][j]);
	 	printf("\n\n");
	}
}

void Xoabanco(int n)
{
	int i,j;
	for (i=0; i <= n-1; i++)
	 for (j=0; j <= n-1; j++)
	  Banco[i][j]=0;
}

int main()
{
	int *q=0;
	printf("Cho kich thuoc ban co: ");
	scanf("%d", &n);
	Xoabanco(n);
	Banco[0][0]=1;
	Thunuoctieptheo(2,0,0,q);
	printf("\n Ket qua: \n\n");
	Inbanco(n);
	return 0;
}

