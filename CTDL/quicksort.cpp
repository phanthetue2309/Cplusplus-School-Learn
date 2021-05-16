/*
QuickSort
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VMAX 100
#define MAX 100

int A[MAX], n;
void Generate(), PrintA(), QuickSort(int, int);

main ()
{
int i;

Generate();
QuickSort(0,n-1);
}

void Generate()
{
int i, j, k, N, t[VMAX];

srand(time(NULL));
 n=8;
 N=10;
for (i=0; i<N; i++) t[i]=i;
for (i=0; i<n; i++){
k=rand()%N;
A[i]=t[k];
for (j=k; j<N; j++) t[j]=t[j+1];
N--;
}
printf("Day goc: ");
PrintA();
}

void QuickSort(int left, int right)
{
int i, j, x, temp;

i=left; j=right; x = A[(left+right)/2];
printf("x = %3d: ",x);
do{
while (A[i] < x) i++;
while (A[j] > x) j--;
if (i<=j){ temp=A[i]; A[i]=A[j]; A[j]=temp; i++; j--; }
  } 
while (i<=j);
PrintA();
if (j > left) QuickSort(left, j);
if (i < right) QuickSort(i, right);
}

void PrintA()
{
int i;
for (i=0; i<n; i++) printf("%3d",A[i]); printf("\n");
//system("pause");
}
