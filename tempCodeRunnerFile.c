
    int n,icj;
    printf(" enter n:");
    scanf("%d",&n);
   for(int i=0;i<=n;i++){
    int first=1;
   for(int j=0;j<=i;j++){
   printf("%d",first);
   first=first*(i-j)/(j+1);
   }
   printf("\n");

   }
   
}