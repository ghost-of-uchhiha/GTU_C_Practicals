#include<stdio.h>

int main(){
int  i=1,n,sum=0,num;
float average;
printf("Enter amount  of numbers \n");
scanf("%d",&n);
printf("Enter your numbers  \n");
for(int i=1;i<=n;i++)
{
    
    scanf("%d",&num);
    sum=sum+num;
}

average=1.0*(sum)/n;

printf("The value of sum is %d\n",sum);
printf("The value of average is %f\n",average);
return 0;
}