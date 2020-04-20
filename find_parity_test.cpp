#include "find_parity.h"

#include <assert.h>

// Tests for find_parity.
int main() {
	assert(findParity(7) == true);
	assert(findParity(8) == true);
	assert(findParity(9) == false);
	assert(findParity(0) == true);
	assert(findParity(1) == true);
	return 0;
}
