/* Basic stack implementation using LinkedList */

#include <iostream>
using namespace std;


// Helper Node Class.
struct Node{
  int value;
  Node* next;
  Node(const int& val);
};

class Stack{
  
  private:
    // Node variable to store the top of the Stack.
    Node* top_;

    // Number of items on teh stack.
    int size_ = 0;
  
  public:
    
    // Initializes an empty stack.
    Stack();

    // Copy constructor for Stack.
    Stack(const Stack& oldStack);  

    // Returns the top item in the stack.
    int peek() const;

    // Deletes and returns top item in the stack.
    void pop();

    // Pushes val onto the stack.
    void push(const int& val);

    // Boolean returning if stack is empty.
    bool isEmpty() const;

    // Returns number of items on the stack.
    int size() const;
    
    ~Stack();
};

