#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    int A[10][10], T[10][10];
    cout << "Enter matrix: ";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            T[j][i] = A[i][j];

    cout << "Transpose matrix: \n";
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
            cout << T[i][j] << " ";
        cout << endl;
    }
}