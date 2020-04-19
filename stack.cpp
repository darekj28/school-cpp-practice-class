#include <iostream>
using namespace std;

#include "Stack.h"

int Stack::peek(){
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
}

void Stack::push(int val){
  Node* newNode = new Node(val);
  newNode->next = top;
  top = newNode;
}

bool Stack::isEmpty(){
  return (top == NULL);
}
    