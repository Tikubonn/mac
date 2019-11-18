#include <test.h>
#include <mac.h>

void test_mac_unequal (){
	test(MAC_UNEQUAL(0, 0) == 0);
	test(MAC_UNEQUAL(1, 0) == 1);
	test(MAC_UNEQUAL(0, 1) == 1);
	test(MAC_UNEQUAL(1, 1) == 0);
}
