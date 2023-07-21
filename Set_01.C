#include<stdio.h>
#include<conio.h>
void main(){

int  area,length,breadth;

 clrscr();

printf("Enter value of length \n",length);
scanf("%d",&length);

printf("Enter value of breadth \n");
scanf("%d",&breadth);

area=0.5*length*breadth;
printf("Value of area is %d \n",area);


getch();

}