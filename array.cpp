#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"enter the size of array. "<<endl;
    cin>>n;

    int arr[n];

cout<<"enter "<<n<<"element "<<endl;
for(i=0;i<n;i++)
{

    cin>>arr[i];
}

cout<<"array elements are :"<<endl;
for(i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}