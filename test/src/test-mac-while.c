#include <test.h>
#include <mac.h>

#define ADD(a, b) MAC_UNEQUAL(b, 0), MAC_IF(MAC_UNEQUAL(b, 0), MAC_ADD(a, b), a), MAC_IF(MAC_UNEQUAL(b, 0), MAC_DEC(b), b)
#define SUM_UNTIL(nth) MAC_WHILE(ADD, 0, nth)

void test_mac_while (){
	test(SUM_UNTIL(0) == 0);
	test(SUM_UNTIL(1) == 1);
	test(SUM_UNTIL(2) == 3);
	test(SUM_UNTIL(3) == 6);
	test(SUM_UNTIL(4) == 10);
	test(SUM_UNTIL(5) == 15);
}
