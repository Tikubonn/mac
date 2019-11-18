#include <test.h>
#include <mac.h>

void test_mac_mul (){
	test(MAC_MUL(1, 0) == 0);
	test(MAC_MUL(1, 1) == 1);
	test(MAC_MUL(10, 20) == 200);
}
