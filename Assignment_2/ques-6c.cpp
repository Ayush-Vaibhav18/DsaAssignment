#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2,n1,n2;
    cout<<"Enter rows and cols of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter number of non-zero elements in first matrix: ";
    cin>>n1;
    int a[n1][3];
    cout<<"Enter row col value:\n";
    for(int i=0;i<n1;i++) cin>>a[i][0]>>a[i][1]>>a[i][2];

    cout<<"Enter rows and cols of second matrix: ";
    cin>>r2>>c2;
    if(c1!=r2){ cout<<"Multiplication not possible"; return 0;}
    cout<<"Enter number of non-zero elements in second matrix: ";
    cin>>n2;
    int b[n2][3];
    cout<<"Enter row col value:\n";
    for(int i=0;i<n2;i++) cin>>b[i][0]>>b[i][1]>>b[i][2];

    cout<<"\nProduct (row col value):\n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i][1]==b[j][0]) // col of A == row of B
                cout<<a[i][0]<<" "<<b[j][1]<<" "<<a[i][2]*b[j][2]<<endl;
        }
    }
    return 0;
}
