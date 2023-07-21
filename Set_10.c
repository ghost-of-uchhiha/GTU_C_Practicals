#include<stdio.h>
int main(){

int a,b,c;


printf("Enter value of a \n");
scanf("%d",&a);

printf("Enter value of b \n");
scanf("%d",&b);

printf("Enter value of c \n");
scanf("%d",&c);
if(a>b) 
{
 if(a>c)
 {
     printf("a is the biggest");
 }   
 else
 {
     printf("c is the biggest");
 }
}
else
{
if(b>c)
{
    printf("b is the biggest");
}
else{
    printf("c is the biggest");
}
}






return 0;
}