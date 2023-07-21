#include<stdio.h>
struct time{
int hour;
int minute;
int second;

};
int main(){
struct time s1;
printf("Enter your hour :");
scanf("%d",&s1.hour);

printf("Enter your minute :");
scanf("%d",&s1.minute);

printf("Enter your second :");
scanf("%d",&s1.second);

printf("The given time is %d:%d:%d",s1.hour,s1.minute,s1.second);

return 0;
}