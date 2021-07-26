#include <stdio.h>

/* getMissingNo takes array and size of array as arguments*/
int getMissingNo(int a[], int n)
{
	int i, total;
	total = (n + 1) * (n + 2) / 2;
	for (i = 0; i < n; i++)
		total -= a[i];
	return total;
}

/*program to test above function */
int main()
{
	int n;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements in array:\n", n-1);
	for(int i = 0;i < n-1; i++)
		scanf("%d",&a[i]);
	int miss = getMissingNo(a, 5);
	printf("Missing no. is %d\n", miss);
	return 0;
}

