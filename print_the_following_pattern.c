#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        for( j=1;j<=n-2;j++)
        {
            printf("%d",j);
        }
        k=n-3;
        for( j=k;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("
");
    }
}