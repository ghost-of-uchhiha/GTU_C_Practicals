#include<stdio.h>
int main(){
int n,n1,digit=0,rem;

printf("Enter a number\n");
scanf("%d",&n);

n1=n;
while(n1>0)
{

rem=n1%10;
n1=n/10;

digit=(digit*10) + rem;

}
printf("The reverse of %d is %d\n",n,digit);
return 0;
}