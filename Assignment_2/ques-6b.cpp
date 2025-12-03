#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter number of non-zero elements in first matrix: ";
    cin >> n1;
    int a[n1][3];
    cout << "Enter row, col, value for first matrix:\n";
    for(int i=0;i<n1;i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2];

    cout << "Enter number of non-zero elements in second matrix: ";
    cin >> n2;
    int b[n2][3];
    cout << "Enter row, col, value for second matrix:\n";
    for(int i=0;i<n2;i++)
        cin >> b[i][0] >> b[i][1] >> b[i][2];

    cout << "\nSum of matrices (row col value):\n";
    int i=0,j=0;
    while(i<n1 && j<n2) {
        if(a[i][0]<b[j][0] || (a[i][0]==b[j][0] && a[i][1]<b[j][1])) {
            cout << a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
            i++;
        } else if(b[j][0]<a[i][0] || (a[i][0]==b[j][0] && b[j][1]<a[i][1])) {
            cout << b[j][0]<<" "<<b[j][1]<<" "<<b[j][2]<<endl;
            j++;
        } else { // same row & col
            cout << a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]+b[j][2]<<endl;
            i++; j++;
        }
    }
    while(i<n1) { cout << a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl; i++; }
    while(j<n2) { cout << b[j][0]<<" "<<b[j][1]<<" "<<b[j][2]<<endl; j++; }

    return 0;
}
