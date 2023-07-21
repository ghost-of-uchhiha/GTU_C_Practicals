#include<stdio.h>
int main(){
int num[10],i;

for(int i=0;i<10;i++)
{
printf("Enter your number %d \n",i+1);
scanf("%d",&num[i]);
}
for(int i=0;i<10;i++)
{
if(num[i]%2==0)
    printf("Entered number is even \n",num[i]);


else if(num[i]%2!=0)
    printf("Entered number is odd \n",num[i]);
}



return 0;
}