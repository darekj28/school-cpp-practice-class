/* Hashmap implemented using a vector of key-value pairs.
   Separate chaining is used for collisions 
 */

#include <iostream>
using namespace std;

class HashMap{

  private:
  
    // Vector of vectors to store our key-value pairs.
    // Since we use separate chaining, we store a vector of vectors.
    vector<vector<pair<int,int>>> hashed_index_vector_;

    // Capacity of this hashmap.
    int capacity_;

    // Number of elements in this hashmap.
    int size_;

    // Hashes our integer key.
    int hash(const int& key) const;

  public:

    // Initializes a hashmap with a fixed capacity.
    HashMap(const int capacity);

    // Inserts this key/value pair into the hash table.
    bool insert(const int& key, const int& value);

    // Searches for the given key in the hashmap.
    // Returns the value for the given key. If the 
    // key doesn't exist, found will be set to false.
    int find(const int& key, bool* found) const;

    // Returns the number of elements in the hashmap.
    int size() const;
};