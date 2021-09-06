#include<bits/stdc++.h>

using namespace std;



void swap(int* a, int* b) {

 int t = *a;

 *a = *b;

 *b = t;

}



int partition(int A[],int l, int h){

 int x=A[h];

 int i=l-1;

 for (int j=l;j<=h-1;j++){

  i++;

  swap(&A[i],&A[j]);

 }

 i=i+1;

 swap(&A[i],&A[h]);

 return i;

}



void quickSort(int A[],int l,int h){

 if(l<h){

  int pi=partition(A,l,h);

  quickSort(A,l,pi-1);

  quickSort(A,pi+1,h);

 }

}



int main() {

 int a[]= {1000,50000,100000,150000,200000,250000,300000,350000,400000,450000,100000};

 time_t start, end;

 double time_taken;

 string str;

 cout<<endl;

 cout<<"\n\n\t\tQuick Sort Time Complexity \n"<<endl;

 cout<<"SlNo.\tValues\t\tRandom\t\t\tSorted\t\tReverse Sorted"<<endl<<endl;

 for(int i=0; i<10; i++) {

  int n=a[i];

  int arr[n];

  for(int j=0; j<n; j++)

   arr[j]=rand()%20000;

  cout<<i+1<<"\t"<<a[i]<<"\t\t";

  start=clock();

  quickSort(arr,0,n-1);

  end=clock();

  time_taken = double(end - start)/double(CLOCKS_PER_SEC);

  cout<<time_taken<<setprecision(5)<<"\t\t";

  sort(arr,arr+n);

  start=clock();

  quickSort(arr,0,n-1);

  end=clock();

  time_taken = double(end - start)/double(CLOCKS_PER_SEC);

  cout<<time_taken<<setprecision(5)<<"\t\t";

  sort(arr,arr+n,greater<int>());

  start=clock();

  quickSort(arr,0,n-1);

  end=clock();

  time_taken = double(end - start)/double(CLOCKS_PER_SEC);

  cout<<time_taken<<setprecision(5)<<endl;

 }

}
