#include<stdio.h>

int main(){
	
	int n, max;
	printf("Enter size of array:");
	scanf("%d", &n);

	int arr[n];
	printf("Enter %d elements in array:\n");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Initial array:");
	for(int i = 0; i < n; i++)
		printf("\t%d", arr[i]);
	printf("\n");
	
	max = arr[n-1];
	for(int i = n-2; i >= 0; i--) {
		if(arr[i] > max)
			max = arr[i];
		arr[i] = max;
	}

	printf("Resultant array:");
	for(int i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	printf("\n");

	return 0;
}
