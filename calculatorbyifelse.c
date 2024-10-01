#include<stdio.h>
int main()

{
    float a,b,ch;
    printf("\n enter the user choice  number:");
    scanf("\n %f",&ch);
printf("\n enter the two numbers:");
scanf("\n %f",&a,&b);
}
if(ch==1){


    sum=a+b;
    printf("\n sum: %f ",sum);
}
else if (ch==2){
    sub=a-b;
    printf("\n sub: %f ",sub);

}
else if(ch==3){
    multiply=a*b;
   printf("\n multiply: %f",multiply);
}
else if(ch==4){
    divide=a/b;
    printf("\n divide: %f ",divide);

}
else if(ch==5){
    modulus=a%b;
    printf("\n modulus :%f",modulus);
}
else{
    printf("\n invalide  user choice");
}