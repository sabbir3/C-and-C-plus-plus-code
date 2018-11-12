#include<iostream>
using namespace std;

int main()
{
    int arr[6]={6,7,9,5,2,1};
    int i=0,j,temp,n=5;


    for(i=0; i<n-1; i++){
    for(j=i; j<n+1; j++){

        if(arr[i]>arr[j]){

            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(int k=0; k<n; k++)
        cout<<arr[k];
       cout<<"\n";
      }
      cout<<"\n";
    }


    return 0;
}
