#include <iostream>  
#include <stack>
using namespace std;

void Reverse(char C[], int n){
    stack<char> S;
    for(int i = 0; i < n; i++){
        S.push(C[i]);
    }
    for(int i = 0; i < n; i++){
        C[i] = S.top();
        S.pop();
    }
}

class Stack {
    private: 
        char A[101];
        int top_index;
    public:
        void Push(char x);
        void Pop();
        char top();
        bool isEmpty();
};