#include<stdio.h>
int add(int a,int b){
return a+b;
}
int main()
{
    int a;
    printf("\n enter a:");
    scanf("\n %d",&a);
    int b;
    printf("\n enter b:");
    scanf("\n %d",&b);
  int  sum =add(a,b);
    printf("\n the sum of two numbers is:%d",sum);
}