#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[8] = {6, 5, 3, 1, 8, 7, 2, 4}, i, j, n, temp;
    n = 8;
    for( i=1; i<n; i++)
    {
        temp = a[i];
        printf("t=%d ",temp);
        printf("\n");

        j = i-1;
        printf("j=%d ",j);

        while(a[j]>temp && j>=0)
        {
            a[j+1] = a[j];
            printf("a[j]=%d \n",a[j]);
            j--;
            printf("j=%d \n",j);
        }
        a[j+1] = temp;
    }
     printf("\n");
    for(i=0; i<n; i++)
        cout << a[i] << " ";

}

