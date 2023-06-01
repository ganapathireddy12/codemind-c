#include<stdio.h>
int main()
{
    int n,r,v,m=0;
    scanf("%d",&n);
    v=n;
    while(n!=0)
    {
        r=n%10;
        m=m*10+r;
        n=n/10;
    }
    if(v==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}