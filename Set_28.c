#include<stdio.h>
#include<math.h>
int main(){
int n,x;
int fact=1,i;
float sum=1.0;
float temp;
printf("Enter value of x \n");
scanf("%d",&x);

printf("Enter value of n \n");
scanf("%d",&n);

for(int i=0;i<=n;i++)
{

for(int k=1;k<=n;k++)
{
fact=fact*k;
}

temp=(float) pow(x,i)/fact;

if(i%2==0)
{
    sum=(float) sum+temp;
}

else 
{
    sum=(float) sum-temp;
}


}
printf("The value of sum is %f",sum);

return 0;
}