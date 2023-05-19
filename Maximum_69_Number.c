#include<stdio.h>
int main()
{
    int n,v,r,rev=0,f=0,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        v=n%10;
        f=f*10+v;
        n=n/10;
    }
    while(f)
    {
        r=f%10;
        if(f%10==6 && c==0)
        {
            rev=(rev*10)+9;
            c++;
        }
        else
        {
            rev=(rev*10)+r;
        }
        f=f/10;
    }
    printf("%d",rev);
}