#include "tokenizer.h"

#include <assert.h>


// Tests for find_parity.
int main() {
  const string s = "This'  is-a sentence with s0me numbers.";
  const vector<string> expected_output = {"This", "is", "a", "sentence", "with", "s0me", "numbers"};
  auto tokens = tokenize(s);
  
  for (int i = 0; i < tokens.size(); i++) {
    // Print statements for testing.  
    std::cout << tokens[i];
    std::cout << "\n---\n";
    std::cout << expected_output[i];
    std::cout << "\n";
    assert (tokens[i] == expected_output[i]);
  }
  assert (expected_output.size() == tokens.size());
}
