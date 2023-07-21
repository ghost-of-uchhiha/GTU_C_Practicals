#include<stdio.h>
int main(){

int n,i;
float sum=1,series;
printf("Enter value of n \n");
scanf("%d",&n);

for(i=2;i<=n;i++)
{

series=1.0/i;
sum=(sum+series);

}
printf("Value for sum of series is %f \n",sum);

return 0;
}