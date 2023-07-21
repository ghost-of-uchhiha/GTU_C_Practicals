#include<stdio.h>
int sum_n(int n){
int i,sum=0;
for(i=1;i<=n;i++){
    sum+=i;
}
return sum;
}
int main(){
int n;
printf("Enter your number \n");
scanf("%d",&n);

printf("The sum upto %d numbers is %d",n,sum_n(n));

return 0;
}