#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout.precision(2);        //set precision
    cout.setf(ios::fixed);
    int i=0,j=0,n,k;
    cout<<"\nEnter the number of values to be entered.\n";
    cin>>n;
    double x[n], y[n][n];            //make an array for x values and an nxn matrix for y and successive difference values, where y[n][0] is for the the y values
    cout<<"\nEnter the values of x\n";
    for (i=0;i<n;i++)            //input x values
        cin>>x[i];
    cout<<"\nEnter the values of y\n";
    for (i=0;i<n;i++)            //input y values in the first column of y matrix
        cin>>y[i][0];
    for (j=1;j<n;j++)            //loop to calculate the difference and store them in the matrix
        for (i=0;i<n-j;i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    cout<<"\n The Forward Difference Table is as follows: \n\n";
    cout<<"x"<<setw(10)<<"y"<<setw(10);    //formatting the output and creating table headings
    for (i=1;i<n;i++)
        cout<<"y"<<i<<setw(10);
    cout<<"\n-----------------------------------------------------------------------\n";

    k=n;
    for (i=0;i<n;i++)            //loop for printing the diagonal matrix on the screen
    {
        cout<<x[i]<<setw(10);
        for (j=0;j<k;j++)
        {
            cout<<y[i][j];
            cout<<setw(10);
        }
        cout<<"\n";
        k--;
    }
return 0;
}
