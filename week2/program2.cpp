#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            m[a]++;
        }
        int element;
        cin>>element;
        map<int, int>::iterator itr;
        for (itr = m.begin(); itr != m.end(); ++itr) 
        {
            if(itr->first==element)
            cout<<itr->first<<"-"<<itr->second;
        }
        cout<<endl;
    }
    return 0;
}
