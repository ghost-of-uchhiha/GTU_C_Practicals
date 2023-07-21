#include<stdio.h>
int main(){

int isprime=1,n,i;
printf("Enter a number\n");
scanf("%d",&n);

for(i=2;i<n;i++)
{
if(n%i==0)
{
    isprime=0;
    
}
if(isprime==0)
{
    printf("Entered number %d is not prime\n",n);
    break;
}


 else if(isprime==1)
{
    printf("Entered number %d is prime\n",n);
}

}

return 0;
}