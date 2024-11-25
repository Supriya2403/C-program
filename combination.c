#include<stdio.h>
int main()
{
    int n;
    printf("\n enter n:");
    scanf("\n %d",&n);
    int r;
   printf("\n enter r:");
    scanf("\n %d",&r); 
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    for(int i=2;i<=n;i++){
    nfact=nfact*i;

    }
    for(int i=2;i<=r;i++){
    rfact=rfact*i;

    }
    for(int i=2;i<=n-r;i++){
    nrfact=nrfact*i;

    }


    int ncr=nfact/(rfact*nrfact);
    printf("\n %d",ncr);
}