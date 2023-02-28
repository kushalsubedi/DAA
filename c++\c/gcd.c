#include<stdio.h>

int gcd(int a ,int b ){
  int r;
  while(a!=b){
  if (b==0) return a;
  else {
    r= a%b;
   a=b;
   b=r;
  }
   

  }
return r;

}
int main(){
  int a=7,b=5;
 printf("%d", gcd(a,b));
}