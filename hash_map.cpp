#include "hash_map.h"
#include <iostream>
using namespace std;

HashMap::HashMap(const int capacity){
  capacity_ = capacity;
  hashed_index_vector_(capacity_,vector<pair<int,int>>);
}

int HashMap::hash(const int& key) const{
  return key % capacity_;
}
  
bool HashMap::insert(const int key, const int value){
  vector<pair<int,int>> currList = hashed_index_vector_[hashFunction(key)];
  if (size() == capacity_) {
    // Raise exception for being at max capacity.
    // Ideally we would resize.
    cout << "Hashmap at max capacity."
  }
  if (size() == 0){
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

int HashMap::size() const{
  return size_;
}