#include <math.h>
#include <stdio.h>
#include <string.h>

int method1Counter = 0;
int method2Counter = 0;
int method3Counter = 0;

void Fastest() {
	
	if ( method1Counter < method2Counter && method1Counter < method3Counter )
      		printf("Euclid's Algo.");
   	else if ( method2Counter < method1Counter && method2Counter < method3Counter )
      		printf("Consecutive Integers.");
   	else if ( method3Counter < method1Counter && method3Counter < method2Counter )
      		printf("Middle School.");
   	else   
      		printf("None!!");	
}

void resetCounter() {
    method1Counter = 0;
    method2Counter = 0;
    method3Counter = 0;
} 

//Euclid's Algorithm
int GCD1(int a, int b) {
	  
	while(b != 0) {
 		method1Counter++; 
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

//Consecutive integer checking algorithm
int GCD2(int a, int b) {
 	method2Counter++;
	int t = a < b ? a : b;
	while(t > 0) {
 		method2Counter++;
		if(((a % t) == 0) && ((b % t) == 0)) {
 			method2Counter++; 
			return t;
		}
		else
			t--;
	}		
}

//Middle school procedure
int primefactors(int num, int arr[]) { //Here we get a array of prime factors and returned
    	int Count, i = 2, ndx = 0, j;  //value is the total no. of prime factors in array  
   	method3Counter++; 
    	while (i <= sqrt(num)) {
        	method3Counter++; 
		Count = 0;
        	if(num % i == 0) {
            	 	method3Counter++; 
			j = 1;
            		while(j <= i) {
                		if(i % j == 0) {
 					method3Counter++;	
                    			Count++;
				}
                		j++;
				method3Counter++; 
            		}
		}
            	if(Count == 2) {
                	arr[ndx] = i;
			method3Counter++; 
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
 	method3Counter++; 
	int prod = 1;
	for(int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			if(arr_a[i] == arr_b[j]) {
				method3Counter++; 
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

	int x = 56;
	int y = 32566;
	int gcd = GCD1(x, y);
	printf("GCD1:%d\n", gcd);
	gcd = GCD2(x, y);
	printf("GCD2:%d\n", gcd);
	gcd = GCD3(x, y);
	printf("GCD3:%d\n", gcd);
*/
	int x, y;
	printf("\t\t\t\t\tTime\tTaken\tBy\t\t\n");
	printf("\t\t\t|----------------------------------------------------|\n");
	printf("S.No\tInput\t\tEuclid's Algo\tConsecutive Integer\tMiddle School\tResult\t\tFastest\n\n");
	
	x = 31415;
	y = 14142;
	int res = GCD1(x, y);
	GCD2(x, y);
	GCD3(x, y);
	printf("1   \t%d & %d\t%d\t\t%d\t\t\t%d\t\t%d\t\t", x, y, method1Counter, method2Counter, method3Counter, res);
	Fastest();
	printf("\n");
	resetCounter();
	
	x = 56;
        y = 32566;	
	res = GCD1(x, y);
	GCD2(x, y);
	GCD3(x, y);
	printf("2   \t%d & %d\t%d\t\t%d\t\t\t%d\t\t%d\t\t", x, y, method1Counter, method2Counter, method3Counter, res);
	Fastest();
	printf("\n");
	resetCounter();
	
	y = 56;
        x = 34218;	
	res = GCD1(x, y);
	GCD2(x, y);
	GCD3(x, y);
	printf("3   \t%d & %d\t%d\t\t%d\t\t\t%d\t\t%d\t\t", x, y, method1Counter, method2Counter, method3Counter, res);
	Fastest();
	printf("\n");
	resetCounter();
	
	x = 12;
        y = 15;	
	res = GCD1(x, y);
	GCD2(x, y);
	GCD3(x, y);
	printf("4   \t%d & %d\t\t%d\t\t%d\t\t\t%d\t\t%d\t\t", x, y, method1Counter, method2Counter, method3Counter, res);
	Fastest();
	printf("\n");
	resetCounter();
	
	y = 31415;
        x = 31415;	
	res = GCD1(x, y);
	GCD2(x, y);
	GCD3(x, y);
	printf("5   \t%d & %d\t%d\t\t%d\t\t\t%d\t\t%d\t\t", x, y, method1Counter, method2Counter, method3Counter, res);
	Fastest();
	printf("\n");
	resetCounter();
	
	y = 12;
        x = 12;	
	res = GCD1(x, y);
	GCD2(x, y);
	GCD3(x, y);
	printf("6   \t%d & %d\t\t%d\t\t%d\t\t\t%d\t\t%d\t\t", x, y, method1Counter, method2Counter, method3Counter, res);
	Fastest();
	printf("\n");
	resetCounter();
	
	return 0;
}
