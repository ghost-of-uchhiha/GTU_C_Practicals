#include<stdio.h>
int main(){

float Da,Hra,Ma=300,Pf,Gross,Basic,Nt; 

printf("Enter value of basic\n");
scanf("%f",&Basic);

Da=((1.0*10)/100)*Basic;
Hra=((1.0*7.50)/100)*Basic;
Pf=((1.0*12.50)/100)*Basic;
Gross=Da+Hra+Ma+Basic;
Nt=Gross-Pf;

printf("The value of Da is %f \n",Da);
printf("The value of Hra is %f \n",Hra);
printf("The value of Pf is %f \n",Pf);
printf("The value of Gross is %f \n",Gross);
printf("The value of Nt is %f \n",Nt);
return 0;
}