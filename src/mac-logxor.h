
#define MAC_LOGXOR(a, b) MAC_LOGXOR8(MAC_TO_INT(a), MAC_TO_INT(b))
#define MAC_LOGXORBIT00 0
#define MAC_LOGXORBIT10 1
#define MAC_LOGXORBIT01 1
#define MAC_LOGXORBIT11 0
#define MAC_LOGXOR0(a, b) 0

#define MAC_LOGXOR1(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR0(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGXOR2(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR1(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGXOR3(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR2(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGXOR4(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR3(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGXOR5(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR4(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGXOR6(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR5(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGXOR7(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR6(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGXOR8(a, b) MAC_ADD(MAC_MUL(MAC_LOGXOR7(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGXORBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))