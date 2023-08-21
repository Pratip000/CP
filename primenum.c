#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
   int a,i;
   int flag =1;
   float s;
   printf("enter a number\n");
   scanf("%d",&a);
   for(i=2;i<a;i++){
        if(a%i==0){
         flag =0;
         break;
        }

   }
   if(flag==0){
      printf("not a prime\n");
   }
   else{
      printf("is a prime\n");
   }
   if(flag==1){
      s=sqrt(a);
      printf("the square root of the numberis %.2f\n",s);
   }
   return 0;
}