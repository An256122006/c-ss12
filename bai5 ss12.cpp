#include <stdio.h>
int snt(int num1, int num2)
{
	if (num1<10)
	{
		switch (num1)
		{
			case 2:
				printf ("%d la so nguyen to",num1);
				break;
			case 3:
				printf ("%d la so nguyen to",num1);
				break;
			case 5:
				printf ("%d la so nguyen to",num1);	
				break;
			case 7:
				printf ("%d la so nguyen to",num1);
				break;		
		}
	}else if (num1%2!=0 && num1%3!=0 && num1%5!=0 && num1&7!=0) 
	{
		printf ("%d la so nguyen to\n",num1);
	}
	if (num2<10)
	{
		switch (num2)
		{
			case 2:
				printf ("%d la so nguyen to",num2);
				break;
			case 3:
				printf ("%d la so nguyen to",num2);
				break;
			case 5:
				printf ("%d la so nguyen to",num2);	
				break;
			case 7:
				printf ("%d la so nguyen to",num2);
				break;		
		}
	}else if (num2%2!=0 && num2%3!=0 && num2%5!=0 && num2&7!=0) 
	{
		printf ("%d la so nguyen to\n",num2);
	}
	return num1,num2;	
}
int main()
{
	int num1,num2;
	printf ("moi ban nhap so nguyen 1:");
	scanf ("%d",&num1);
	printf ("moi ban nhap so nguyen 2:");
	scanf ("%d",&num2);
	snt(num1,num2);
	return 0;
 } 
