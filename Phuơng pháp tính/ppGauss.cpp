#include<stdio.h>
#include<math.h>

#define max 100

void Nhap(float a[][max], int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n+1; j++) {
			scanf("%f", &a[i][j]);
		}
	}
}

void Xuat(float a[][max], int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n+1; j++) {
			printf("%12.6f ", a[i][j]);
		}
		printf("\n");
	}
}

void TamGiac(float a[][max], int n, int m, int h) {
	if(a[m][m]==0) {
		for(int j=m; j<n+1; j++) {
			a[m][j]+=a[h][j];
			a[h][j]=a[m][j]-a[h][j];
			a[m][j]-=a[h][j];
		}
	}
	else {
		float r=a[m][m], s=a[h][m];
		for(int j=m; j<n+1; j++) {
			a[h][j]+=-s*a[m][j]/r;
		}
	}
	if(h<n-1) TamGiac(a, n, m, h+1);
	else if(m<n-2) TamGiac(a, n, m+1, m+2);
} 

void Nghiem(float a[][max], int n) {
	float x[max], s=0;
	for(int i=n-1; i>=0; i--) {
		x[i]=(a[i][n]-s)/a[i][i];
		s=0;
		for(int j=n-1; j>i-1; j--) s+=(a[i-1][j]*x[j]);
	}
	for(int i=0; i<n; i++) printf("x[%i]=%.10f\n", i, x[i]);
}

int main() {
	float a[max][max];
	int n;

	printf("Nhap so an:");
	scanf("%i", &n);
	printf("Nhap he so:\n");
	Nhap(a, n);
	printf("He phuong trinh:\n");
	Xuat(a, n);
	printf("Cong dai so:\n");
	TamGiac(a, n, 0, 1);
	Xuat(a, n);

	float s=1;
	for(int i=0; i<n; i++) s*=a[i][i];
		
	if(s) Nghiem(a, n);
	else {
		int dem=1;
		for(int j=0; j<n; j++) {
			if(a[n-1][j]!=a[n-1][j+1]) {
				dem=0;
				break;
			}
		}
		if(dem) printf("Vo so nghiem\n");
		else printf("Vo nghiem\n");
	}
}
