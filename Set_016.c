#include<stdio.h>
int main(){

int n;

printf("Enter Value of n \n");
scanf("%d",&n);

if(n%2==0)
{
printf("The last digit of the %d is even \n",n);
}

else if(n%2!=0)
{
printf("The last digit of the  number %d is odd \n",n);
}

return 0;
}