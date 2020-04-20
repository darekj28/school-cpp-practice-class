#include "hash_map.h"
#include <iostream>
using namespace std;

HashMap::HashMap(const int capacity){
  capacity_ = capacity;
  size_ = 0;
  hashed_index_vector_ = vector<vector<pair<int,string>>>(capacity_);
}

int HashMap::hash(const int& key) const{
  return key % capacity_;
}
  
bool HashMap::insert(const int& key, const string& s){
  if (size() == capacity_) {
    // Raise exception for being at max capacity.
    // Ideally we would resize.
    cout << "Hashmap at max capacity.";
    return false;
  }
  if (size() == 0){
    hashed_index_vector_[hash(key)].push_back(make_pair(key,s));
    size_+=1;
    return true;
  }
  
    // Otherwise we iterate with separate chaining.
    for (auto it = hashed_index_vector_[hash(key)].begin(); 
        it< hashed_index_vector_[hash(key)].end(); it++){
      if(it->first == key){
        it->second = s;
        return true;
      }
    }
    hashed_index_vector_[hash(key)].push_back(make_pair(key,s));
    size_+=1;
    return true;
 
}
  
string HashMap::find(const int& key, bool* found) const{
  vector<pair<int,string>> currList= hashed_index_vector_[hash(key)];
  for (auto it = currList.begin(); it < currList.end(); it++){
    if (it->first == key){
      *found = true;
      return it->second;
    }
  }
  *found = false;
  return "";
}

int HashMap::size() const{
  return size_;
}
