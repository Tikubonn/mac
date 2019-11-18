#include <test.h>
#include <mac.h>

void test_mac_mod (){
	test(MAC_MOD(0, 1) == 0);
	test(MAC_MOD(1, 3) == 1);
	test(MAC_MOD(10, 3) == 1);
	test(MAC_MOD(100, 3) == 1);
}
