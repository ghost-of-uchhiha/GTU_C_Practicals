#include<stdio.h>
int main(){

int i,j,n,a[10],temp;
printf("Enter number of elements (max 10)\n"); 
scanf("%d",&n);
for(i=0;i<n;i++){


printf("Enter your numbers \n",i+1);
scanf("%d",&a[i]);
}
printf("Array before sorting\n");


for(i=0;i<n;i++){


printf(" %d", a[i]);

}
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-(i+1);j++){
if(a[j]>a[j+1])
{
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
}



    }
}

printf("\nArray after sorting\n",a[i]);


for(i=0;i<n;i++){


printf(" %d", a[i]);

}




return 0;
}