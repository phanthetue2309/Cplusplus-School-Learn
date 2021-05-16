#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100

typedef struct pt{
	int data;
	struct pt *next;
	
} phantu;

phantu *L1=NULL , *L2=NULL, *L=NULL;

int n,a,b,c,x;

void Inds(phantu *L);
void Nhapab();
void caua(), caub(), cauc(), cauf(), caug(), cauh();
int caud(),caue();


int main()
{
	Nhapab();
	c=b-a;
	srand(time(NULL));
	caua(); printf("\n Danh sach L1: \n"); Inds(L1);
	caub(); printf("\n \n Danh sach khac nhau L2: \n"); Inds(L2);
	cauc(); printf("\n Danh sach L: \n"); Inds(L);
	printf("\n Danh sach %s don dieu ...", caud() ?"":"khong");
	printf("\n Danh sach %s doi xung ...", caue() ?"":"khong");
	cauf(); printf("\n Danh sach sau khi chen ... \n"); Inds(L);
	caug();
	cauh(); Inds(L);
}

void Inds(phantu *L)
{
	phantu *p;
	int i=0;
	p=L;
	
	while (p!=NULL)
		{
			printf("\n%3d: %d",++i , p->data);
			p=p->next;
		}
	printf("\n");
}

void Nhapab()
{
	printf("a= "); scanf("%d", &a);
	printf("b > a : ") ; scanf("%d", &b);
	printf("n < b - a: ") ; scanf("%d", &n);
	printf("\n Danh sach gom cac so nhap trong  (%d;%d) \n",a,b);
}

void caua()
{
	int i;
	phantu *p;
	for (i=0; i < n; i++)
	 {
	 	p=(phantu *) malloc(sizeof(phantu));
	 	p->data=rand()%c+a;
	 	p->next=L1;
	 	L1=p;
	 }
}

void caub()
{
	int i,j,k,N,t[MAX];
	phantu *p;
	N=c; for (i=0; i < N ; i++) t[i]=i;
	 for (i=0; i < n; i++)
	 	{
	 		k=rand()%N;
	 		for (j=k; j<N ; j++) t[j]=t[j+1];
	 		N--;
	 		p=(phantu *) malloc(sizeof(phantu));
	 		p->data=t[k]+a;
	 		p->next=L2;
	 		L2=p;
		 }
}

void cauc()
{
	int i; phantu *p;
	L=L1;
	p=L;
	while (p->next!=NULL) p=p->next;
	p->next=L2;
	n=2*n;
}

int caud() // kiem tra tinh don dieu cua day
{
	int i, sign;
	phantu *p;
	sign=L->next->data - L->data;
	p=L->next;
	for (i=1; i < n-1; i++)
		{
			if (sign*(p->next->data - p->data) <=0 ) return 0;
			p=p->next;
		}
	return 1;
}

int caue()
{
	phantu *p;
	int i=0,j,a[MAX];
	
	p=L;
	while (p!=NULL) 
		{
			a[i++]=p->data;
			p=p->next;
		}
	i=0; j=n-1;
	while (i<j && a[i]==a[j])
		{
			i++; j--;
		}
	return i >= j;
}

void cauf()
{
	 int x,i,j;
	 phantu *p , *q;
	 printf("Chen x+1 voi x= "); scanf("%d", &x);
	 // chen x+1 vao sau x neu ko co thi them x+1 vao cuoi danh sach
	 p=L;
	 while (p->next != NULL && p->data !=x) p=p->next;
	 q=(phantu *)malloc(sizeof(phantu));
	 q->data=x+1;
	 
	 if (p->next==NULL)
	 	{
	 		q->next=NULL;
	 		p->next=q;
		 }
	else {
		q->next=p->next;
		p->next=q;
	}
}

void caug()
{
	int i,x,c;
	phantu *p;
	printf("So can dem x= "); scanf("%d",&x);
	c=0;
	p=L;
	while (p!=NULL)
		{
			if (p->data==x) c++;
			p=p->next;
		}
	printf("Co %d so %d ... \n",c,x);
}

void cauh()
{
	int i;
	phantu *p;
	printf("Phan tu can loai x= "); scanf("%d", &x);
	p=L; while (p!=NULL && p->data==x) p=p->next;
	L=p;
	if (p==NULL) return ; // tat ca deu bang x ;
	while (p->next!=NULL) { if (p->next->data==x)
	 p->next=p->next->next;
	else p=p->next;
	}
}




