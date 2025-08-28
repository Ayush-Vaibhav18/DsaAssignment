#include <iostream>
#include <string>
using namespace std;

#define SIZE 100

char stackArr[SIZE];
int top = 0;   // start from 0 now

void push(char c) {
    stackArr[top++] = c;   // use top++, correct
}

char pop() {
    return stackArr[--top];  // use --top, correct
}

bool isEmpty() {
    return top == 0;
}

bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(string exp) {
    for (char c : exp) {
        if (c == '(' || c == '{' || c == '[') {
            push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (isEmpty() || !isMatchingPair(pop(), c)) {
                return false;
            }
        }
    }
    return isEmpty();
}

int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;

    if (isBalanced(exp))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}