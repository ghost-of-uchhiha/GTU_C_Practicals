#include<stdio.h>
#include<string.h>
void upper_case(char c[50])
{
int i;
for(i=0;i<strlen(c);i++)
{
    if(c[i]>='a' && c[i]<='z')
    {
  c[i]=c[i]-32;
    }
}
printf("The string in uppercase is :");
puts(c);

}
int main(){
char c[50];
printf("Enter your string in lowercase \n");
gets(c);

printf("The string in upper case is \n");
upper_case(c);


return 0;
}