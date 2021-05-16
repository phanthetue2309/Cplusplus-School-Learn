#include<stdio.h>

int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    int n,k;
    printf("Nhap n= ");
    scanf("%d",&n);
    printf("Nhap k= " );
    scanf("%d",&k);
    printf("C k n = %d \n",C(k,n));
  //  n=C(k,n);
    for (int i = 0; i < n; i++)
	{
         for (int j = 1; j<=(n*2)-2*i; j++)
            printf(" ");
    	 for( int j = 0; j <= i; j++ )
            printf( "%4d", C( j, i ) );
        printf( "\n" );
    }
    return 0;
}
