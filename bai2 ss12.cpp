#include <stdio.h>
void in(int arr[10])
{
	for (int i=0; i<10; i++)
	{
		scanf ("%d",&arr[i]);
	}
	for (int i=0; i<10; i++)
	{
		printf ("%d ",arr[i]);
	}
}
int main()
{
	int arr[10];
	in(arr);
	return 0;
}
