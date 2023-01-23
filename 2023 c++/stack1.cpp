#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    std::cout << "Stack top before pop: " << myStack.top() << std::endl;

    myStack.pop();

    std::cout << "Stack top after pop: " << myStack.top() << std::endl;

    return 0;
}
// In C++, the pop() function is used to remove the top element from a stack. The pop() function is a member function of the STL stack container class, and it does not take any parameters. Here is an example of how to use the pop() function on a stack:

