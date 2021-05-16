/*
BinarySearch

*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VMAX 100
#define MAX 100

int A[MAX], n;
void Generate(), PrintA(), QuickSort(int, int);
int BinarySearch(int x, int low, int high);

main ()
{
int i, x;

Generate(); PrintA();
QuickSort(0,n-1); PrintA();
printf("So can tim x= "); scanf("%d", &x);
i=BinarySearch(x, 0, n-1);
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

void QuickSort(int left, int right)
{
int i, j, x, temp;

i=left; j=right; x = A[(left+right)/2];
do{
while (A[i]<x) i++;
while (A[j]>x) j--;
if (i <= j){
temp=A[i]; A[i]=A[j]; A[j]=temp;
i++; j--;

}
} while (i<=j);
if (j>left) QuickSort(left, j);
if (i<right) QuickSort(i, right);
}

int BinarySearch(int x, int low, int high)
{
int mid;

if (low > high) return -1;
else {
mid = (low + high)/2;
if (x == A[mid])
return mid;
else if (x < A[mid]) return BinarySearch(x, low, mid-1);
else return BinarySearch(x, mid+1, high);
	}
}

void PrintA()
{
int i;
for (i=0; i<n; i++) printf("%3d",A[i]); printf("\n");
}
