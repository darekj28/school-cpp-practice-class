int HashMap:: hashFunction(const int& key){
  return key % vector.size();
}
  
bool HashMap::insert(const int& key, const int& value){
  int index = hashFunction(key);
  if (map[index].size() == 0){
    map[index].push_back(make_pair(key,value))
    return false;
  else{
    vector<pair<int,int>> currList = map[index];
    for (auto it = currList.begin(); it< currList.end(); it++){
      if(it->first == key){
        it->second = value;
        return true;
      }
    }
    currList.push_back(make_pair(key,value));
    return true;
  }  
}
  
int HashMap::find(const int& key, bool& found){
  vector<pair<int,int>> currList= map[hashFunction(key)];
  for (auto it = currList.begin(); it < currList.end(); it++){
    if (it->first == key){
      found = true;
      return it->second;
    }
  }
  found = false;
  return 0;
}