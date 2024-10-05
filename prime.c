#include<stdio.h>
int main()
{
   int n1,n2,i,j;
   printf("enter the range:");
scanf("%d",&n1,&n2);
for(int i=n1;i<=2;i++)
{
    for(int j=n2;j<=i;j++)
    {
        if(i%j==0)
        break;
    }if(i==j)
    printf("%d \n",j);
}
    }


  









