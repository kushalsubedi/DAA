#include<stdio.h>

int gcd(int a ,int b ){
  
  while(a!=b){
    if (a>b){
        a=a-b;
    }

    if (b>a){
        b=b-a;
    }

  }
return a;

}
int main(){
  int a=7,b=5;
 printf("%d", gcd(a,b));
}