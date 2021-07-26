#include<iostream>
using namespace std;

int main(){
    int max, min, n;
    cout<<"Enter the Size of the Array";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    max = arr[0];
    min=arr[0];
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }
    }
    cout<<"Largest number is :"<<max<<endl;
    cout<<"Smallest number is :"<<min<<endl;
}
