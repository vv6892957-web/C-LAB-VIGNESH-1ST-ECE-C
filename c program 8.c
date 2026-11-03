#include<stdio.h>
#include<stdlib.h>

/* Call by Value*/
int AddByValue (int a, int b)
{
	int res;
	res=a+b;
	return res;
}

/* call by reference */
void swapByReferance(int *a,int *b)
{
	int temp;
	temp =*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a,b, res;
	int *ptr;
	int *arr;
	int n,i,sum;
	printf(" Enter the first number:");
	scanf("%d",&a);
	printf(" Enter the Second number:");
	scanf("%d",&b);
	/*pointer demonstration */
    ptr=&a;
	printf("\nPointer Demonstration : ");
	printf("\nValue of a=%d",*ptr);
	printf("\nAdderss of a=%p",(void*)ptr);
    /* Call by Value */
	res=AddByValue(a,b);
	printf("\n\nCall by Value:");
	printf("\nSum =%d", res);
	
	/* call by referance */
	swapByReferance (&a,&b);
	printf("\n\n call by referance:");
	printf("\nAfter swapping, first number=%d",a);
	printf("\nAfter swapping, second number =%d",b);
	/*dynamic memory allocation */
	printf("\n\nDynamic memory allocation ");
	printf("\n enter the number of element;");
	scanf("%d",&n);
	
	if(n<=0)
	{
		printf("invalid number of elements.");
		return 1;
	}
	arr=malloc((size_t)n* sizeof(int));
	
	if(arr==NULL)
	{
		printf(" memory allocation failed.");
		return 1;
	}
	printf(" enter %d element:\n",n);
	
	for(i=0;i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=0;
	for (i=0;i<n;i++)
	{
		sum =sum + arr[i];
	}
	printf("sum of dynamically allocated arry = %d\n",sum);
	free(arr);
	return 0;
		
}