#include<stdio.h>
int main()
{ 
   int a,b;
   printf("\n Enter the a and b:");
   scanf("\n %d  %d",&a,&b);
   a=b-a;
   b=a-b;
   a=a-b;
   printf("\n swapping of given number: ",a,b);

}
