#include<stdio.h>
#include<conio.h>
int main(){
float a,t,u;
float d;

clrscr();

printf("Enter value of u \n");
scanf("%f",&u);

printf("Enter value of a \n");
scanf("%f",&a);


printf("Enter value of t \n");
scanf("%f",&t);

d=1.0*(u*t + 0.5*(a*t*t));


printf("The value of d is %f \n",d);


getch();
return 0;
}