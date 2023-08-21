#include<stdio.h>
int gcd(int x, int y){
   if(x==0){
      return y;
   }
   if(y==0){
      return x;
   }
   
   if(x==y){
      return x;
   }
   if(x>y){
      return gcd(x-y,y);
   }
   if(y>x){
      return gcd(y-x,x);
   }
   
}
int main(){
 int x,y;
 printf("enter two numbers\n");
 scanf("%d %d",&x,&y);
 printf("the GCD of %d %d is & %d\n",x,y,gcd(x,y));
   return 0;
}