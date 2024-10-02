#include<stdio.h>
int main(){
    int n,r,s=0,c;
    printf("\n enter the number:");
    scanf("\n %d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if(c==s){
        printf("\n  the number is palindrome:");
    }
    else{
        printf("\n the number is not palindrome :");
    }
    }
    
