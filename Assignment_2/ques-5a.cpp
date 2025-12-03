#include<iostream>
using namespace std;
#define N 4
int main()
{
    int a[N];
    cout<<"Enter "<<N<<" diagonal elements:\n";
    for(int i=0;i<N;i++)
    {
      cin>>a[i];
    }
    cout<<"\nDiagonal matrix:\n";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<(i==j ? a[i] : 0)<<" "; //if i==j is true print a[i] else false print 0
        }    
        cout<<endl;
    }
}
