#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
void randperm(int P[],int n);

main()
{
int n,nP,fQ,rQ,nA,i,j,iP,xA,P[MAX],Q[MAX],A[MAX];

srand(time(NULL));
n=rand()%(MAX-3)+3;
printf("n=%d\n",n);
randperm(P,n);
for (i=0; i<n;i++) printf("%d ",P[i]);
nP=n;
fQ=0; rQ=-1; // ngan xep khong co dong nay
nA=0; xA=0;
iP=0;
while (nA<n){

i=iP; while (i<nP && P[i]!=xA+1) i++;

if (i<nP){//toa tiep theo o ray ban dau

for (j=iP;j<i;j++) Q[++rQ]=P[j]; iP=j; // don toa qua ray phu
xA=A[nA]=P[iP]; nA++; iP++;
}
else
if (Q[fQ]==xA+1){ //lay toa o ray phu
xA=A[nA]=Q[fQ]; nA++; fQ++;
}
else{
printf("Khong don toa duoc...");
break;
}
}
}

void randperm(int P[],int n)
{
int i, j, k, N, t[MAX];
N=n;
for (i=0; i<N; i++) t[i]=i;
for (i=0; i<n; i++){
k=rand()%N;
P[i]=t[k]+1;
for (j=k; j<N; j++) t[j]=t[j+1];
N--;
}
}
