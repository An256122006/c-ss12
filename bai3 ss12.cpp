#include <stdio.h>
int factorial(int n)
{
	if (n==0)
	{
		return 1; 
	} 
	return n*factorial(n-1); 
}
int main()
{
    int n;
    printf ("moi ban nhap so nguyen n:");
	scanf ("%d",&n);
	int giaithua=factorial(n);
	printf ("%d",giaithua);
	return 0; 
} 
