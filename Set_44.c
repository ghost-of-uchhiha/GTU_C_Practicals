#include<stdio.h>
int swap(int x,int y);
int main(){
int x,y;
printf("Enter value of x\n");
scanf("%d",&x);

printf("Enter value of y\n");
scanf("%d",&y);

swap(x,y);
return 0;
}
int swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;

printf("Value of x after swapping is %d\n",x);
printf("Value of y after swapping is %d\n",y);
return 0;
}