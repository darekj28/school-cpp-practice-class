#include "hash_map.h"
#include <iostream>
using namespace std;

HashMap::HashMap(const int& capac){
  capacity_ = capac;
  hashed_index_vector_(capacity_,vector<pair<int,int>>);
}

int HashMap:: hashFunction(const int& key) const{
  return key % capacity_;
}
  
bool HashMap::insert(const int& key, const int& value){
  vector<pair<int,int>> currList = hashed_index_vector_[hashFunction(key)];
  if (currList.size() == 0){
    currList.push_back(make_pair(key,value));
    size_+=1;
    return false;
  }
  else{
    for (auto it = currList.begin(); it< currList.end(); it++){
      if(it->first == key){
        it->second = value;
        return true;
      }
    }
    currList.push_back(make_pair(key,value));
    size_+=1;
    return true;
  }  
}
  
int HashMap::find(const int& key, bool* found) const{
  vector<pair<int,int>> currList= hashed_index_vector_[hashFunction(key)];
  for (auto it = currList.begin(); it < currList.end(); it++){
    if (it->first == key){
      *found = true;
      return it->second;
    }
  }
  *found = false;
  return 0;
}

int HashMap::getSize() const{
  return this->size_;
}