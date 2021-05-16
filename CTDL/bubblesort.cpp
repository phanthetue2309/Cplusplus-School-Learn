/*
Bubble Sort
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define VMAX 100
#define MAX 100

int A[MAX], n;
void Generate(), PrintA(), BubbleSort();

main ()
{
int i;

Generate();
BubbleSort();
}

void Generate()
{
int i, j, k, N, t[VMAX];

srand(time(NULL));
n=3+rand()%(MAX-80); n=7;
N=VMAX; N=20;
for (i=0; i<N; i++) t[i]=i;
for (i=0; i<n; i++){
k=rand()%N;

A[i]=t[k];
for (j=k; j<N; j++) t[j]=t[j+1];
N--;
}
PrintA(); printf("\n");
}

void BubbleSort()
{
int i, j, temp;

for (i=0; i<n-1; i++)
for (j=n-1; j>i; j--)
if (A[j]<A[j-1]){
temp=A[j]; A[j]=A[j-1]; A[j-1]=temp;
PrintA();
}
}

void PrintA()
{
int i;

for (i=0; i<n; i++) printf("%d ",A[i]); printf("\n");
//system("pause");

}
