#include<stdio.h>

struct personal {
char name[50];
char doj[10];
int salary;
};
int main()
{
struct personal a[5];
for(int i=0;i<5;i++)
{
    printf("Enter name of  employee %d \n",i+1);
    gets(a[i].name);


    printf("Enter date of joining of employee %d in dd-mm-yyyy format \n",i+1);
    gets(a[i].doj);


    printf("Enter salary of employee %d \n",i+1);
    scanf("%d",&a[i].salary);
}

for(int i=0;i<5;i++)
{
    struct personal a[5];
printf("The name of %d employee is %s \n",i+1);
puts(a[i].name);
printf("The date of joining of %d employee is %d",i+1);
puts(a[i].doj);
printf("The salary of %d employee is %d",i+1,a[i].salary);
}
return 0;
}