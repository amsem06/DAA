#include<iostream>
using namespace std;
int c=0;
int func(int arr[],int l,int h,int k)
{
    int an=arr[h];
    int i=l-1;
    int j=l;
    while(j<=h)
    {
        c++;
        if(arr[j]<=an)
        {
            int tem=arr[++i];
            arr[i]=arr[j];
            arr[j]=tem;
        }
        j++;
    }
    c++;
    if(i==k)
    return arr[i];
    else if(i<k)
    return func(arr,i+1,h,k);
    else
    return func(arr,l,i-1,k);

}
int main()
{
    int t,siz;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        int k;
        cin>>siz;
        int ar[siz];
        for(int j=0;j<siz;j++)
        cin>>ar[j];
        cin>>k;
       int ans= func(ar,0,(siz-1),k);
        cout<<ans<<endl;
        cout<<"COMPARISION: "<<c<<endl;
    }
    return 0;
}
