#include<stdio.h>
int main(){
int n,rem,n1,n2,sum;

printf("Enter value of n\n");
scanf("%d",&n);

n1=n;

rem=n1%10;

n2=n;
while(n2>=10)
{
    n=n/10;
}
n2=n;
sum=rem+n2;
printf ("The sum of first and last digit of given number is %d \n",sum);
return 0;
}