#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Reversed array: ";
    for(int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
}