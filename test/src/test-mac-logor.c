#include <test.h>
#include <mac.h>
#include <stdint.h>

void test_mac_logor (){
	test(MAC_LOGOR(0xff, 0) == (uint8_t)0xff);
	test(MAC_LOGOR(0xff, 0xf) == (uint8_t)0xff);
	test(MAC_LOGOR(0xff, 0xff) == (uint8_t)0xff);
	test(MAC_LOGOR(0, 0) == (uint8_t)0);
	test(MAC_LOGOR(0, 0xf) == (uint8_t)0xf);
	test(MAC_LOGOR(0, 0xff) == (uint8_t)0xff);
}
