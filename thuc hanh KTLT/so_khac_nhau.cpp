#include <stdio.h>
#define MAX 10

int S[MAX], a[MAX],b[MAX] ,c=0, n;

void Try(int), print();

int check(int x[], int n),valid=0;

main()
{
printf("n=",n);scanf("%d",&n);
for (int j=1; j<=n; j++) 
	{
		printf("b[%d]=",j);
		scanf("%d",&b[j]);
	}
for (int j=1; j<=n; j++) a[j]=1;
Try(0);
printf("\n So hoan vi hop le = %d",valid);
}

void Try(int i)
{
int j;
for (j=1; j<=n; j++) if (a[j]){
	S[i]=b[j];
	a[j]=0;
	if (i==n-1) print(); else Try(i+1);
	a[j]=1;
							}
}

int validperm(int X[], int n)
{
	if (X[0]==0) return 0;
	return 1;
}

void print()
{
int i;
if (validperm(S,n)) { 
	printf("\n%3d:",++c);
	for (i=0; i<n; i++) printf(" %d", S[i]);
	valid++;
					}	
}
