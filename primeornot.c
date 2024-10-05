#include<stdio.h>
int main()

{
    int n,i,flag=0;
    printf("\n enter any number :");
    scanf("\n %d",&n);
    
    
        if(n==0 ||n==1)
        {
            flag = 1;
        
        for(int i=2;i<=n/2;i++){
           
        
        if(n%i==0){
            flag = 1;
            break;
            
        }
        }

        if(flag==0){

    printf(" \n  %d the number you have entered is prime no:");

}
else{
    printf("\n %d the nmuber you have entered is not prime no:");
}
    }
}

