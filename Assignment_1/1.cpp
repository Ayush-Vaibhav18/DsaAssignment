#include <iostream>
using namespace std;

const int MAX_SIZE = 100;  // Maximum array size

void create_array(int arr[], int &size) {
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size > MAX_SIZE) {
        cout << "Array size exceeds the maximum allowed size of " << MAX_SIZE << endl;
        size = 0;
        return;
    }

    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void display_array(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty!" << endl;
    } else {
        cout << "Array elements: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void insert_element(int arr[], int &size) {
    if (size >= MAX_SIZE) {
        cout << "Array is full, cannot insert new element." << endl;
        return;
    }

    int element, position;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position to insert at (0 to " << size << "): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = size; i > position; --i) {
            arr[i] = arr[i - 1];  // Shift elements to the right
        }
        arr[position] = element;
        ++size;  // Increase the size of the array
        cout << "Element " << element << " inserted at position " << position << endl;
    }
}

void delete_element(int arr[], int &size) {
    if (size == 0) {
        cout << "Array is empty, nothing to delete!" << endl;
        return;
    }

    int position;
    cout << "Enter position to delete from (0 to " << size - 1 << "): ";
    cin >> position;

    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = position; i < size - 1; ++i) {
            arr[i] = arr[i + 1];  // Shift elements to the left
        }
        --size;  // Decrease the size of the array
        cout << "Element at position " << position << " deleted." << endl;
    }
}

void linear_search(int arr[], int size) {
    int element;
    cout << "Enter element to search for: ";
    cin >> element;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            cout << "Element " << element << " found at position " << i << endl;
            return;
        }
    }
    cout << "Element " << element << " not found." << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;  // Initial size of the array
    int choice;

    while (true) {
        cout << "\n----- MENU -----" << endl;
        cout << "1. CREATE" << endl;
        cout << "2. DISPLAY" << endl;
        cout << "3. INSERT" << endl;
        cout << "4. DELETE" << endl;
        cout << "5. LINEAR SEARCH" << endl;
        cout << "6. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                create_array(arr, size);
                break;
            case 2:
                display_array(arr, size);
                break;
            case 3:
                insert_element(arr, size);
                break;
            case 4:
                delete_element(arr, size);
                break;
            case 5:
                linear_search(arr, size);
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
