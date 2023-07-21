#include<stdio.h>
#include<string.h>
int main(){

char str[20];

printf("Enter your string \n");
scanf("%s",str);
int n;

n=strlen(str);

printf("%d \n",n);
char temp;
for(int i=0;i<n/2;i++)
{

temp=str[i];
str[i]=str[n-i-1];
str[n-i-1]=temp;

}
printf("The reversed string is %s \n",str);





return 0;
}