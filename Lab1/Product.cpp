#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int a[n],p=1;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p=p*a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=p/a[i];
        cout<<a[i]<<" ";
    }

}
