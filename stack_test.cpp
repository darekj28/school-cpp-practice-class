#include "stack.h"

#include <iostream>
#include <assert.h>

using namespace std;

void test_push_three_items() {
  Stack s = Stack();
  s.push(1);
  s.push(2);
  s.push(3);
  assert (s.pop() == 3);
  assert (s.pop() == 2);
  assert (s.pop() == 1);

}

void test_pop_from_empty(){
  Stack s = Stack();
  s.pop();
}

void test_copy_stack(){
  Stack s1 = Stack();
  s1.push(1);
  s1.push(2);
  s1.push(3);
  Stack s2 = Stack(s1);
  s1.pop();
  assert (s2.pop() == 3);
  assert (s2.pop() == 2);
  assert (s2.pop() == 1);
}

int main() {
  test_push_three_items();
  test_pop_from_empty();
  test_copy_stack();
  return 0;
}