/*
Tim kiem tuan tu
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VMAX 100
#define MAX 100

int A[MAX], n;
void Generate(), PrintA();
int Search(int x);

main ()
{
int i, x;

Generate(); PrintA();
printf("So can tim x= "); scanf("%d", &x);
i=Search(x);
if (i<0) printf("Khong co so %d ...",x); else printf("A[%d]=%d",i,x);
}

void Generate()
{
int i, j, k, N, t[VMAX];

srand(time(NULL));
n=3+rand()%(MAX-80);
N=VMAX;
for (i=0; i<N; i++) t[i]=i;
for (i=0; i<n; i++){
k=rand()%N;

A[i]=t[k];
for (j=k; j<N; j++) t[j]=t[j+1];
N--;
}
}

int Search(int x)
{
int i;

i=0;
while (i<n && A[i]!=x) i++;
if (i<n) return i;
else return -1;
}

void PrintA()
{
int i;

for (i=0; i<n; i++) printf("%3d",A[i]); printf("\n");
//system("pause");
}
