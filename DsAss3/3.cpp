#include <iostream>
#include <string>
using namespace std;

#define SIZE 100

char stackArr[SIZE];
int top = 0;   

void push(char c) {
    stackArr[top++] = c;   
}

char pop() {
    return stackArr[--top];  
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