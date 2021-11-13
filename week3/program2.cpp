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
        for(int i=0;i<n-1;i++)
        {
            int h=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[h])
                {
                    h=j;
                    c++;
                }
            }
            int temp=arr[i];
            arr[i]=arr[h];
            arr[h]=temp;
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
