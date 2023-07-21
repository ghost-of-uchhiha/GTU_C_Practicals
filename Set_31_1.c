#include<stdio.h>
int main(){
char ch=64;

int i,j;
for(i=1;i<=5;i++){

for(j=5;j>=i;j--){
  


printf("%c",ch+i);
}
printf("\n");
}

return 0;
}