#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter number of non-zero elements: ";
    cin >> n;

    int mat[n][3];
    cout << "Enter row, col, value for each non-zero element:\n";
    for(int i=0;i<n;i++)
        cin >> mat[i][0] >> mat[i][1] >> mat[i][2];

    cout << "\nTranspose:\n";
    for(int i=0;i<n;i++)
        cout << mat[i][1] << " " << mat[i][0] << " " << mat[i][2] << endl;

    return 0;
}
