#include<stdio.h>
void main()
{
    int n;
    printf("Enter the length of the array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr[n];
    
    for(int i=0;i<n;i++)
    {
        ptr[i]=&arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*ptr[i]>*ptr[j])
            {
                int temp=*ptr[i];
                *ptr[i]=*ptr[j];
                *ptr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*ptr[i]);
    }

}