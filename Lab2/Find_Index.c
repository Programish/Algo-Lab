#include<stdio.h>

int main(){
	int n, key;
    	printf("Enter the size and key separated by a space: ");
    	scanf("%d %d", &n, &key);
    	int a[n];
    	printf("Enter %d elements :\n", n);
    	for(int i=0;i<n;i++)
        	scanf("%d", &a[i]);

   	for(int i=0;i<n-2;i++)
       		for(int j=i+1;j<n-2;j++)
           		for(int k=j+1;k<n;k++)
               			if(a[i]+a[j]+a[k] == key){
                   			printf("i = %d\tj = %d\tk = %d\n", i, j, k);
					return 1;
				}
	return 0;
}
