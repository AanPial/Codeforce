#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x=n/m;
    int y=n-(x*m);
    int z1=(x*b)+(y*a);
    int z2 = ((n + m - 1) / m) * b;
    int z3=n*a;
    cout<<min({z1,z2,z3})<<endl;
    return 0;
}