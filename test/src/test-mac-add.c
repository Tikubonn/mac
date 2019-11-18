#include <test.h>
#include <mac.h>

void test_mac_add (){
	test(MAC_ADD(0, 0) == 0);
	test(MAC_ADD(1, 2) == 3);
	test(MAC_ADD(10, 20) == 30);
}
