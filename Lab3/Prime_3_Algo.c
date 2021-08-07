#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int method1Counter = 0;
int method2Counter = 0;
int method3Counter = 0;

void resetCounter()
{
    method1Counter = 0;
    method2Counter = 0;
    method3Counter = 0;
} 

bool method1(int n) 
{
    int count = 0, num = n-1; 
    method1Counter++;
    while (n % num != 0 && num >= 1) 
    {
        num--; 
        method1Counter++;
    }
    if (num==1) 
    {
        method1Counter++;
        return true;
    }
    else 
    {
        method1Counter++;
        return false;
    }
}

bool method2(int n) 
{
    int count = 0, num = n/2; 
    method2Counter++;
    while (n % num != 0 && num >= 1) 
    {
        num--; 
        method2Counter++;
    }
    if (num==1) 
    {
        method2Counter++;
        return true;
    }
    else 
    {
        method2Counter++;
        return false;
    }
}

bool method3(int num) 
{
    if (num < 2) 
    {
        method3Counter++;
        return false;
    }
    if (num == 2) 
    {
        method3Counter++;
        return true;
    }
    int count = 0;
    for (int i=2;i<num/2;++i) 
    {
    if (num % i == 0) 
    {
        count++;
        method3Counter++;
        break;
    }
    else
        method3Counter++;
    }
    if(count > 0)
        return false;
    else
        return true;
}

void main() 
{
printf("Enter 10 numbers greater than 1:\n");
int arr[10];
for(int i = 0;i<10;i++)
scanf("%d",&arr[i]);
printf("\t\tTime\tTaken\tBy\t\t\n");
printf("S.No\tInput\tAlgo-1\tAlgo-2\tAlgo-3\tResult\t\tFastest\n\n");

char result[10];
for(int i = 0;i<10;i++)
{
    bool res = method1(arr[i]);
    method2(arr[i]);
    method3(arr[i]);
    if (method1Counter < method2Counter && method1Counter < method3Counter)
    strcpy(result,"algo-1");
    else if (method2Counter < method3Counter )
    strcpy(result,"algo-2");
    else
    strcpy(result,"algo-3");
    printf("%d\t%d\t%d\t%d\t%d\t%s\t%s\n",i+1,arr[i],method1Counter,method2Counter,method3Counter,res?"is prime":"not prime",result);
    resetCounter();
}
}
