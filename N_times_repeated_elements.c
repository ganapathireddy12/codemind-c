#include<stdio.h>
int main()
{
    int n,i,j,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k,c;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                if(i!=j)
                {
                    a[j]=0;
                }
            }
        }
        if(c==k && a[i]!=0) 
        {
            printf("%d ",a[i]);
             f=1;
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}