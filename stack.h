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
	
    int peek() const;
    void pop();
    void push(cons int& val);
    bool isEmpty() const;
  
};
    