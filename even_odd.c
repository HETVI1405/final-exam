#include<stdio.h>
#include<conio.h>

int num(int n)
{
	
	if(n%2==0)
	{
		printf("this is even..");
		
	}
	else
	{
		printf("this is odd..");
	}
	return 0;
}
int main()
{
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	num(n);
	return 0;
}