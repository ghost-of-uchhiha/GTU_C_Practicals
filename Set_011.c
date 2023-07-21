#include<stdio.h>
int main(){

char Character;

printf("Enter your character \n");
scanf("%c",&Character);


if(Character>='A' && Character<='Z')
{
printf("Character is big alphabet");
}
 else if(Character>='a' && Character<='z')
 {
printf("Character is small alphabet");
 }

else if(Character>='0' && Character<='9')
{
printf("Character is a digit");
}
else
{
printf("Character is Speical Character");
}



return 0;
}