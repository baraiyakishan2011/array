#include<stdio.h>

main()
{
	int a[] = {7,10,17,18,32,31,49,66,};
	
	int i,len;
	
	len = sizeof(a)/sizeof(0);
	printf("Length of Array = %d\n",len);
	
	for(i=0;i<len;i++)
	{
		printf("%d\n",a[i]);
	}
}