#include <test.h>
#include <mac.h>

void test_mac_and (){
	test(MAC_AND(0, 1) == 0);
	test(MAC_AND(1, 2) == 2);
	test(MAC_AND(2, 3) == 3);
}
