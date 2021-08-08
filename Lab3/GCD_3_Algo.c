#include <math.h>
#include <stdio.h>
#include <string.h>

int method1Counter = 0;
int method2Counter = 0;
int method3Counter = 0;

void resetCounter()
{
    method1Counter = 0;
    method2Counter = 0;
    method3Counter = 0;
} 

//Euclid's Algorithm
int GCD1(int a, int b) {
	
	while(b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

//Consecutive integer checking algorithm
int GCD2(int a, int b) {

	int t = a < b ? a : b;
	while(t > 0) {
		if(((a % t) == 0) && ((b % t) == 0))
			return t;
		else
			t--;
	}		
}

//Middle school procedure
int primefactors(int num, int arr[]) { //Here we get a array of prime factors and returned
    	int Count, i = 2, ndx = 0, j;  //value is the total no. of prime factors in array  
  
    	while (i <= sqrt(num)) {
        	Count = 0;
        	if(num % i == 0) {
            		j = 1;
            		while(j <= i) {
                		if(i % j == 0)
                    			Count++;
                		j++;
            		}
		}
            	if(Count == 2) {
                	arr[ndx] = i;
			ndx++;
			num = num/i; //Once a prime factor is added to array
			i = 1;       //then that factor is devided from num
		}		     //and i is set to 1 so that again from 
		i++;                 //2 that reultant no. can be checked
    	}
    	return ndx;
} 
int GCD3(int a,int b) {
	
	int arr_a[a], arr_b[b];

	int x = primefactors(a, arr_a);
	int y = primefactors(b, arr_b);

	int prod = 1;
	for(int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			if(arr_a[i] == arr_b[j]) {
				prod = prod * arr_a[i];
				arr_b[j] = 0; // once the element of arr_b is used, then it is set to 0
				break;	      // so that it can't be used again.
			}
	return prod;
}


int main() {

/*	int x, y;
	printf("Enter two non-negative, greater than zero integers separate by a space:");
	scanf("%d %d", &x, &y);

	int gcd = GCD3(x, y);
	printf("GCD:%d\n", gcd);
*/
	printf("\t\tTime\tTaken\tBy\t\t\n");
	printf("S.No\tInput\tAlgo-1\tAlgo-2\tAlgo-3\tResult\t\tFastest\n\n");
	return 0;
}
