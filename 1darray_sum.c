//1d array sum

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	
	int sum=0;
	
	printf("enter size: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=1;i<=n;i++)
	{
	
			printf("a[%d]: ",i);
			scanf("%d",&a[i]);
		
		sum= sum+a[i];
		
	}
	
		printf("sum of array is %d..",sum);


}