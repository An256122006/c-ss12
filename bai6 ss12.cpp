#include <stdio.h>
int shh(int num1,int num2)
{
	int sum1=0;
	for (int i=1; i<num1; i++)
	{
		if (num1%i==0)
		{
			sum1=sum1+i;
		}
	}
	if (sum1==num1)
	{
		printf ("%d la so hoan hao\n",num1);
	}
	int sum2=0;
	for (int i=1; i<num2; i++)
	{
		if (num2%i==0)
		{
			sum2=sum2 + i;
		}
	}
	if (sum2==num2)
	{
		printf ("%d la so hoan hao\n",num2);
	}
	return num1,num2;
}
int main()
{
	int sum,num1,num2;
	printf ("moi ban nhap so nguyen 1:");
	scanf ("%d",&num1);
	printf ("moi ban nhap so nguyen 2:");
	scanf ("%d",&num2);
	shh(num1,num2);
	return 0;
}
