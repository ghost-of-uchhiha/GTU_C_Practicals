#include<stdio.h>
int main(){

int n[20],i,max,ele;
printf("How many elements you want to enter (max 20) \n",ele);
scanf("%d",&ele);

for(i=0;i<ele;i++){



printf("Enter your number %d \n",i+1);
scanf("%d",&n[i]);

if(i==0)

max=n[i];
else if(n[i]>max)
{
    max=n[i];
}
}
printf("The maximum number is %d",max);

return 0;
}