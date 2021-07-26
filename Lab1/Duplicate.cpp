#include<iostream>
using namespace std;

int main(){
    int max, n;
    int count =0;
    cout<<"Enter the Size of the Array";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int j=0; j<n; j++)
    {
        for(int k=j+1; k<n; k++)
        {
        if(arr[j] == arr[k])
            {
                count++;
                break;
            }
        }
    }
    cout<<"No. of duplicate elements:"<<count;
}
