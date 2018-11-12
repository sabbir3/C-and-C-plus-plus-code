
#include <iostream>
#include <conio.h>
using namespace std;

class divide
{
public:
    void askP();
    void askX();
    void askF();
    void askXX();
    void diffTable();
    void calcP();
private:
    double XX, x[10] , f[10][10] , p[10],diff[5][5],P1;
    int n;

};

void divide::askP()
{
    cout << "Enter n: ";
    cin >> n;
}

void divide::askX()
{
    cout << endl;
    for(int i = 0; i<n; i++ )
    {
        cout << "ENter X[" << i  << "] : ";
        cin >> x[i];
    }
    cout << endl;
}

void divide::askF()
{

    for(int j = 0; j<n; j++ )
    {
        cout << "ENter F[" << j  << "] : ";
        cin >> f[0][j];
    }
    cout << endl;
}
void divide::askXX()
{

    cout << "Enter X: ";
    cin >> XX;
}

void divide::diffTable()
{
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j< n-i;j++)
        {
            f[i][j] = (f[i-1][j+1]-f[i-1][j])/(x[i+j]-x[j]);
        }
    }
    cout << endl;
    cout << "Sn\tXi\tf(Xi)\t";
    for(int i = 0; i <n-1;i++)
    {
        cout << i+1 << " diff\t";
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
         cout <<i+1 <<"\t" << x[i]<< "\t";
        for(int j = 0; j< n-i;j++)
        {
            cout  << f[j][i] << "\t";
        }
        cout << endl;
    }
}

void divide::calcP()
{
    P1 = 0;
    for(int i = 0;i<n;i++)
    {
        double k = 1;
        for(int j = 0; j<i;j++)
        {
            k*=  (XX - x[j]);
        }
        P1 += k * f[i][0];

    }
    cout <<endl << "The value of P" << n-1 << "(" << XX << "): "  <<P1 << endl << endl;
}
int main()
{

    divide d1;
    d1.askP();
    d1.askX();
    d1.askF();
    d1.askXX();
    d1.diffTable();
    d1.calcP();

}
