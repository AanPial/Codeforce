#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k, l;
    cin >> k;
    int arr1[k];
    for(int i = 0; i < k; i++)
    {
        cin >> arr1[i];
    }
    cin >> l;
    int arr2[l];
    for(int i = 0; i < l; i++)
    {
        cin >> arr2[i];
    }
    int u = k + l;
    int mrr[u];
    int j = 0;
    for(int i = 0; i < k; i++)
    {
        mrr[j] = arr1[i];
        j++;
    }
    for(int i = 0; i < l; i++)
    {
        mrr[j] = arr2[i];
        j++;
    }
    sort(mrr,mrr+u);
    int sum=0;
    for(int i = 0; i < u; i++)  
    {
        if(mrr[i]!=mrr[i-1])
        {
            sum+=mrr[i];
        } 
        else
        {
            continue;
        }
    }
    int total=(n*(n+1))/2;
    if(sum==total)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}
