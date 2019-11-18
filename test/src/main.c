#include <test.h>
#include <mac.h>
#include "test-mac-bool.h"
#include "test-mac-inc.h"
#include "test-mac-dec.h"
#include "test-mac-if.h"
#include "test-mac-not.h"
#include "test-mac-and.h"
#include "test-mac-or.h"
#include "test-mac-add.h"
#include "test-mac-sub.h"
#include "test-mac-mul.h"
#include "test-mac-equal.h"
#include "test-mac-unequal.h"
#include "test-mac-lesser.h"
#include "test-mac-lesser-or-equal.h"
#include "test-mac-greater.h"
#include "test-mac-greater-or-equal.h"
#include "test-mac-div.h"
#include "test-mac-mod.h"
#include "test-mac-to-int.h"
#include "test-mac-lognot.h"
#include "test-mac-logand.h"
#include "test-mac-logor.h"
#include "test-mac-logxor.h"
#include "test-mac-while.h"
#include "test-mac-until.h"
#include "test-mac-lshift.h"
#include "test-mac-rshift.h"
#include "test-mac-dotimes.h"

int main (){
	test_mac_bool();
	test_mac_inc();
	test_mac_dec();
	test_mac_if();
	test_mac_not();
	test_mac_and();
	test_mac_or();
	test_mac_add();
	test_mac_sub();
	test_mac_mul();
	test_mac_equal();
	test_mac_unequal();
	test_mac_lesser();
	test_mac_lesser_or_equal();
	test_mac_greater();
	test_mac_greater_or_equal();
	test_mac_div();
	test_mac_mod();
	test_mac_to_int();
	test_mac_lognot();
	test_mac_logand();
	test_mac_logor();
	test_mac_logxor();
	test_mac_while();
	test_mac_until();
	test_mac_lshift();
	test_mac_rshift();
	test_mac_dotimes();
	return 0;
}
