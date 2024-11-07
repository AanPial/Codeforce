#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4;
    int ab,ac,bc,abc;
    cin>>x1>>x2>>x3>>x4;
    if(x1>x2 && x1>x3 && x1>x4)
    {
        abc=x1;
        ab=x2;
        ac=x3;
        bc=x4;
    }
    else if(x2>x1 && x2>x3 && x2>x4)
    {
        abc=x2;
        ab=x1;
        ac=x3;
        bc=x4;
    }
    else if(x3>x1 && x3>x2 && x3>x4)
    {
        abc=x3;
        ab=x2;
        ac=x1;
        bc=x4;
    }
    else
    {
        abc=x4;
        ab=x2;
        ac=x3;
        bc=x1;
    }
    int p=ab+ac;
    int a=(p-bc)/2;
    int b=ab-a;
    int c=ac-a;
    cout<<a<<" "<<b<<" "<<c<<endl;
    
    return 0;
}