#include<stdio.h>

void main()
{
    int a[100],b[100],c[100],i,n;
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
    
    printf("\nEnter %d elements in first array :\n",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the %d elements in second array :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nSum of these two array  is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}