#include<stdio.h>
int swap(int a,int b){
     int temp=a;
    a=b;
    b=temp;
    return;
}
int main()
{
    int a,temp;
    printf("\n enter a:");
    scanf("\n %d",&a);
    int b;
    printf("\n  enter b:");
    scanf("\n %d",&b);
    swap(a,b);
    printf("\n the value of a:%d ",a);
    printf("\n the value of b:%d ",b);
return 0;
}