#include <test.h>
#include <mac.h>

void test_mac_inc (){
	test(MAC_INC(0) == 1);
	test(MAC_INC(1) == 2);
	test(MAC_INC(2) == 3);
	test(MAC_INC(3) == 4);
}
