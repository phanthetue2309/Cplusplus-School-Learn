#include<stdio.h>
#define MAX 100000

void Dec2Bin(int n, int P[], int &k);

main()
{
	int n,k=0, i, P[MAX];
	
	printf("n= "); scanf("%u",&n);
	Dec2Bin(n,P,k);
	for (i=0; i < k; i++) printf("%d",P[i]);
}

void Dec2Bin(int n, int P[], int &k)
{
	int i,j,tam;
	 k=0;
	 while (n>0)
	 {
	 	P[k++]=n%2;
	 	n/=2;
	 }
	 for (i=0 , j=k-1; i<j; i++,j--)
	 {
	 	tam = P[i];
	 	P[i] = P[j];
	 	P[j] = tam;
	 }
}

/* 13 /_ 2
	1 	 6 /_ 2
		 0	  3 /_ 2
		 	  1		1 /_ 2
		 	  		1    0
		 	  	
Day bit  1 1 0 1 */
			   	
