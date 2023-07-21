#include<stdio.h>
int main(){

int height,weight,person,sum=0; 

for(int person=1;person<=5;person++)
{
printf("Enter height for %d person \n",person);
scanf("%d",&height);

printf("Enter weight for %d person \n",person);
scanf("%d",&weight);


if(height>=170&&weight<=50)
{
    sum=sum+1;
}

}


    printf("The total number of candidates fulfilling criteria are %d",sum);


return 0;
}