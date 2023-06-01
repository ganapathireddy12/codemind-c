#include<stdio.h>

int main()
{
    int n,k=0;
    scanf("%d",&n);
    int a=0,b=1,s;
    for(int i=1;i<=n+1;i++)
    {
        s=a+b;
        if(s==n)
        {
            k++;
            break;
        }
        a=b;
        b=s;
        
    }
    if(k==0)
    {
        printf("False");
        
    }
    else
    {
        printf("True");
    }
}