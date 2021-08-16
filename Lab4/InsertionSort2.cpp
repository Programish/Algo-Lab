#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int n)

{
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=rand()%100;
      for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }


}
void insertion_sort1(int n)
{

    int a[n];
    for(int i=0;i<n;i++)
        a[i]=rand()%100;
        sort(a,a+n);
      for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }


}
void insertion_sort2(int n)
{
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=rand()%100;
        sort(a,a+n,greater<int>());
      for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }


}
void sorting(int a[],int n)
{
     for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
void display()
{
     int a[]={5000,10000,15000,20000,25000,30000,35000,40000,45000,50000};
    time_t start, end;
    double time_taken;
    cout<<endl;
    cout<<"SlNo.\tValues\tBest\tAverage\t Worst"<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<"\t"<<a[i]<<"\t";
         start=clock();

        insertion_sort1(a[i]);
    end=clock();
     time_taken = double(end - start)/double(CLOCKS_PER_SEC);
    cout<<time_taken<<setprecision(5)<<"\t";
    start=clock();

        insertion_sort(a[i]);
    end=clock();
      time_taken = double(end - start)/double(CLOCKS_PER_SEC);
    cout<<time_taken<<setprecision(5)<<"\t";
    start=clock();

        insertion_sort2(a[i]);
    end=clock();
     time_taken = double(end - start)/double(CLOCKS_PER_SEC);
      cout<<time_taken<<setprecision(5)<<"\t"<<endl;
   }




}

int main()
{
    int num,n;
   time_t start, end;
   double time_taken;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    cout<<"\n0. Quit"<<"\n1. n Random numbers=>Array"<<"\n2. Display the Array"<<
        "\n3. Sort the Array in Ascending Order by using Insertion Sort Algorithm"<<
        "\n4. Sort the Array in Descending Order by using any sorting algorithm"<<
        "\n5. Time Complexity to sort ascending of random data"<<
        "\n6. Time Complexity to sort ascending of data already sorted in ascending order"<<
        "\n7. Time Complexity to sort ascending of data already sorted in descending order"<<
        "\n8. Time Complexity to sort ascending of data for all Cases (Data Ascending, Data in Descending & Random Data) in Tabular form for values n=5000 to 50000, step=5000\n";
    cout<<"Enter your choice(0-8) : ";
    cin>>num;
    while(num!=0)
    {
        switch(num){

    case 1:
        for(int i=0;i<n;i++)
            arr[i]=rand()%100;

        break;
    case 2:
        cout<<"The array is : ";
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
            break;
    case 3:
           sorting(arr,n);
           cout<<"Sorted array in ascending order : ";
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
            break;
    case 4:
        bubble_sort(arr,n);
        cout<<"Sorted array in decending order : ";
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
            break;
    case 5:

         start=clock();
         sorting(arr,n);
         end=clock();
          time_taken = double(end - start)/double(CLOCKS_PER_SEC);
        cout<<"Time complexity to sort ascending of random data : "<<time_taken<<setprecision(5)<<" sec " <<endl;
        break;
    case 6:sort(arr,arr+n);
        start=clock();
         sorting(arr,n);
         end=clock();
          time_taken = double(end - start)/double(CLOCKS_PER_SEC);
        cout<<"Time complexity to sort ascending of random data : "<<time_taken<<setprecision(5)<<" sec "<<endl;
        break;
    case 7:

        sort(arr,arr+n, greater<int>());
        start=clock();
         sorting(arr,n);
         end=clock();
          time_taken = double(end - start)/double(CLOCKS_PER_SEC);
        cout<<"Time complexity to sort ascending of random data : "<<time_taken<<setprecision(5)<<" sec "<<endl;
        break;
    case 8:
        display();
        break;
    default:
        cout<<"Enter correct choice "<<endl;

        }
        cout<<"Enter your choice(0-8) : ";
        cin>>num;
    }
    cout<<"----------End----------\n";
}
