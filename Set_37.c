#include<stdio.h>
#include<string.h>
int main()
{
char a[20],c;
int cnt=0;

printf("Enter your word \n");
scanf("%s",a);

printf("Enter your character \n");
scanf("%c",&c);
for(int i=0;i<strlen(a);i++)
{
    if(c==a[i])
    cnt++;
}
printf("The character %c occurs %d times in the word %s",c,cnt,a);

return 0;
}