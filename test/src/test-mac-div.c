#include <test.h>
#include <mac.h>

void test_mac_div (){
	test(MAC_DIV(0, 1) == 0);
	test(MAC_DIV(1, 3) == 0);
	test(MAC_DIV(10, 3) == 3);
	test(MAC_DIV(100, 3) == 33);
}
