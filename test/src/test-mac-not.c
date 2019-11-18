#include <test.h>
#include <mac.h>

void test_mac_not (){
	test(MAC_NOT(0) == 1);
	test(MAC_NOT(1) == 0);
	test(MAC_NOT(2) == 0);
}
