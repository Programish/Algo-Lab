#include <stdio.h>
#include <stdlib.h>

int NonZero(int** a, int n) {
	int c = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(a[i][j])
				c++;
	return c;
}

int Sum(int** a, int n) {
	int sum = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(j > i)
				sum += a[i][j];
	return sum;
}

void Display(int** a, int n) {
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if((i + j) >= n)
				printf("%d\t", a[i][j]);
	printf("\n");
}

int Product(int** a, int n) {
	int prod = 1;
	for(int i = 0;i < n; i++)
		for(int j = 0;j < n; j++)
			if((i == j) || ((i+j) == n-1))
				prod *= a[i][j];
	return prod;
}

int main() {
	int n;
	printf("Enter value of n for nxn matrix:");
	scanf("%d", &n);

	int** arr;
	arr = (int**) malloc (n * sizeof(int*));
	for(int i = 0; i < n; i++)
		arr[i] = (int*) malloc (n * sizeof(int));

	printf("Enter %d elements in matrix:\n", n*n);
	for(int i = 0; i < n; i++)
		for(int  j = 0;j < n; j++)
			scanf("%d", &arr[i][j]);

	
	printf("Entered matrix:\n");
	for(int i = 0; i < n; i++){
		for(int  j = 0;j < n; j++)
			printf("%d  ", arr[i][j]);
		printf("\n");
	}

	int temp = NonZero(arr, n);
	printf("Total non zero elements:%d\n", temp);

	temp = Sum(arr, n);
	printf("Sum of elements above leading diagonal:%d\n", temp);

	printf("Elements below the minor diagonal:");
	Display(arr, n);

	temp = Product(arr, n);
	printf("Product of diagonal elements:%d\n", temp);

	return 0;
}
