#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    double i;
    for(i=0.01;i*i<n;i=i+0.01);


    cout<<"Square root of "<<n<<" = "<<i<<endl;


}
