  #include "tokenizer.h"

using namespace std;
#include <iostream>
#include <vector>

// These are the ASCII values for the boundary characters
// that we will use to check if the character belongs in a word
const int lowNum = 48;
const int highNum = 57;
const int lowAlpha = 65;
const int highAlpha = 122;

bool isValidChar(const char& c){
  // Cast c to its integer representation.
  int val = (int)c;
  if ((val >= 65 && val<=122) || (val>=48 && val <= 57)) {
    return true;
  }
}


vector<string> tokenize(const string& s){
  vector<string> myList;
  int start = -1;
  int count = 1;
  
  for(int i = 0; i< s.size(); i++){
    if (start == -1){
      if (isValidChar(s[i])){
        start = i;
      }
    }
    else{
      if (!isValidChar(s[i])){
        myList.push_back(s.substr(start,count));
        start = -1;
        count = 1;
      }
      else if (i == s.size()-1){
        myList.push_back(s.substr(start,count +1));
      }
      else{
        count +=1;
      }
    }
  }
  return myList;
}
