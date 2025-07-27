#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        long long bags[35];
        for (int i=0;i<n;i++)
        {
            cin>>bags[i];
        }

        sort(bags,bags+n);

        while (1)
        {
            int pos=-1;
            for (int i=0;i<n;i++)
            {
                if (bags[i]<=c)
                {
                    pos=i;
                }
                else
                {
                    break;
                }
            }
            if (pos==-1)
            {
                break;
            }

            for (int i=pos;i<n-1;i++)
            {
                bags[i]=bags[i+1];
            }
            n--;

            for (int i=0;i<n;i++)
            {
                bags[i]=bags[i]*2;
            }

            sort(bags,bags+n);
        }

        cout<<n<<endl;
    }
    return 0;
}
