#include<stdio.h>

int maxDiff(int arr[], int arr_size) {
	int max_diff = arr[1] - arr[0];
	int min_element = arr[0];
	int i;
	for(i = 1; i < arr_size; i++) {
		if (arr[i] - min_element > max_diff)
			max_diff = arr[i] - min_element;
		if (arr[i] < min_element)
			min_element = arr[i];
	}
	return max_diff;
}

int main(){
	
	int n;
	printf("Enter size of array:");
	scanf("%d", &n);

	int arr[n];
	printf("Enter %d elements in array:\n", n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Maximum difference is %d\n", maxDiff(arr, n));
	
	return 0;
}

