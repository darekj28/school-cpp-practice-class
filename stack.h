#include <iostream>
using namespace std;

class Stack{
  
  struct Node{
    int value;
    Node* next;
    Node(const int& val){
      value(val);
  };
  
  Node* top;
  
  public:
    
    Stack(){
      top = NULL
    }
  
  int peek();
  void pop();
  void push(cons int& val);
  bool isEmpty();
  
};
    