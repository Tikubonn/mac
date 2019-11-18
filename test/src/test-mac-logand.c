#include <test.h>
#include <mac.h>
#include <stdint.h>

void test_mac_logand (){
	test(MAC_LOGAND(0xff, 0) == (uint8_t)0x00);
	test(MAC_LOGAND(0xff, 0xf) == (uint8_t)0x0f);
	test(MAC_LOGAND(0xff, 0xff) == (uint8_t)0xff);
	test(MAC_LOGAND(0, 0) == 0);
	test(MAC_LOGAND(0, 0xf) == 0);
	test(MAC_LOGAND(0, 0xff) == 0);
}
