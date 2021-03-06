#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int n)

{
    int time=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }

      for(int i=1;i<n;i++)
    {
        time++;
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            time++;
        }
        a[j+1]=key;
    }
   return time;

}
int insertion_sort1(int n)
{
     int time;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=rand()%100;
        sort(a,a+n);
      for(int i=1;i<n;i++)
    {
        time++;
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            time++;
        }
        a[j+1]=key;
    }
    return time;


}
int insertion_sort2(int n)
{
    int a[n];
    int time=0;
    for(int i=0;i<n;i++)
        a[i]=rand()%100;
        sort(a,a+n,greater<int>());
      for(int i=1;i<n;i++)
    {
        time++;
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            time++;
        }
        a[j+1]=key;
    }
    return time;


}
int sorting(int a[],int n)
{
    int time=0;
     for(int i=1;i<n;i++)
    {
        time++;
        int key=a[i];
        int j=i-1;
        while(j>=0&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            time++;
        }
        a[j+1]=key;
    }
    return time;
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
    int time;
    cout<<endl;
    cout<<"\t\t\tTime Complexity to sort ascending of data"<<endl;
    cout<<"SlNo.\tValues\tAscending\t\tDescending\t\t Random"<<endl;
    cout<<"\t\t   Data\t\t\t   Data\t\t\t  Data"<<endl<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<"\t"<<a[i]<<"\t ";
      time=insertion_sort(a[i]);


    cout<<time<<"\t\t ";

     time=insertion_sort2(a[i]);
      cout<<time<<"\t\t  ";

        time=insertion_sort1(a[i]);
    cout<<time<<"\t"<<endl;

   }




}

int main()
{
    int num,n,time;
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
           time= sorting(arr,n);
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
         time= sorting(arr,n);
        cout<<"Time complexity to sort ascending of random data : "<<time<<endl;
        break;
    case 6:
	sort(arr,arr+n);
          time=sorting(arr,n);
        cout<<"Time complexity to sort ascending of random data : "<<time<<endl;
        break;
    case 7:

        sort(arr,arr+n, greater<int>());
          time=sorting(arr,n);
        cout<<"Time complexity to sort ascending of random data : "<<time<<endl;
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
