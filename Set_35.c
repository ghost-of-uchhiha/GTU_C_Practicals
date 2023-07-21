#include<stdio.h>
#include<math.h>
int main(){
int n[20],i,sum=0,ele;
float avg,GM,HM=0,ser=0,ser1=1;
printf("Enter numbers of elements  max(20) \n");
scanf("%d",&ele);

for(i=0;i<ele;i++)
{
printf("Enter your numbers",i+1);
scanf("%d",&n[i]);
ser = ser + 1.0/n[i];
sum=sum+n[i];
ser1= ser1*n[i];

}
avg=1.0*sum/ele;

printf("The value of avg is %f \n",avg);


HM= 1.0*ele/ser;

printf("The value of harmonic mean is %f \n",HM);

GM = pow(ser1,1.0/ele);
printf("The value of geometric mean is %f",GM);
return 0;
}