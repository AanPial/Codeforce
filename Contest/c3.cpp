#include<bits/stdc++.h>
using namespace std;
struct mountain{
    string name;
    int heigth;
};
bool compare(mountain &A1,mountain &A2)
{
    if(A1.heigth>A2.heigth)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    mountain arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].name;
        cin>>arr[i].heigth;
    }
    sort(arr,arr+n,compare);
    cout<<arr[1].name<<endl;

    return 0;
}