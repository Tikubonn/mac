#include <test.h>
#include <mac.h>

void test_mac_lesser (){
	test(MAC_LESSER(0, 0) == 0);
	test(MAC_LESSER(1, 0) == 0);
	test(MAC_LESSER(0, 1) == 1);
	test(MAC_LESSER(1, 1) == 0);
}
