#include<stdio.h>
int s(int x)
{
	int r,sum=0;
 while(x!=0)
   {
       r=x%10;
       sum=sum+r;
       x=x/10;
    }
    return sum;
}
int main()
{
    int n,m;
    scanf("%d",&n);
   m=s(n);
   while(m>9)
   {
   m=s(m);
}
printf("%d",m);
}