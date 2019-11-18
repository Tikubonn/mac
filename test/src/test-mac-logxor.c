#include <test.h>
#include <mac.h>
#include <stdint.h>

void test_mac_logxor (){
	test(MAC_LOGXOR(0xff, 0) == (uint8_t)0xff);
	test(MAC_LOGXOR(0xff, 0xf) == (uint8_t)0xf0);
	test(MAC_LOGXOR(0xff, 0xff) == (uint8_t)0x00);
	test(MAC_LOGXOR(0, 0) == (uint8_t)0);
	test(MAC_LOGXOR(0, 0xf) == (uint8_t)0x0f);
	test(MAC_LOGXOR(0, 0xff) == (uint8_t)0xff);
}
