#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    string s;
    while(n>0)
    {
        cin>>s;
        if(s=="Tetrahedron")
        {
            sum+=4;
        }
        else if(s=="Cube")
        {
            sum+=6;
        }
        else if(s=="Octahedron")
        {
            sum+=8;
        }
        else if(s=="Dodecahedron")
        {
            sum+=12;
        }
        else if(s=="Icosahedron")
        {
            sum+=20;
        }
        n--;
    }
    cout<<sum<<endl;
    return 0;
}