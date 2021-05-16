/*
Selection Sort
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VMAX 100
#define MAX 100

int A[MAX], n;
void Generate(), PrintA(), SelectionSort();

main ()
{
int i;

Generate();
SelectionSort();
}

void Generate()
{
int i, j, k, N, t[VMAX];

srand(time(NULL));
n=3+rand()%(MAX-80); n=8;
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

void SelectionSort()
{
int i, j, im, temp;

for (i=0; i<n-1; i++){
im=i;
for (j=i+1; j<n; j++)
if (A[j]<A[im]) im=j; printf("\nvi tri nho nhat: %d ", im+1);
temp=A[i]; A[i]=A[im]; A[im]=temp;
PrintA();
}

}

void PrintA()
{
int i;

for (i=0; i<n; i++) printf("%d ",A[i]); printf("\n");
//system("pause");
}
