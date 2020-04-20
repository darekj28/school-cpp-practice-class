using namespace std;
#include <iostream>
#include <vector>

// These are the ASCII values for the boundary characters
// that we will use to check if the character belongs in a word
const int lowNum = 48;
const int highNum = 57;
const int lowAlpha = 65;
const int highAlpha = 122;

// Helper function to decide whether or not a character
// is valid in a word
bool isWordChar(const char& c){
  int val = (int)c;
  if ((val >= 65 && val<=122) || (val>=48 && val <= 57){
    return true;
  }
}
vector<string> Tokenizer(const string& s){
  vector<string> myList;
  int start = -1;
  int count = 1;
  
  for(int i = 0; i< s.size(); i++){
    if (start == -1){
      if (isWordChar(s[i]){
        start = i;
      }
    }
    else{
      if (!isWordChar(s[i])){
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
