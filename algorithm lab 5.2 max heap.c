#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int a[100],i,n,node,root,num,currentNode=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        currentNode++;
        node=currentNode;
        a[node]=num;
        while(node>1)
        {
            root=node/2;
            if(a[root]<a[node])
            {
                swap(a[node],a[root]);
                node=root;
            }
            else
            {
                break;
            }
        }
    }
    for(i=1;i<n+1;i++)
        cout<<a[i]<<" ";
}

