#include"stack.h"
#include<iostream>
#include<bits/stdc++.h>

int main()
 {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    return 0;
}
