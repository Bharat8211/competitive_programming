#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(long long int T=0;T<t;T++)
    {
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        long long int a=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(j==(m-1))
                {
                    if(arr[i][j]=='R')
                    {
                        a++;
                    }
                }
                if(i==(n-1))
                {
                    if(arr[i][j]=='D')
                    {
                        a++;
                    }
                }
            }
        }
        cout<<a<<"\n";
        

        
    }
    return 0;
}
