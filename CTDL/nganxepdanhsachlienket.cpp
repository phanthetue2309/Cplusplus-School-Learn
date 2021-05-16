#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int S[MAX], a[MAX], c=0, n;

void Try(int), print();

int validperm(int X[], int n),valid=0;

main()
{

srand(time(NULL));
n=rand()%(MAX-3)+3; n=4;
printf("n=%d\n",n);

for (int j=1; j<=n; j++) a[j]=1;
Try(0);
printf("\n So hoan vi hop le = %d",valid);
}

void Try(int i)
{
int j;
for (j=1; j<=n; j++) if (a[j]){
S[i]=j;
a[j]=0;
if (i==n-1) print(); else Try(i+1);
a[j]=1;
							}
}

int validperm(int X[], int n)
{
int nP,nS,nA,i,j,iP,xA,P[MAX],S[MAX],A[MAX];

for (i=0; i<n;i++) P[i]=X[i];
nP=n;
nS=0;
nA=0; xA=0;

iP=0;
while (nA<n){
i=iP; while (i<nP && P[i]!=xA+1) i++;
if (i<nP){
for (j=iP;j<i;j++) S[nS++]=P[j]; iP=j;
xA=A[nA]=P[iP]; nA++; iP++;
}
else
if (S[nS-1]==xA+1){
xA=A[nA]=S[nS-1]; nA++; nS--;
}
else return 0;
}
return 1;
}

void print()
{
int i;

printf("\n%3d:",++c);
for (i=0; i<n; i++) printf(" %d", S[i]);

if (validperm(S,n)) {
printf(" ***");

valid++;
}
}
