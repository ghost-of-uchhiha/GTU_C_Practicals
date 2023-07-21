#include<stdio.h>
#include<conio.h>
int main(){
float c,f;
//clrscr();

printf("Enter value of celcius");
scanf("%f",&c);
f=1.8*c+32;

printf("Value in farenheit is %f",f);

getch();
return 0;
}