#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,s;
    
    printf("0 1 ");
    for(int i=1;i<=n-2;i++)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
    
}