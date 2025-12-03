#include<iostream>
using namespace std;
#define N 4
int main()
{
    int a[N][N];
    cout<<"Enter upper triangle elements :\n";
    for(int i=0;i<N;i++)
        for(int j=i;j<N;j++)
        {
            cin>>a[i][j];
            a[j][i]=a[i][j]; // mirror to lower
        }
    cout<<"\nSymmetric matrix:\n";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
