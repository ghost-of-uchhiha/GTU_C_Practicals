#include<stdio.h>
int isprime(int num);
int main(){
int n;
printf("Enter your number \n");
scanf("%d",&n);

if(isprime(n))
printf("Number %d is prime\n",n);

else
printf("Number %d is not prime\n",n);

return 0;
}
int isprime(int num)
{
for(int i=2;i<=num;i++)
if(num%i==0)
return 0;
else
return 1;
}