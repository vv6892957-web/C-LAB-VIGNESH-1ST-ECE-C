# include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("======OPERATORS AND EXPRESSION======\n");
	printf("Enter the First Number :");
	scanf("%d",&a);
	printf("Enter the Second Number :");
	scanf("%d",&b);
	printf("\n------MENU------\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multipilication\n");
	printf("4.Division\n");
	printf("5.Modulus");
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a+b;
			printf("Result = %d",res);
			break;
		case 2:
			res=a-b;
			printf("Result = %d",res);
			break;
		case 3:
			res=a*b;
			printf("Result = %d",res);
			break;
		case 4:
			if(b!=0)
			{
				res=a/b;
				printf("Result = %d",res);
			}
			else
			{
				printf("Division by Zero isn't Possible");
			}break;
		case 5:
			if(b!=0)
			{
				res=a%b;
				printf("Result = %d");
			}
			else
			{
				printf("Modulus by Zero isn't possible");
			}break;
		default:
			printf("Invalid Choice");	
	}
	return 0;
}