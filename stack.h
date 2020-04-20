#include <iostream>
using namespace std;

struct Node{
  int value;
  Node* next;
  Node(const int& val);
};

class Stack{
  
  private:
    Node* top;
  
  public:
    
    Stack();
    Stack(const Stack& oldStack);  
    int peek() const;
    void pop();
    void push(const int& val);
    bool isEmpty() const;
    
    ~Stack();
};

