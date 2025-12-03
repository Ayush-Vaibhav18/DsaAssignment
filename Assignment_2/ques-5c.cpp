#include<iostream>
using namespace std;
#define n 4
int main()
{
    int a[n*(n+1)/2], k=0;
    cout<<"Enter "<<n*(n+1)/2<<" elements :\n";
    for(int i=0;i<n*(n+1)/2;i++) 
    {
        cin>>a[i];
    }
    cout<<"\nLower triangular matrix:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i) 
            {
                cout<<a[k++]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
