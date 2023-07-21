#include<stdio.h>
int main(){

int a[10],max,min,i;

for(i =0;i<10;i++)
{
    printf("Enter value of [%d] integer \n",i+1);
    scanf("%d",&a[i]);
}

min=max=a[0];
for(int i=1;i<10;i++)
{

if(min>a[i])
{
    min=a[i];
}

if(max<a[i])
{
    max=a[i];
}



}
printf("Maximum number is %d \n",max);
printf("Minimum number is %d \n",min);



return 0;
}