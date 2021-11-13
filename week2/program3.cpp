#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<pair<int,int>> a;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int t=k+v[i];
            auto it=find(v.begin(),v.end(),t);
            if(it==v.end())
                continue;
            else
            {
                int c=abs(it-v.begin());
                int b=v[i];
                int d=v[c];
                a.push_back({b,d});
            }
        }
        for(auto i:a)
            cout<<i.first<<" "<<i.second<<"\n";
        cout<<endl;
    }
    return 0;
}
