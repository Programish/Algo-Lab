#include<bits/stdc++.h>
using namespace std;
int occur1(int arr[],int n)
{
    int maximum=0,index=-1,count=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count>maximum)
        {
            maximum=count;
            index=i;
        }
    }

        if(maximum>n/2)
            cout<<arr[index]<<" occur more than n/2 times. "<<endl;
       else
        cout<<"No elements are there which occur more than n/2 times "<<endl;

    return 0;

}
int occur2(int arr[],int n)
{
    int count=1,index=0,c=0;
     for (int i = 1; i < n; i++) {
        if (arr[index] == arr[i])
            count++;
        else
            count--;
        if (count == 0) {
            index = i;
            count = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[index]==arr[i])
            c++;
    }
    if(c>n/2)
    {
            cout<<arr[index]<<" occur more than n/2 times. "<<endl;

    }
    else
        cout<<"No elements are there which occur more than n/2 times "<<endl;
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    occur1(arr,n);

    occur2(arr,n);

    return 0;

}
