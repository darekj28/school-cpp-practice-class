using namespace std;
#include <iostream>
#include <vector>

// Helper function to decide whether or not a character
// is valid in a word
bool isValidChar(const char& c);


// Tokenizes a string into it's words and characters.
// E.g. "This is a sentence with a numb3r"
// becomes ["This", "is" ,"a", "sentence", "with" "a" ,"numb3r"]
vector<string> tokenize(const string& s);