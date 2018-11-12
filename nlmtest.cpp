#include<bits/stdc++.h>
using namespace std;

const int SIZE = 7;

int main()

{
    int SIZE,i;
    cin>>SIZE;
    double intArray[SIZE],n=1/3.0,p;
    for(i=0; i<SIZE; i++){

        cin>>p;
        intArray[i]=abs((n-p));
    }

    sort(intArray, intArray + SIZE);
    cout << "Sorted Array looks like this." << endl;

    for (i = 0; i != SIZE; ++i)

        cout << intArray[i] << " ";

      cout<<"smallest ="<<intArray[0];


    return 0;

}


