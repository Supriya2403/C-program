#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;
    int recAns= n*factorial(n-1) ;
return recAns;
}
 int main(){
    int n ;
    printf("\n enter the numbers:");
    scanf("\n %d",&n);
int fact =factorial(n);
printf("\n %d ",fact);
return 0;

 } 