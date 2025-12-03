#include <iostream>
#include <string>
using namespace std;

#define SIZE 100

class Stack {
    char arr[SIZE];
    int top;

public:
    Stack() { top = -1; }

    void push(char c) {
        if (top < SIZE - 1) {
            arr[++top] = c;
        }
    }

    char pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return '\0';
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);   // now it reads spaces too

    Stack s;

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    cout << "Reversed string: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }
    cout << endl;

    return 0;
}