#include<stdio.h>
int factorial(int n);
int main(){

double n;
printf("Enter your number \n");
scanf("%lf",&n);

printf("The factorial of given number is %d",factorial(n));

return 0;
}
int factorial(int n)
{
if(n==0 && n==1)
return 1;

else if(n>1)

return n*factorial(n-1);



}