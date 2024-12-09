#include <stdio.h>
int max(int arr[]) 
{
	int max2=arr[0];
	for (int i=0; i<6; i++)
	{
		if (arr[i]>max2)
		{
			max2=arr[i]; 
		 } 
	 } 
	 return max2; 
}
int main()
{
	int arr[6]={1,2,4,5,7,9};
	int maxvlue=max(arr); 
	printf ("%d",maxvlue);
	return 0; 
} 
