#include<stdio.h>
int main(){
int number;

printf("Enter the number\n");
scanf("%d",&number);

if(number==1)
{
    printf("The day sunday");
}

 else if(number==2)
{
    printf("The day Monday");
}

else if(number==3)
{
    printf("The day Tuesday");
}

 else if(number==4)
{
    printf("The day Wednesday");
}

else if(number==5)
{
    printf("The day Thrusday");
}

if(number==6)
{
    printf("The day Friday");
}

if(number==7)
{
    printf("The day Saturday");
}
 else
 {
     printf("Input proper number\n");
 }
 
return 0;
}