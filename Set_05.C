#include<stdio.h>
#include<conio.h>
int main(){
float kilometer,meter,feet,inches,centimeter;

printf("Enter value for Kilometers\n");
scanf("%f",&kilometer);

meter=kilometer*1000;
printf("The value in meters is %f\n",meter);

feet=3281*kilometer;

printf("The value in feet is %f\n",feet);

inches=39370*kilometer;


printf("The value in inch is %f\n",inches);



centimeter=kilometer*100000;


printf("The value in centimeters is %f\n",centimeter);
getch();
return 0;
}