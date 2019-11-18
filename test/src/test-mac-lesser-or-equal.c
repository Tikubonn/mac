#include <test.h>
#include <mac.h>

void test_mac_lesser_or_equal (){
	test(MAC_LESSER_OR_EQUAL(0, 0) == 1);
	test(MAC_LESSER_OR_EQUAL(1, 0) == 0);
	test(MAC_LESSER_OR_EQUAL(0, 1) == 1);
	test(MAC_LESSER_OR_EQUAL(1, 1) == 1);
}
