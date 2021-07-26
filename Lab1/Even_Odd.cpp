#include<iostream>
using namespace std;
 
void EvenOdd(int nums[], int size)
{
    int left_num = 0, right_num = size-1;
    while (left_num < right_num)
    {
         while (nums[left_num]%2 == 0 && left_num < right_num)
            left_num++;
 
        while (nums[right_num]%2 == 1 && left_num < right_num)
            right_num--;
 
        if (left_num < right_num)
        {
            int temp =nums[left_num];
            nums[left_num] = nums[right_num];
            nums[right_num] = temp;
            left_num++;
            right_num--;
        }
    }
}
 
 
int main()
{
    int n;
    cout<<"Enter the Size of the Array";
    cin>>n;
    int nums[n];
    cout<<"Enter the Elements of the Array";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    
    EvenOdd(nums, n);
    
    cout<<endl;
    cout<<"Array after divided: ";
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
}
