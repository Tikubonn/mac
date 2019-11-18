#include <test.h>
#include <mac.h>

void test_mac_to_int (){
	test(MAC_TO_INT(0) == 0);
	test(MAC_TO_INT(1) == 1);
	test(MAC_TO_INT(2) == 2);
	test(MAC_TO_INT(0x0) == 0);
	test(MAC_TO_INT(0x1) == 1);
	test(MAC_TO_INT(0x2) == 2);
	test(MAC_TO_INT(0x10) == 16);
	test(MAC_TO_INT(0x11) == 17);
	test(MAC_TO_INT(0x12) == 18);
	test(MAC_TO_INT(0b0) == 0);
	test(MAC_TO_INT(0b1) == 1);
	test(MAC_TO_INT(0b10) == 2);
}
