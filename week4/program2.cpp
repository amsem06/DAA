#include<iostream>
using namespace std;
int c=0,in=0;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int p(int ar[],int lo,int hi)
{
    int pivt=ar[hi];
    int i=(lo-1);
    for(int j=lo;j<hi;j++)
    {
        c++;
        if(ar[j]<=pivt)
        {
            i++;
            in++;
            swap(&ar[i],&ar[j]);
        }
    }
    
    swap(&ar[i+1],&ar[hi]);
    in++;
    return(i+1);
}
void quickSort(int ar[],int lo,int hi)
{
    int piv;
    if(lo<hi)
    {
        piv=p(ar,lo,hi);
        quickSort(ar,lo,piv-1);
        quickSort(ar,piv+1,hi);
    }
}
int main()
{
    int t,siz;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {

        cin>>siz;
        int ar[siz];
        for(int j=0;j<siz;j++)
        cin>>ar[j];
        quickSort(ar,0,(siz-1));
        for(int j=0;j<siz;j++)
        cout<<ar[j]<<" ";
        cout<<endl;
        cout<<"COMPARISION: "<<c<<endl;
        cout<<"INVERSION: "<<in<<endl;
    }
    return 0;
}
