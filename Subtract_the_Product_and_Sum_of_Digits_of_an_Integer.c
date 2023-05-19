#include<stdio.h>
int main()
{
    int n,i,sum=0,pro=1,d;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        sum=sum+i;
        pro=pro*i;
        n=n/10;
    }
    d=pro-sum;
    printf("%d",d);
}