#include<stdio.h>
int main()
{

int t1,t2,temp,n;
printf("Enter value of n");
scanf("%d",&n);
t1=0; t2=1;
printf("%d",t1);
for(int i=1; i<n;i++)
{
printf("%d", t2);
temp=t2;

t2=t1+t2;
t1=temp;

}

return 0;
}