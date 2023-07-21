#include<stdio.h>
int main(){


int rollno [20];
int marks [20];
int i=0;

for(i=0;i<20;i++);
{
printf("Enter roll no of  student %d\n",i+1);    
scanf("%d",&rollno[i]);

printf("Enter marks of  student %d\n",i+1);    
scanf("%d",&marks[i]);
}
for(i=0;i<20;i++);
{
    printf("The value of Roll no is %d\n",rollno[i]);
    printf("The value of marks is %d \n",marks[i]);
}
return 0;
}