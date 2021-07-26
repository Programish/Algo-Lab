#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int temp;

    cout<<"How many numbers you want to enter : ";
    cin>>n;

    int array[n];
    
    for (i = 0; i < n; i++)
    {
        cout<<"Enter element :";
        cin>>array[i];
    }

    cout<<"Array entered :"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<array[i];
    }
    cout<<endl;
    for (i = 0; i < n; i += 2)
    {
        if (i + 1 == n)
        {
            break;
        }

        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }

    cout<<"Array after swapping of pair of elements is done :"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<array[i];
    }
}
