#include<stdio.h>
int main(){

float a;
printf("Enter value of integer \n");
scanf("%f",&a);


if(a>0)
{
    printf("The number is positive \n",a);
}


 else if (a==0)
{
    printf("The number is zero \n",a);
}

else if (a<0)
{
    printf("The number is negative \n",a);
}



return 0;
}