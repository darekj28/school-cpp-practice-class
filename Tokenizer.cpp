using namespace std;

void Tokenizer(string s){
  vector<string> myList;
  int start = -1;
  int count = 1;
  
  for(int i = 0; i< s.size(); i++){
    int val = (int)s[i];
    if (start == -1){
      if ((val >= 65 && val<=122) || (val>=48 && val <= 57) ){
        start = i;
      }
    }
    else{
      if !((val >= 65 && val<=122) || (val>=48 && val <= 57) ){
        myList.push_back(s.substr(start,count));
        start = -1;
        count = 1;
      }
      else{
        count +=1;
      }
    }
  }
  return myList;
}