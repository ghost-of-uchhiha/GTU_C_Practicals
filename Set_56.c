#include<stdio.h>
int main(){
char n=11;
int *j=&n;

printf("The address of n is %d \n",j);
printf("The value of i is %d \n",*j);

return 0;
}