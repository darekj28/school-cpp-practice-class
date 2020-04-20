/* Hashmap implemented using a vector of key-value pairs.
   Separate chaining is used for collisions 
 */

#include <iostream>
using namespace std;

class HashMap{

  private:
  
    vector<vector<pair<int,int>> hashed_index_vector_;
    int size;

  public:
    HashMap();
    
    const int hashSize = 100000;
    int hashFunction(const int& key) const;
    bool insert(const int& key, const int& value);
    int find(const int& key, bool* found) const;
    int getSize() const;
};