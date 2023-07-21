#include<stdio.h>
struct student
{
    char name[20];
    int marks;
};
int main(){

struct student s1;
printf("Enter student name \n");
gets(s1.name);

printf("Enter student marks");
svanf("%d",&s1.marks);




return 0;
}