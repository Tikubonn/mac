#include <test.h>
#include <mac.h>
#include <stdint.h>

void test_mac_lognot (){
	test(MAC_LOGNOT(0x0) == (uint8_t)0xff);
	test(MAC_LOGNOT(0xf) == (uint8_t)0xf0);
	test(MAC_LOGNOT(0xff) == (uint8_t)0x00);
}
