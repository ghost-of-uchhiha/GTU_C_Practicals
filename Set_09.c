#include<stdio.h>
int main(){

int marks;

printf("Enter student marks out of 100 \n");
scanf("%d",&marks);

if(marks>=35)
{
    printf("The student is passed\n");
}

else if (marks<35)
{
    printf("The student is failed\n");
}

return 0;
}
