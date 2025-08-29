#include <iostream>
#include <stack>
using namespace std;

int prec(char op){
    if(op=='+'||op=='-') return 1;
    if(op=='*'||op=='/') return 2;
    return 0;
}

int main() {
    string in, post="";
    cout << "Enter infix: ";
    cin >> in;
    stack<char> st;

    for(char c: in){
        if(isalnum(c)) post+=c;
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(st.top()!='('){ post+=st.top(); st.pop(); }
            st.pop();
        }
        else{
            while(!st.empty() && prec(st.top())>=prec(c)){
                post+=st.top(); st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){ post+=st.top(); st.pop(); }

    cout << "Postfix: " << post << endl;
    return 0;
}
