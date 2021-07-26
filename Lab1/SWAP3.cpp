#include<iostream>
using namespace std;

void Swap(char *x, char *y){
    char temp = *x;
    *x = *y;
    *y = temp;
}

void Rotate(char arr[]){
    Swap(&arr[0], &arr[1]);
    Swap(&arr[0], &arr[2]);
}

int main()
 {
    char arr[3];
    cout<<"Enter the Elements of the Array";
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    
    Rotate(arr);
    
    for(int j=0;j<3;j++){
        cout<<arr[j]<<" ";
    }
}
