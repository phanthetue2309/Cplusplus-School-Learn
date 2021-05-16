#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

int a,b,c,x,L1[MAX],L2[MAX],L3[MAX];

void caua() // in mang random 
{
	int a;
	for (i=0; i<n; i++) L1[i]=rand()%c+a;	
}

void caub() // Tao day so random sao cho cac so random khac nhau
{
	int i,j,k,N,t[1000];
	N=c;
	for (i=0;i<N;i++) t[i]=i;
	for (i=0;i<n;i++)
	{
		=rand()%N;
		L2[i]=t[k]+a;
	}
	for (j=k;j<N;j++)
	t[j]=t[j+1];
	N--;
}

void cauc() // Noi 2 mang 1 chieu vs nhau
{
	int i;
	for (i=0;i<n;i++) L[i]=L1[i];
	for (i=0;i<n;i++)	L[n+i]=L2[i];
	n*=2;
}

int caud() //Kiem tra tinh don dieu 
{
	int i,sign;
	sign=L[1]-L[0];//k kiem tra sign=0
	for (i=1;i<n-1;i++)
		if (sign*(L[i+1]-L[i])<=0) return 0;
	return 1;
}

int caue()
{
	int i,j;
	i=0;j=n-1;
	while (i<j && L[i]==L[j])
		{i++;j--;}
	return i>=j;
}

void cauf()
{
	int i,j;
	printf("\n Chen x-1 va x+1 vao L, x= "); scnaf("%d", &x);
	i=0;
	while (i<n && L[i]!=x) i++;
	if (i<n)
	{ // vi du trong day co so 50 thi se in 49 50 51
	// vao vi tri 50 dang dung
		for (j=n; j>i; j--) L[j]=L[j-1];
		L[i]=x-1; i++; n++;
		for (j=n ; j>i+1; j-- ) L[j]=L[j-1];
		L[i+1]=x+1; n++
	}
	else 
	{ // Neu so muon them khong nam trong day random
		for (j=n; j>0; j--) L[j]=L[j-1]; L[0]=x-1; n++;
		L[n]=x+1; n++
	}
}
