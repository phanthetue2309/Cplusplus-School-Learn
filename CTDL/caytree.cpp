#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAX 1000

struct node{
		int key;
		struct node *l;
		struct node *r;
};
typedef struct node *NODE;

NODE R,p,parent; int a,b,n,x,found;

void Inputab()
{
	printf ("a= "); scanf("%d",&a);
	printf("b>%d : ",a); scanf("%d",&b);
	printf("n<%d : ",b-a); scanf("%d",&n);
	
}

//cap phat bo nho
NODE getnode()
{
	NODE r;
	r=(NODE) malloc(sizeof(struct node));
	return(r);
}

// tao node
NODE makenode(int x)
{
	NODE r;
	r=getnode();
	r->key=x;
	r->l=NULL;
	r->r=NULL;
	return (r);
}
// them node
void insert(int x, NODE *r)
{
	NODE p;
	p=makenode(x);
	if (*r==NULL) *r=p;
	else if (x<(*r)->key)
		if ((*r)->l==NULL) (*r)->l=p;
		else insert(x,&((*r)->l));
	else if((*r)->r==NULL) (*r)->r=p;
			else insert(x,&((*r)->r));
}
//tao cay o day la cho 1 loat cac gia tri ngau nhien khong can phai nhap vao 
void maketree()
{
	int x,i,j,k,N,t[MAX];
	R=NULL;
	srand(time(NULL));
	N=b-a;
	for (i=0; i<N ; i++) t[i]=i;
	for (i=0; i<n; i++)
		{
			k=rand()%N;
			x=t[k]+a;
			for (j=k; j<N; j++) t[j]=t[j+1];
			N--;
			printf("\n%d ",x);
			insert(x,&R);	
		}
	getchar();
}
// xet node left r

void NLR(NODE proot)
{
	if (proot!=NULL)
		{
			printf("%d ",proot->key);
			NLR(proot->l);	NLR(proot->r);	
		}
}

//xet left node r
void LNR(NODE proot)
{
	if (proot!=NULL)
		{
			LNR(proot->l);
			printf("%d ",proot->key);
			LNR(proot->r);
		}
}


void LRN(NODE proot)
{
	if (proot!=NULL)
		{
			LRN(proot->l);
			LRN(proot->r);
			printf("%d ",proot->key);
		}
}

void RNL(NODE proot)
{
	if (proot!=NULL)
		{
			RNL(proot->r);
			printf("%d ",proot->key);
			RNL(proot->l);
		}
}

int Node(NODE proot)
{
	if (proot!=NULL) return 1+Node(proot->r)+Node(proot->l);
}

int Leaf(NODE proot)
{
	if (proot!=NULL)
		if (proot->l==NULL && proot->r==NULL) return 1;
			else return Leaf(proot->r) + Leaf(proot->l);
}
// in la 
void printleaf(NODE proot)
{
	if (proot!=NULL)
		if (proot->l==NULL && proot->r==NULL) printf("%d ",proot->key);
			else {
				printleaf(proot->l);
				printleaf(proot->r);
			}  
}

//in nhanh
void printbranch(NODE proot)
{
	if (proot!=NULL)
		{
		if (proot->l!=NULL || proot->r!=NULL) printf("%d ",proot->key);
		printbranch(proot->l);
		printbranch(proot->r);
}
}

int height(NODE proot)
{
	int a,b;
	
	if (proot==NULL) return 0;
	a=height(proot->l);
	b=height(proot->r);
	if (a>b) return a+1;
	else return b+1;
	
}

void search(int x, NODE root, NODE *p, NODE *parent, int *found)
{
	*p=root;
	*parent=NULL;
	*found=0;
	while( !*found && *p!=NULL)
		{
			if (x==(*p)->key) *found=1;
			else {
				*parent=*p;
				if (x<(*p)->key) *p=(*p)->l;
				else *p=(*p)->r;
			}
		}
}

void Delete(int x, NODE *root)
{
	NODE p,parent, pSucc, SubTree;
	int found;
	search(x,*root,&p,&parent,&found);
	if (!found)
		{
			printf("\n khong co phan tu %d ...",x);	return;
		}
	if (p->l!=NULL && p->r!=NULL)
		{
			// tim phan tu ben trai nhat cua cay ben phai
			pSucc=p->r;
			parent=p;
			while (pSucc->l!=NULL)
				{
					//xuong ben trai
					parent=pSucc;
					pSucc=pSucc->l;	
				}
			// chuyen khoa key cua pSucc vao p, dua p den pSucc va xoa p
			p->key=pSucc->key;
			p=pSucc;
		}
		// xoa nut p co nhieu nhat 1 cay con
		SubTree=p->l;
		if (SubTree==NULL) SubTree=p->r;
		if (parent==NULL)
			*root=SubTree;
		else if (parent->l==p) parent->l=SubTree;
			else parent->r=SubTree;
}
//chieu cao cua cay
int main()
{
	Inputab();
	maketree();
	printf("\n NLR (tientu): "); NLR(R);
	printf("\n\n LNR(tang dan): "); LNR(R);
//	printf("\n\n LRN(tang dan): "); LRN(R);
	printf("\n\n RNL(giam dan): "); RNL(R);
	printf("\n so nut = %d ",Node(R));
	printf("\n so nut la = %d ",Leaf(R));
	printf("\n Cac nut la: "); printleaf(R);
	printf("\n Cac nut nhanh: "); printbranch(R);
	printf("\n Chieu cao = %d ",height(R));

	printf("\n So can tim x= "); scanf("%d",&x);
	search(x,R,&p,&parent,&found);
	if (found)
		if (parent==NULL) printf("\n Nut goc co gia tri %d ",x);
		else printf("\n parent->key=%d \n p->key=%d ",parent->key,p->key);	
	else printf("\nkhong co so %d ... ",x);
	printf("\nSo can xoa hoac chen x= "); scanf("%d",&x);
	search(x,R,&p,&parent,&found);
	if (found) Delete(x,&R);
		else insert(x,&R);
	printf("\nNLR(tien tu): "); NLR(R);
	return 0;	
}
