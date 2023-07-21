#include<stdio.h>
int main(){

int n,i,series,sum=0;
printf("Enter value of n \n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
series=i*i;
sum=sum+series;
}
printf("The value of series is %d \n",sum);
return 0;
}