#include <test.h>
#include <mac.h>

#define ADD(acc, i) MAC_IF(MAC_UNEQUAL(i, 0), MAC_ADD(acc, i), acc), MAC_INC(i)
#define SUM_UNTIL(nth) MAC_DOTIMES(nth, ADD, 0, 1)

void test_mac_dotimes (){
	test(SUM_UNTIL(0) == 0);
	test(SUM_UNTIL(1) == 1);
	test(SUM_UNTIL(2) == 3);
	test(SUM_UNTIL(3) == 6);
	test(SUM_UNTIL(4) == 10);
	test(SUM_UNTIL(5) == 15);
}
