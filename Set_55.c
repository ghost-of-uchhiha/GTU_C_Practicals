#include<stdio.h>
int main(){
int a;
int b;

int temp;
int *i=&a;
int *j=&b;
printf("Enter value of a \n");
scanf("%d",&*i);

printf("Enter value of b \n");
scanf("%d",&*j);

*i=*i+*j;
*j=*i-*j;
*i=*i-*j;

printf("The value of a after swap is %d \n",*i);
printf("The value of b after swap is %d \n",*j);
return 0;
}