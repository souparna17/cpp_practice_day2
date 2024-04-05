// Including input output libraries
#include <iostream>
// Header File including all string functions
#include <string>
 
using namespace std;
 
#define SIZE 5
 
template <class T> 
class Stack {
	private:
    // Taking data member top
    int top;
     // Initialising stack(array) of given size
    T st[SIZE];

public:
     Stack()
	  { top = -1;
	  }
    void push(T k)
    {
 
    // Checking whether stack is completely filled
    if (isFull()) {
        // Display message when no elements can be pushed
        // into it
        cout << "Stack is full\n";
    }
 
    // Inserted element
    cout << "Inserted element " << k << endl;
 
  
    top = top + 1;
 
    // Now, adding element to stack
    st[top] = k;
}
   bool isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

   bool isFull()
    {
    // Till top in inside the stack
    if (top == (SIZE - 1))
        return 1;
    else
 
        // As top can not exceeds th size
        return 0;
}
 
       T pop()
       {
    // Initialising a variable to store popped element
    T popped_element = st[top];
 
    // Decreasing the top as
    // element is getting out from the stack
    top--;
 
    // Returning the element/s that is/are popped
    return popped_element;
}
 
    // To print top element in stack using peek() method
    T topElement()
    {
    // Initialising a variable to store top element
    T top_element = st[top];
 
    // Returning the top element
    return top_element;
}
 
 

 
 

};

int main()
{
 
    Stack<int> integer_stack;
    Stack<string> string_stack;
    integer_stack.push(2);
    integer_stack.push(54);
    integer_stack.push(255);
 
     string_stack.push("Welcome");
    string_stack.push("to");
    string_stack.push("cpp");
 
       cout << integer_stack.pop() << " is removed from stack"
         << endl;
 
    
    cout << string_stack.pop() << " is removed from stack "
         << endl;
 
       cout << "Top element is " << integer_stack.topElement()
         << endl;
 
    // Print and display the top element in string stack
    cout << "Top element is " << string_stack.topElement()
         << endl;
 
    return 0;
}
