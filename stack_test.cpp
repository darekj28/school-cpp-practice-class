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

int main() {
    test_push_three_items();
    return 0;
}