#include <stdio.h>

int  main(){
    int i;
   int fibo[]={0,1,1,};
   int len;
   

   for (i=2;i<5;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
  

   }
  len= sizeof(fibo)/sizeof(fibo[0]);
  for (i=0;i<len;i++){
    printf("%d ",fibo[i]);
  }
   return 0;

}