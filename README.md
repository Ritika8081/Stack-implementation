# stack-implementation

This is a basic Stack implementation using arrays in C++. A stack is a linear data structure that follows the Last In First Out (LIFO) principle. Here, we provide the fundamental functionalities of a stack: push, pop, get the top element, check if it's empty, and get its size.

# Features:
push(int data): To insert an item into the stack.
pop(): To remove the top item from the stack.
getTop(): To get the top item from the stack.
getsize(): To get the current size of the stack.
isempty(): To check if the stack is empty.
Implementation Details:
The stack is implemented using a dynamic array, and the size of the stack is defined at the time of object creation. It also includes checks for stack overflow (when trying to push to a full stack) and stack underflow (when trying to pop from an empty stack).

# Usage:

Stack s(10); // Create a stack of size 10
s.push(45);
s.push(48);
cout<<s.getTop()<<endl;  // Should print 48
s.pop();
cout<<s.getTop()<<endl;  // Should print 45
# Limitations:
The size of the stack is fixed at the time of creation. If you try to push more items than the defined size, it will result in a stack overflow.
The stack is designed to hold integer values. For other data types, the implementation would need adjustments.
To create an actual README file, you'd typically write this content into a file named README.md in the root directory of your project.
