#include<stdio.h>
int main()

{
    int a,b,temp;
    printf("enter two number:\n");
    scanf("%d %d \n",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d \n ",a,b);
    



}