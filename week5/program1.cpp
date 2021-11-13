#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    char c;
    int index = -1;
    int max = INT_MIN;
    int a[26]={0};
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        a[c-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max)
        {
            index = i;               
            max = a[i];
        }
    }
    if (max>1)
        cout<<char('a' + index) <<" with occurance:"<<a[index]<<endl;
    else
        cout<<"No duplicates"<< endl;
}
