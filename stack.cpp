#include <iostream>
using namespace std;

#include "Stack.h"

Node::Node(const int& val){
  value(val);
}

Stack::Stack(){
  top = NULL;

int Stack::peek() const{
  if (!isEmpty()){
    return top->value;
  }
}

void Stack::pop(){
  if (!isEmpty()){
    Node* temp = top;
    top = top->next;
    delete temp;
  }
  else{
    cout << "Error: Attempted to pop from an empty stack";
}

void Stack::push(int val){
  Node* newNode = new Node(val);
  newNode->next = top;
  top = newNode;
}

bool Stack::isEmpty() const{
  return (top == NULL);
}
    