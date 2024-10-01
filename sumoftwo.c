#include<stdio.h>
int main(){
    int i,n,r,sum=0;
    printf("\n enter the number:");
    scanf(" \n %d",&n);
    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    printf("sum of the digits:%d",sum);

}