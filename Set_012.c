#include<stdio.h>
int main(){

int marks;

printf("Enter Your marks out of 100\n");
scanf("%d",&marks);


if(marks>=70)
{
    printf("A grade\n");
}


 else if(marks>=50)
{
    printf("B grade\n");
}


 else if(marks>=30)
{
    printf("C grade\n");
}


 else 
{
    printf("D grade\n");
}





return 0;
}