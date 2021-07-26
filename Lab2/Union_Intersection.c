#include<stdio.h>

int printUnion(int arr1[], int arr2[], int m, int n) { 
	int i = 0, j = 0; 
  	while (i < m && j < n) { 
    		if (arr1[i] < arr2[j]) 
      			printf(" %d ", arr1[i++]); 
    		else if (arr2[j] < arr1[i]) 
      			printf(" %d ", arr2[j++]); 
    		else { 
      			printf(" %d ", arr2[j++]); 
      			i++; 
    		} 
  	} 
  
  /* Print remaining elements of the larger array */
  	while(i < m) 
   		printf(" %d ", arr1[i++]); 
  	while(j < n) 
   		printf(" %d ", arr2[j++]); 
} 
  
int printIntersection(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (arr1[i] < arr2[j])
      i++;
    else if (arr2[j] < arr1[i])
      j++;
    else /* if arr1[i] == arr2[j] */
    {
      printf(" %d ", arr2[j++]);
      i++;
    }
  }
}

/* Driver program to test above function */
int main() { 
	int m, n;
  	printf("Enter no. of elements in array1 and array2 separated by a space:");
	scanf("%d %d", &m, &n);

	int arr1[m], arr2[n];
	
	printf("Enter %d elements in array1 in increasing order:\n", m);
	for(int i = 0;i < m; i++)
		scanf("%d", &arr1[i]);

	printf("Enter %d elements in array2 in increasing order:\n", n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr2[i]);

	printf("Union of arrays: ");
  	printUnion(arr1, arr2, m, n);
	printf("\n");

	printf("Intersection of arrays: ");
	printIntersection(arr1, arr2, m, n);
	printf("\n");
		
  	return 0; 
} 
