#include<stdio.h>
int main()
{
    int n,r,c,arm=0;
    printf("\n enter the number:");
    scanf("\n %d ",&n);
    c=n;
    while (n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm){
        printf("\n armstrong number");
    }
    else{
        printf("\n not armstrong number");
    }
}