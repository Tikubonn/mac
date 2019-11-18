#include <test.h>
#include <mac.h>

void test_mac_greater (){
	test(MAC_GREATER(0, 0) == 0);
	test(MAC_GREATER(1, 0) == 1);
	test(MAC_GREATER(0, 1) == 0);
	test(MAC_GREATER(1, 1) == 0);
}
