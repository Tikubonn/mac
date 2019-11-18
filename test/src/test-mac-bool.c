#include <test.h>
#include <mac.h>

void test_mac_bool (){
	test(MAC_BOOL(0) == 0);
	test(MAC_BOOL(1) == 1);
	test(MAC_BOOL(2) == 1);
	test(MAC_BOOL(3) == 1);
}
