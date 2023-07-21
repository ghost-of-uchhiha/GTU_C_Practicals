#include<stdio.h>
int main(){

int a,b,temp;
printf("Enter value of a\n");
scanf("%d",&a);
//clrscr();

printf("Enter value of b\n");
scanf("%d",&b);

printf("Value of a and b before swap is %d and %d \n",a,b);

temp=a;
a=b;
b=temp;

printf("Value of a and b after swap is %d and %d \n",a,b);
getch();
return 0;
}