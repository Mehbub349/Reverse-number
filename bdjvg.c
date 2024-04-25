#include<stdio.h>
void main(){
      //123----321=> 3*10+2 =>32*10+1=321
int n,rem,rev;
printf("Enter the number: ");
scanf("%d",&n);
while(n>0){
     rem= n%10;
     rev=rev*10+rem;  /*rev is not initialised with 0 , it is suppose to give garbage vale but  it give correct result*/
     n=n/10;

}
printf("Reverse: %d",rev);
}


