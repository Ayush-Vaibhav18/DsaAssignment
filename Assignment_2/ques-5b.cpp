#include<iostream>
using namespace std;
#define MAX 4

int main()
{
    int a[3*MAX-2];   // store main, upper, lower diagonals
    cout<<"Enter "<<3*MAX-2<<" elements:\n";
    for(int i=0;i<3*MAX-2;i++) cin>>a[i];

    cout<<"\nTridiagonal matrix:\n";
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++)
        {
            if(i==j) cout<<a[i]<<" ";                // main diag
            else if(i==j+1) cout<<a[MAX+j]<<" ";       // lower diag
            else if(i+1==j) cout<<a[2*MAX-1+i]<<" ";   // upper diag
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
