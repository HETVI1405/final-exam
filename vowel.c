//vowel and constant

#include<stdio.h>
#include<conio.h>

void main()
{
	char alpha='a';
	printf("enter alphabet: ");
	scanf("%c",&alpha);
	if(alpha>='a')
	{
	switch(alpha)
	{
		case'a':printf("this is vowel..");
		break;
		
		case'e':printf("this is vowel..");
			break;
			case'i':printf("this is vowel..");
			break;
				case'o':printf("this is vowel..");
			break;
			case'u':printf("this is vowel..");
			break;
			
			default :
				printf("this is constant...");
			
		}
}
else
{
	printf("this is not alphabet...");
}
	
	
	
	}