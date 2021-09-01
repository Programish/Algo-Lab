#include<bits/stdc++.h>

using namespace std;



void merge(int arr[], int l, int m, int h){



    int n1=m-l+1, n2=h-m;

    int left[n1],right[n2];

    for(int i=0;i<n1;i++)

        left[i]=arr[i+l];

    for(int j=0;j<n2;j++)

        right[j]=arr[m+1+j];

    int i=0,j=0,k=l;

    while(i<n1 && j<n2){

        if(left[i]<=right[j])

            arr[k++]=left[i++];

        else

            arr[k++]=right[j++];

    }

    while(i<n1)

        arr[k++]=left[i++];

    while(j<n2)

        arr[k++]=right[j++];

}

void mergeSort(int arr[],int l,int r){







    if(r>l){

        int m=l+(r-l)/2;

        mergeSort(arr,l,m);

        mergeSort(arr,m+1,r);

        merge(arr,l,m,r);

    }

}

vector<int> max_min(int arr[],int n)

{

    vector<int> v(2,arr[0]);

    for(int i=0;i<n;i++)

    {

        if(arr[i]>v[0])

            v[0]=arr[i];

        if(arr[i]<v[1])

            v[1]=arr[i];

    }

    return v;

}



int main()

{



     int a[]={5000,10000,15000,20000,25000,30000,35000,40000,45000,50000};

    time_t start, end;

    double time_taken;

    string str;

    cout<<endl;

    cout<<"\n\n\tFinding Maximum and Minimum using two algorithms \n"<<endl;

    cout<<"SlNo.\tValues\tBrute_Force\tDivide_Conquer\tResult"<<endl<<endl;

    for(int i=0;i<10;i++)

    {

        int n=a[i];

        int arr[n];

        for(int j=0;j<n;j++)

            arr[j]=rand()%200;



        cout<<i+1<<"\t"<<a[i]<<"\t";

         start=clock();

         mergeSort(arr,0,n-1);

         end=clock();

        time_taken = double(end - start)/double(CLOCKS_PER_SEC);



         cout<<time_taken<<setprecision(5)<<"\t\t";

         start=clock();

         vector<int> v=max_min(arr,n);

         end=clock();

      time_taken = double(end - start)/double(CLOCKS_PER_SEC);

      cout<<time_taken<<setprecision(5)<<"\t\t"<<"max="<<v[0]<<" min="<<v[1]<<endl;



   }



}
