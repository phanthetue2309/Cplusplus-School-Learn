#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    int m;
    printf("\nNhap m = ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        printf("Nhap phan tu b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\t", b[i]);
    }
    int j = 0;
    for (int i = 0; i < m + n; i++)
    {
        
        if (i >= n)
        {
            a[i] = b[j];
            j++;
        }
    }
    printf("\n\nSau khi gop hai mang A va B ta duoc :\nS");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d\t", a[i]);
    }
}