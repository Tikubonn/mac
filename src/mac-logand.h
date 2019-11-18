
#define MAC_LOGAND(a, b) MAC_LOGAND8(MAC_TO_INT(a), MAC_TO_INT(b))
#define MAC_LOGANDBIT00 0
#define MAC_LOGANDBIT10 0
#define MAC_LOGANDBIT01 0
#define MAC_LOGANDBIT11 1
#define MAC_LOGAND0(a, b) 0

#define MAC_LOGAND1(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND0(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGAND2(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND1(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGAND3(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND2(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGAND4(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND3(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGAND5(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND4(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGAND6(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND5(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGAND7(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND6(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
#define MAC_LOGAND8(a, b) MAC_ADD(MAC_MUL(MAC_LOGAND7(MAC_DIV(a, 2), MAC_DIV(b, 2)), 2), MAC_CONCAT(MAC_LOGANDBIT, MAC_CONCAT(MAC_MOD(a, 2), MAC_MOD(b, 2))))
