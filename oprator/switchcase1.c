#include<stdio.h>
 #include<conio.h>
 
void main()
{
	int num;
	printf("enter num:");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("sunday /n");
		break;
		case 2:printf("monday /n");
		break;
		case 3:printf("tuesday /n");
		break;
		case 4:printf("wednesday /n");
		break;
		case 5:printf("thursday /n");
		break;
		case 6:printf("friday /n");
		break;
		case 7:printf("saturday /n");
		break;
		default:printf("enter valid number");
		break;
	}
		
	}