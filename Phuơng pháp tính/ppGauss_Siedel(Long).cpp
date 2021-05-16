#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define max 100
#define eps 1e-6

void Nhap(double a[][max], int n) {
	for(int h=0; h<n; h++) {
		for(int c=0; c<n+1; c++) {
			scanf("%lf", *(a+h)+c);
		}
	}
}

void Xuat(double a[][max], int n) {
	for(int h=0; h<n; h++) {
		for(int c=0; c<n+1; c++) {
			printf("%.6lf  ", *(*(a+h)+c));
		}
		printf("\n");
	}
	printf("\n");
}

int DieuKien(double a[][max], int n) {
	double m=0, s;
	for(int h=0; h<n; h++) {
		if(a[h][h]==0) return 0;
		s=0;
		for(int c=0; c<n; c++) {
			if(h==c) continue;
			else s+=fabs(a[h][c]/a[h][h]);
		}
		if(s>m) m=s;
	}
	return m<1;
}

void Gauss_Siedel(double a[][max], int n) {
	double x[max], y[max], t;
	for(int i=0; i<n; i++) y[i]=0;
	do {
		for(int h=0; h<n; h++) {
			x[h]=a[h][n]/a[h][h];
			for(int c=0; c<n; c++) {
				if(h==c) continue;
				else x[h]+=(-a[h][c]*y[c])/a[h][h];
			}
		}
		t=y[0];
		for(int i=0; i<n; i++) y[i]=x[i];
		for(int i=0; i<n; i++) printf("%.6lf   ", x[i]);
		printf("\n");
	} while(fabs(t-x[0])>eps);

	printf("\nNghiem cua hept:\n");
	for(int i=0; i<n; i++) printf("x[%i]=%.6lf\n", i, x[i]);
}

int main() {
	double a[max][max];
	int n;

	printf("Nhap so an cua hept:");
	scanf("%i", &n);
	printf("Nhap hept:\n");
	Nhap(a, n);
	printf("Xuat hept:\n");
	Xuat(a, n);
	if(DieuKien(a, n)) Gauss_Siedel(a, n);
	else printf("Khong thoa man dieu kien hoi tu\n");
}
