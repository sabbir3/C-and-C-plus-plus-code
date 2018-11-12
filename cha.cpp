#include<iostream>
using namespace std;

int main()
{
    int arr[7]={3,4,5,67,8,9};

    int sum0=arr[0];
    int sum1=arr[0]+arr[1];
    int sum2=sum1+arr[2];
    int sum3=sum2+arr[3];
    int sum4=sum3+arr[4];
    int sum5=sum4+arr[5];



    cout<<arr[0]<<"\n"<<sum1<<"\n"<<sum2<<"\n"<<sum3<<"\n"<<sum4<<"\n"<<sum5<<"\n";
}
