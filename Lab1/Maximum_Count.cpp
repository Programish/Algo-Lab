#include<iostream>
using namespace std;

int main(){
    int max=0;
    int n;
    int max_ele =0;
    int count =1;
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
            }
        }
        if(count>max){
            max=count;
            max_ele=arr[j];
            count =0;
        }
    }
    cout<<"Maximum Element:"<<max_ele;
}
