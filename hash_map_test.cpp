#include "hash_map.h"

#include <iostream>
#include <assert.h>

using namespace std;

void test_add_item_over_capacity() {
	HashMap h = HashMap(/*capacity=*/2);
	h.insert(1,2);
	assert (h.size() =1);
	h.insert(2,3);
	assert (h.size() == 2);
	h.insert(5,4);
	// this item is not added.
	assert (h.size() == 2);

}

void test_add_two_items_with_collision() {
	HashMap h = HashMap(/*capacity=*/5); 
	h.insert(1,2);
	h.insert(2,3);
	assert (h.size() == 2);
	h.insert(6,60);
	assert (h.size() == 3);
	assert (h.find(6) == 60);
	assert (h.find(1) == 2);
	assert (h.find(2) == 3);
}

int main() {
    test_add_item_over_capacity();
    test_add_two_items();
    return 0;
}

