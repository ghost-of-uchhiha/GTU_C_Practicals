#include<stdio.h>
int main(){

int n;
char ch=64;
int a=0;

printf("Enter value of n");
scanf("%d",&n);

for(int i=n;i>=1;i--){
   
for(int j=1;j<=i;j++){
    printf("%c",ch+j);
}
printf("\n");
}

return 0;
}