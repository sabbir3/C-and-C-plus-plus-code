#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100],b[100],c[100];
    cin>>a;
    cin>>b;
    cin>>c;

    if(strcmp(a,"vertebrado")==0)
    {
        if(strcmp(b,"ave")==0)
        {
            if(strcmp(c,"carnivoro")==0)
            {
                cout<<"aguia"<<endl;
            }
            else if(strcmp(c,"onivoro")==0)
            {
                cout<<"pomba"<<endl;
            }
        }
        else if(strcmp(b,"mamifero")==0)
        {
            if(strcmp(c,"onivoro")==0)
            {
                cout<<"homem"<<endl;
            }
            else if(strcmp(c,"herbivoro")==0)
            {
                cout<<"vaca"<<endl;
            }
        }
    }
    else if(strcmp(a,"invertebrado")==0)
    {

        if(strcmp(b,"inseto")==0)
        {
            if(strcmp(c,"hematofago")==0)
            {
                cout<<"pulga"<<endl;
            }
            else if(strcmp(c,"herbivoro")==0)
            {
                cout<<"lagarta"<<endl;
            }
        }
        else if(strcmp(b,"anelideo")==0)
        {
            if(strcmp(c,"hematofago")==0)
            {
                cout<<"sanguessuga"<<endl;
            }
            else if(strcmp(c,"onivoro")==0)
            {
                cout<<"minhoca"<<endl;
            }
        }

    }

    return 0;

}
