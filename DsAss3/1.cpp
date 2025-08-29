#include <iostream>
using namespace std;

#define SIZE 100   // Maximum size of stack

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == SIZE - 1) {
            cout << "Stack is FULL!\n";
        } else {
            top++;
            arr[top] = x;
            cout << x << " pushed.\n";
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is EMPTY!\n";
        } else {
            cout << arr[top] << " popped.\n";
            top--;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is EMPTY!\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void isEmpty() {
        if (top == -1)
            cout << "Stack is EMPTY.\n";
        else
            cout << "Stack is NOT EMPTY.\n";
    }

    void isFull() {
        if (top == SIZE - 1)
            cout << "Stack is FULL.\n";
        else
            cout << "Stack is NOT FULL.\n";
    }

    void display() {
        if (top == -1) {
            cout << "Stack is EMPTY!\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. isEmpty\n";
        cout << "5. isFull\n";
        cout << "6. Display\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.isEmpty();
                break;
            case 5:
                s.isFull();
                break;
            case 6:
                s.display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}