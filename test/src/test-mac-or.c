#include <test.h>
#include <mac.h>

void test_mac_or (){
	test(MAC_OR(0, 1) == 1);
	test(MAC_OR(1, 2) == 1);
	test(MAC_OR(2, 3) == 2);
}
