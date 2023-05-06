#include <stdio.h>
int main()
{
    int n,i,m,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m=0;
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            printf("%d ",a[i]);
            c++;
        }
        
        
    }
    int v;
    v=n-c;
    int k;
    for(k=1;k<=v;k++)
    {
        printf("1 ");
    }
}