#include "stack.h"
#include <iostream>
using namespace std;

Node::Node(const int& val)
  : value(val)
  {}

Stack::Stack(){
  top_ = NULL;
}

Stack::Stack(const Stack& oldStack){
  
  Node* oldNode = oldStack.top_;
  Node* currNode = NULL;
  size_ = oldStack.size();
  
  while (oldNode != NULL){
    Node* newNode = new Node(oldNode->value);
    newNode->next = oldNode->next;
    if (currNode == NULL){
      top_ = newNode;
      currNode = top_;
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
    return top_->value;
  }
  cout << "Error: Attempted to peek from an empty stack\n";
  return 0;
}

void Stack::pop(){
  if (!isEmpty()){
    const int return_val = peek();
    Node* temp = top_;
    top_ = top_->next;
    size--;
    delete temp;
    return return_val;
  }
  else{
    // Could also just throw an error here	
    cout << "Error: Attempted to pop from an empty stack\n";
  }
}

void Stack::push(const int& val){
  size_++;
  Node* newNode = new Node(val);
  newNode->next = top_;
  top_ = newNode;
}

bool Stack::isEmpty() const{
  return (top_ == NULL);
}

int Stack::size() const {
  return size_;
}

Stack::~Stack(){
  Node* curr = top_;
  while(curr != NULL){
    Node* temp = curr;
    curr = curr->next;
    delete temp;
  }
}