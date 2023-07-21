#include<stdio.h>
int main(){

int n;
long factorial=1;
printf("Enter the value of n\n");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    factorial=factorial*i;
}
printf("The value of factorial %d is %ld",n,factorial);

return 0;
}