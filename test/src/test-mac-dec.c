#include <test.h>
#include <mac.h>

void test_mac_dec (){
	test(MAC_DEC(0) == 0);
	test(MAC_DEC(1) == 0);
	test(MAC_DEC(2) == 1);
	test(MAC_DEC(3) == 2);
}
