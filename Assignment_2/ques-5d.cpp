#include<iostream>
using namespace std;
#define MAX 4
int main()
{
    int a[MAX*(MAX+1)/2], k=0;
    cout<<"Enter "<<MAX*(MAX+1)/2<<" elements :\n";
    for(int i=0;i<MAX*(MAX+1)/2;i++) 
    {
        cin>>a[i];
    }
    cout<<"\nUpper triangular matrix:\n";
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            if(j>=i) 
            {
                cout<<a[k++]<<" ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
