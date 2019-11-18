#include <test.h>
#include <mac.h>

void test_mac_lshift (){
	test(MAC_LSHIFT(0, 0) == 0);
	test(MAC_LSHIFT(0, 4) == 0);
	test(MAC_LSHIFT(0, 8) == 0);
	test(MAC_LSHIFT(1, 0) == 1);
	test(MAC_LSHIFT(1, 4) == 16);
	test(MAC_LSHIFT(1, 8) == 255);
}
