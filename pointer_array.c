//pointer with array

#include<stdio.h>
void value(int *p)
{
	int i;
	for(i=1;i<=5;i++)
		scanf("%d",&*(p+i));
}
void display(int *p)
{
	int i;
	for(i=1;i<=5;i++)
		printf("%d",*(p+i));
}
void sort(int *p)
{
	int i,j,t;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			if(*(p+j) > *(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
}
int main()
{
	int a[5];
	printf("enter 5 element");
	printf("\n");
	value(&a);
	printf("\n");
	display(&a);
	printf("\n");
	sort(&a);
	printf("\n");
	display(&a);
}
