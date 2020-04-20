#include "hash_map.h"

#include <iostream>
#include <assert.h>

using namespace std;

void test_add_item_over_capacity() {
	HashMap h = HashMap(/*capacity=*/2);
	h.insert(1,"a");
	assert (h.size() ==1);
	h.insert(2,"b");
	assert (h.size() == 2);
	h.insert(5,"c");
	// this item is not added.
	assert (h.size() == 2);

}

void test_add_two_items_with_collision() {
	HashMap h2 = HashMap(/*capacity=*/5); 
	bool found = false;
	h2.insert(1,"a");
    assert (h2.find(1,&found) == "a");
	assert (found);
	h2.insert(2,"b");
	assert (h2.size() == 2);
	h2.insert(6,"c");
	h2.insert(1,"g");
	assert (h2.size() == 3);
	assert (h2.find(6,&found) == "c");
	assert (found);
	assert (h2.find(1,&found) == "g");
	assert (found);
	assert (h2.find(2,&found) == "b");
	assert (found);
}

int main() {
    test_add_item_over_capacity();
    test_add_two_items_with_collision();
    return 0;
}
