#include "stack.h"
#include <iostream>
using namespace std;

Node::Node(const int& val)
  : value(val)
  {}

Stack::Stack(){
  top = NULL;
}

Stack::Stack(const Stack& oldStack){
  
  Node* oldNode = oldStack.top;
  Node* currNode = NULL;
  
  while (oldNode != NULL){
    Node* newNode = new Node(oldNode->value);
    newNode->next = oldNode->next;
    if (currNode == NULL){
      top = newNode;
      currNode = top;
    }
    else{
      currNode->next = newNode;
      currNode = currNode->next;
    }
    oldNode = oldNode->next;
  }
}


int Stack::peek() const{
  if (!isEmpty()){
    return top->value;
  }
  cout << "Error: Attempted to peek from an empty stack\n";
  return 0;
}

void Stack::pop(){
  if (!isEmpty()){
    Node* temp = top;
    top = top->next;
    delete temp;
  }
  else{
    // Could also just throw an error here	
    cout << "Error: Attempted to pop from an empty stack\n";
  }
}

void Stack::push(const int& val){
  Node* newNode = new Node(val);
  newNode->next = top;
  top = newNode;
}

bool Stack::isEmpty() const{
  return (top == NULL);
}

Stack::~Stack(){
  Node* curr = top;
  while(curr != NULL){
    Node* temp = curr;
    curr = curr->next;
    delete temp;
  }
}