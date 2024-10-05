#include<stdio.h>
int main()
{
   int n,a=0,b=1,c=2,d,i;
   printf("\n enter the number:");
   scanf("\n %d",&n); 
   printf("\n %d",a,b,c);

for(int i=3;i<=n;i++){

   d=a+b+c;
   printf("\n %d",d);
   a=b;
   b=c;
   c=d;
}
}