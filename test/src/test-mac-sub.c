#include <test.h>
#include <mac.h>

void test_mac_sub (){
	test(MAC_SUB(2, 1) == 1);
	test(MAC_SUB(20, 10) == 10);
	test(MAC_SUB(1, 1) == 0);
	test(MAC_SUB(10, 10) == 0);
	test(MAC_SUB(100, 100) == 0);
	test(MAC_SUB(1, 2) == 0);
	test(MAC_SUB(10, 20) == 0);
}
