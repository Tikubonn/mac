#include <test.h>
#include <mac.h>

void test_mac_if (){
	test(MAC_IF(0, 1, 2) == 2);
	test(MAC_IF(1, 2, 3) == 2);
	test(MAC_IF(2, 3, 4) == 3);
}
