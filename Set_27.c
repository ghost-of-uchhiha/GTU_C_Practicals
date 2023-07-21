#include<stdio.h>
int main(){
int n,i;
float sum=1,series=1;

printf("Enter value of n \n");
scanf("%d",&n);

for(i=2;i<=n;i++)
{

series=series*i;
sum=sum + 1.0/series;

}

printf("The vaue of sum of series is %f \n ",sum);
return 0;
}