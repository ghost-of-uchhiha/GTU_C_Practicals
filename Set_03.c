#include<stdio.h>
int main(){
int p,r,n;
float intrest;
//clrscr();
printf("Enter value of p \n");
scanf("%d",&p);


printf("Enter value of r \n");
scanf("%d",&r);


printf("Enter value of n \n");
scanf("%d",&n);


intrest= 1.0*p*r*n/100;
printf("The value of simple intrest is %f",intrest);

getch();
return 0;
}