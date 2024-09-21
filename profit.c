#include<stdio.h>
#include<conio.h>

void main()
{
	int profit,loss,sell,cost;
	
	printf("enter cost vlaue: ");
	scanf("%d",&cost);
	printf("enter sell vlaue: ");
	scanf("%d",&sell);
	
	
	if(cost>sell)
	{
		loss=cost-sell;
		printf("loss vlaue is %d",loss);
		
	}
	else if(cost<sell)
	{
		profit=sell-cost;
		printf("profit vlaue is %d",profit);
		
	}
	else
	{
		printf("no profit & no loss...");
	}
}