#include<stdio.h>
struct student_record{
char name[10];
char branch[20];
int marks;
};
int main(){

    struct student_record a[10];
for(int i=0;i<=9;i++)
{
    
    printf("Enter the name of student %d :\n",i+1);
    scanf("%s",a[i].name);

     printf("Enter the branch of student %d :\n",i+1);
    scanf("%s",a[i].branch);

     printf("Enter the marks of student %d :\n",i+1);
    scanf("%d",&a[i].marks); 

}
for(int i=0;i<=9;i++)
{
    struct student_record a[i];
printf("The name of student %d is %s\n",i+1,a[i].name);
printf("The branch of student %d is %s\n",i+1,a[i].branch);
printf("The marks of student %d are %d\n",i+1,a[i].marks);

}

return 0;
}