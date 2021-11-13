#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int c=0,d=0;
        for(int i=1;i<n;i++)
        {
            int v=arr[i];
            int h=i;
            while(h>0 and arr[h-1]>v)
            {
                arr[h]=arr[h-1];
                c++;
                d++;
                h=h-1;
            }
            arr[h]=v;
            d++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparison:"<<c<<endl<<"Shifts:"<<d<<endl;
    }
    return 0;    
}
