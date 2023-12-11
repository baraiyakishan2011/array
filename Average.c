#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Size of Array = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Element =\n");
	
	int i,sum=0,ave;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("A = %d\n",a[i]);
		sum = sum+a[i];
	}
	printf("Sum of All Array elements = %d\n",sum);
	ave=sum/n;
	printf("Average of Array = %d\n",ave);
}