#include<stdio.h>
#include<string.h>
int main(){

char a[20];
int n;

printf("Enter your string in lowercase \n");
scanf("%s",a);


for(int i=0;i<n;i++)
{
if(a[i]>='a' && a[i]<='z')
{
    a[i]=a[i]-32;
}

}
printf("String in uppercase is %s",a);
return 0;
}