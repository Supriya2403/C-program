#include<stdio.h>
int factorial(int x){
int fact=1;
for(int i=2;i<=x;i++){
    fact=fact*i;
}
    return fact;
}



int main()
{
    int n;
    printf("\n enter n:");
    scanf("\n %d",&n);
    int r;
   printf("\n enter r:");
    scanf("\n %d",&r); 
   

    int npr=factorial(n)/factorial(n-r);
    printf("\n %d",npr);
}

