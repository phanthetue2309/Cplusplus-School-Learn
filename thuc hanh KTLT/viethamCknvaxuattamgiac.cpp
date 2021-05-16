#include <stdio.h>
//max la 12
int giaithua(int n)
{
    int gt=1;
    for (int i=1; i<=n; i++)
        gt=gt*i;
    return gt;
}
 
int ckn(int k, int n)
{
    return (giaithua(n)/(giaithua(k)*giaithua(n-k)));
 
}
 
void xuattg( int h )
{
    int i, j;
    for( i = 0; i < h; i++ )
    {
        for (j=1; j<=((h*4)/2)-2*i; j++)
            printf(" ");
        for( j = 0; j <= i; j++ )
            printf( "%5d", ckn( j, i ) );
        printf( "\n" );
    }
}
 
int main()
{
    int n, k;
    printf("Nhap lan luot k, n : ");
    scanf("%d%d",&k,&n);
    printf("Ckn = %d\n",ckn(k, n));
    xuattg(ckn(k,n));
}
