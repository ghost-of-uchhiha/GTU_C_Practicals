#include<stdio.h>
int main(){

int marks,students,subjects,sum=0;
float average;
for(int students=1;students<=5;students++){
printf("Enter marks for student-%d \n ",students);

for(int subjects=1;subjects<=3;subjects++){

printf(" \nEnter marks for subject-%d\n",subjects);
scanf("%d",&marks);
sum=sum+marks;

}


}
average=sum/15;
printf("Total=%d    \n",sum);
printf("average=%.2f    \n",average);
return 0;
}