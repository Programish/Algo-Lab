#include<bits/stdc++.h>

using namespace std;

int count1=0,count2=0;

int power(int x, unsigned int y)

{

    if (y == 0)

        return 1;

    else if (y % 2 == 0)

    {

        count1++;

        return power(x, y / 2) * power(x, y / 2);

    }



    else

    {

        count1++;

        return x * power(x, y / 2) * power(x, y / 2);

    }

}

int power1(int x, unsigned int y)

{

    int temp;

    if( y == 0)

        return 1;

    temp = power1(x, y / 2);

    if (y % 2 == 0)

    {

        count2++;

     return temp * temp;

    }

    else

    {

        count2++;

     return x * temp * temp;

    }

}

int main()

{



    int a,n;

    cout<<"\n\nEnter the value of a and then n  : ";

    cin>>a>>n;



    int ans=power(a,n);

    int ans1=power1(a,n);

    cout<<"\nResult = "<<ans<<endl;

    cout<<"No. of multiplications made by brute force algorithm : "<<count1<<endl;

    cout<<"No. of multiplications made by divide and conquer algorithm : "<<count2<<endl;



}
