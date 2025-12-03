#include <iostream>

using namespace std;



int main() {

    int r, c;

    cout << "Enter rows and columns of matrix: ";

    cin >> r >> c;



    int arr[10][10];

    cout << "Enter matrix elements: \n";

    for(int i = 0; i < r; i++) {

        for(int j = 0; j < c; j++) {

            cin >> arr[i][j];

        }

    }



    cout << "\nSum of each row:\n";

    for(int i = 0; i < r; i++) {

        int sum = 0;

        for(int j = 0; j < c; j++) {

            sum += arr[i][j];

        }

        cout << "Row " << i+1 << " = " << sum << endl;

    }



    cout << "\nSum of each column:\n";

    for(int j = 0; j < c; j++) {

        int sum = 0;

        for(int i = 0; i < r; i++) {

            sum += arr[i][j];

        }

        cout << "Column " << j+1 << " = " << sum << endl;

    }

}