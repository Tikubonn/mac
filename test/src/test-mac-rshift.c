#include <test.h>
#include <mac.h>

void test_mac_rshift (){
	test(MAC_RSHIFT(0xff, 0) == 0xff);
	test(MAC_RSHIFT(0xff, 4) == 0xf);
	test(MAC_RSHIFT(0xff, 8) == 0);
}
