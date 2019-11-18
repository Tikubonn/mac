
#define MAC_UNTIL0(func, cond, acc, ...) acc

#define MAC_UNTIL(func, acc, ...) MAC_UNTIL255(func, 0, acc, __VA_ARGS__)

#define MAC_UNTIL1(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL1IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL1IN(func, args) MAC_UNTIL0(func, args)


#define MAC_UNTIL2(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL2IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL2IN(func, args) MAC_UNTIL1(func, args)


#define MAC_UNTIL3(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL3IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL3IN(func, args) MAC_UNTIL2(func, args)


#define MAC_UNTIL4(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL4IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL4IN(func, args) MAC_UNTIL3(func, args)


#define MAC_UNTIL5(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL5IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL5IN(func, args) MAC_UNTIL4(func, args)


#define MAC_UNTIL6(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL6IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL6IN(func, args) MAC_UNTIL5(func, args)


#define MAC_UNTIL7(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL7IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL7IN(func, args) MAC_UNTIL6(func, args)


#define MAC_UNTIL8(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL8IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL8IN(func, args) MAC_UNTIL7(func, args)


#define MAC_UNTIL9(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL9IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL9IN(func, args) MAC_UNTIL8(func, args)


#define MAC_UNTIL10(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL10IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL10IN(func, args) MAC_UNTIL9(func, args)


#define MAC_UNTIL11(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL11IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL11IN(func, args) MAC_UNTIL10(func, args)


#define MAC_UNTIL12(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL12IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL12IN(func, args) MAC_UNTIL11(func, args)


#define MAC_UNTIL13(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL13IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL13IN(func, args) MAC_UNTIL12(func, args)


#define MAC_UNTIL14(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL14IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL14IN(func, args) MAC_UNTIL13(func, args)


#define MAC_UNTIL15(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL15IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL15IN(func, args) MAC_UNTIL14(func, args)


#define MAC_UNTIL16(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL16IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL16IN(func, args) MAC_UNTIL15(func, args)


#define MAC_UNTIL17(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL17IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL17IN(func, args) MAC_UNTIL16(func, args)


#define MAC_UNTIL18(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL18IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL18IN(func, args) MAC_UNTIL17(func, args)


#define MAC_UNTIL19(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL19IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL19IN(func, args) MAC_UNTIL18(func, args)


#define MAC_UNTIL20(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL20IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL20IN(func, args) MAC_UNTIL19(func, args)


#define MAC_UNTIL21(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL21IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL21IN(func, args) MAC_UNTIL20(func, args)


#define MAC_UNTIL22(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL22IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL22IN(func, args) MAC_UNTIL21(func, args)


#define MAC_UNTIL23(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL23IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL23IN(func, args) MAC_UNTIL22(func, args)


#define MAC_UNTIL24(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL24IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL24IN(func, args) MAC_UNTIL23(func, args)


#define MAC_UNTIL25(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL25IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL25IN(func, args) MAC_UNTIL24(func, args)


#define MAC_UNTIL26(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL26IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL26IN(func, args) MAC_UNTIL25(func, args)


#define MAC_UNTIL27(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL27IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL27IN(func, args) MAC_UNTIL26(func, args)


#define MAC_UNTIL28(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL28IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL28IN(func, args) MAC_UNTIL27(func, args)


#define MAC_UNTIL29(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL29IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL29IN(func, args) MAC_UNTIL28(func, args)


#define MAC_UNTIL30(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL30IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL30IN(func, args) MAC_UNTIL29(func, args)


#define MAC_UNTIL31(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL31IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL31IN(func, args) MAC_UNTIL30(func, args)


#define MAC_UNTIL32(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL32IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL32IN(func, args) MAC_UNTIL31(func, args)


#define MAC_UNTIL33(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL33IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL33IN(func, args) MAC_UNTIL32(func, args)


#define MAC_UNTIL34(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL34IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL34IN(func, args) MAC_UNTIL33(func, args)


#define MAC_UNTIL35(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL35IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL35IN(func, args) MAC_UNTIL34(func, args)


#define MAC_UNTIL36(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL36IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL36IN(func, args) MAC_UNTIL35(func, args)


#define MAC_UNTIL37(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL37IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL37IN(func, args) MAC_UNTIL36(func, args)


#define MAC_UNTIL38(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL38IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL38IN(func, args) MAC_UNTIL37(func, args)


#define MAC_UNTIL39(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL39IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL39IN(func, args) MAC_UNTIL38(func, args)


#define MAC_UNTIL40(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL40IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL40IN(func, args) MAC_UNTIL39(func, args)


#define MAC_UNTIL41(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL41IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL41IN(func, args) MAC_UNTIL40(func, args)


#define MAC_UNTIL42(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL42IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL42IN(func, args) MAC_UNTIL41(func, args)


#define MAC_UNTIL43(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL43IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL43IN(func, args) MAC_UNTIL42(func, args)


#define MAC_UNTIL44(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL44IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL44IN(func, args) MAC_UNTIL43(func, args)


#define MAC_UNTIL45(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL45IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL45IN(func, args) MAC_UNTIL44(func, args)


#define MAC_UNTIL46(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL46IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL46IN(func, args) MAC_UNTIL45(func, args)


#define MAC_UNTIL47(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL47IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL47IN(func, args) MAC_UNTIL46(func, args)


#define MAC_UNTIL48(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL48IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL48IN(func, args) MAC_UNTIL47(func, args)


#define MAC_UNTIL49(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL49IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL49IN(func, args) MAC_UNTIL48(func, args)


#define MAC_UNTIL50(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL50IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL50IN(func, args) MAC_UNTIL49(func, args)


#define MAC_UNTIL51(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL51IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL51IN(func, args) MAC_UNTIL50(func, args)


#define MAC_UNTIL52(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL52IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL52IN(func, args) MAC_UNTIL51(func, args)


#define MAC_UNTIL53(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL53IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL53IN(func, args) MAC_UNTIL52(func, args)


#define MAC_UNTIL54(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL54IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL54IN(func, args) MAC_UNTIL53(func, args)


#define MAC_UNTIL55(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL55IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL55IN(func, args) MAC_UNTIL54(func, args)


#define MAC_UNTIL56(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL56IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL56IN(func, args) MAC_UNTIL55(func, args)


#define MAC_UNTIL57(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL57IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL57IN(func, args) MAC_UNTIL56(func, args)


#define MAC_UNTIL58(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL58IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL58IN(func, args) MAC_UNTIL57(func, args)


#define MAC_UNTIL59(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL59IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL59IN(func, args) MAC_UNTIL58(func, args)


#define MAC_UNTIL60(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL60IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL60IN(func, args) MAC_UNTIL59(func, args)


#define MAC_UNTIL61(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL61IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL61IN(func, args) MAC_UNTIL60(func, args)


#define MAC_UNTIL62(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL62IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL62IN(func, args) MAC_UNTIL61(func, args)


#define MAC_UNTIL63(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL63IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL63IN(func, args) MAC_UNTIL62(func, args)


#define MAC_UNTIL64(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL64IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL64IN(func, args) MAC_UNTIL63(func, args)


#define MAC_UNTIL65(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL65IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL65IN(func, args) MAC_UNTIL64(func, args)


#define MAC_UNTIL66(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL66IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL66IN(func, args) MAC_UNTIL65(func, args)


#define MAC_UNTIL67(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL67IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL67IN(func, args) MAC_UNTIL66(func, args)


#define MAC_UNTIL68(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL68IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL68IN(func, args) MAC_UNTIL67(func, args)


#define MAC_UNTIL69(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL69IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL69IN(func, args) MAC_UNTIL68(func, args)


#define MAC_UNTIL70(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL70IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL70IN(func, args) MAC_UNTIL69(func, args)


#define MAC_UNTIL71(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL71IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL71IN(func, args) MAC_UNTIL70(func, args)


#define MAC_UNTIL72(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL72IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL72IN(func, args) MAC_UNTIL71(func, args)


#define MAC_UNTIL73(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL73IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL73IN(func, args) MAC_UNTIL72(func, args)


#define MAC_UNTIL74(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL74IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL74IN(func, args) MAC_UNTIL73(func, args)


#define MAC_UNTIL75(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL75IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL75IN(func, args) MAC_UNTIL74(func, args)


#define MAC_UNTIL76(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL76IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL76IN(func, args) MAC_UNTIL75(func, args)


#define MAC_UNTIL77(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL77IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL77IN(func, args) MAC_UNTIL76(func, args)


#define MAC_UNTIL78(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL78IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL78IN(func, args) MAC_UNTIL77(func, args)


#define MAC_UNTIL79(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL79IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL79IN(func, args) MAC_UNTIL78(func, args)


#define MAC_UNTIL80(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL80IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL80IN(func, args) MAC_UNTIL79(func, args)


#define MAC_UNTIL81(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL81IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL81IN(func, args) MAC_UNTIL80(func, args)


#define MAC_UNTIL82(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL82IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL82IN(func, args) MAC_UNTIL81(func, args)


#define MAC_UNTIL83(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL83IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL83IN(func, args) MAC_UNTIL82(func, args)


#define MAC_UNTIL84(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL84IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL84IN(func, args) MAC_UNTIL83(func, args)


#define MAC_UNTIL85(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL85IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL85IN(func, args) MAC_UNTIL84(func, args)


#define MAC_UNTIL86(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL86IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL86IN(func, args) MAC_UNTIL85(func, args)


#define MAC_UNTIL87(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL87IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL87IN(func, args) MAC_UNTIL86(func, args)


#define MAC_UNTIL88(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL88IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL88IN(func, args) MAC_UNTIL87(func, args)


#define MAC_UNTIL89(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL89IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL89IN(func, args) MAC_UNTIL88(func, args)


#define MAC_UNTIL90(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL90IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL90IN(func, args) MAC_UNTIL89(func, args)


#define MAC_UNTIL91(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL91IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL91IN(func, args) MAC_UNTIL90(func, args)


#define MAC_UNTIL92(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL92IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL92IN(func, args) MAC_UNTIL91(func, args)


#define MAC_UNTIL93(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL93IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL93IN(func, args) MAC_UNTIL92(func, args)


#define MAC_UNTIL94(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL94IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL94IN(func, args) MAC_UNTIL93(func, args)


#define MAC_UNTIL95(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL95IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL95IN(func, args) MAC_UNTIL94(func, args)


#define MAC_UNTIL96(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL96IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL96IN(func, args) MAC_UNTIL95(func, args)


#define MAC_UNTIL97(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL97IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL97IN(func, args) MAC_UNTIL96(func, args)


#define MAC_UNTIL98(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL98IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL98IN(func, args) MAC_UNTIL97(func, args)


#define MAC_UNTIL99(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL99IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL99IN(func, args) MAC_UNTIL98(func, args)


#define MAC_UNTIL100(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL100IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL100IN(func, args) MAC_UNTIL99(func, args)


#define MAC_UNTIL101(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL101IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL101IN(func, args) MAC_UNTIL100(func, args)


#define MAC_UNTIL102(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL102IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL102IN(func, args) MAC_UNTIL101(func, args)


#define MAC_UNTIL103(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL103IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL103IN(func, args) MAC_UNTIL102(func, args)


#define MAC_UNTIL104(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL104IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL104IN(func, args) MAC_UNTIL103(func, args)


#define MAC_UNTIL105(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL105IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL105IN(func, args) MAC_UNTIL104(func, args)


#define MAC_UNTIL106(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL106IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL106IN(func, args) MAC_UNTIL105(func, args)


#define MAC_UNTIL107(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL107IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL107IN(func, args) MAC_UNTIL106(func, args)


#define MAC_UNTIL108(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL108IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL108IN(func, args) MAC_UNTIL107(func, args)


#define MAC_UNTIL109(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL109IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL109IN(func, args) MAC_UNTIL108(func, args)


#define MAC_UNTIL110(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL110IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL110IN(func, args) MAC_UNTIL109(func, args)


#define MAC_UNTIL111(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL111IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL111IN(func, args) MAC_UNTIL110(func, args)


#define MAC_UNTIL112(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL112IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL112IN(func, args) MAC_UNTIL111(func, args)


#define MAC_UNTIL113(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL113IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL113IN(func, args) MAC_UNTIL112(func, args)


#define MAC_UNTIL114(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL114IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL114IN(func, args) MAC_UNTIL113(func, args)


#define MAC_UNTIL115(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL115IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL115IN(func, args) MAC_UNTIL114(func, args)


#define MAC_UNTIL116(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL116IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL116IN(func, args) MAC_UNTIL115(func, args)


#define MAC_UNTIL117(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL117IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL117IN(func, args) MAC_UNTIL116(func, args)


#define MAC_UNTIL118(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL118IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL118IN(func, args) MAC_UNTIL117(func, args)


#define MAC_UNTIL119(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL119IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL119IN(func, args) MAC_UNTIL118(func, args)


#define MAC_UNTIL120(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL120IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL120IN(func, args) MAC_UNTIL119(func, args)


#define MAC_UNTIL121(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL121IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL121IN(func, args) MAC_UNTIL120(func, args)


#define MAC_UNTIL122(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL122IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL122IN(func, args) MAC_UNTIL121(func, args)


#define MAC_UNTIL123(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL123IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL123IN(func, args) MAC_UNTIL122(func, args)


#define MAC_UNTIL124(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL124IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL124IN(func, args) MAC_UNTIL123(func, args)


#define MAC_UNTIL125(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL125IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL125IN(func, args) MAC_UNTIL124(func, args)


#define MAC_UNTIL126(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL126IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL126IN(func, args) MAC_UNTIL125(func, args)


#define MAC_UNTIL127(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL127IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL127IN(func, args) MAC_UNTIL126(func, args)


#define MAC_UNTIL128(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL128IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL128IN(func, args) MAC_UNTIL127(func, args)


#define MAC_UNTIL129(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL129IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL129IN(func, args) MAC_UNTIL128(func, args)


#define MAC_UNTIL130(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL130IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL130IN(func, args) MAC_UNTIL129(func, args)


#define MAC_UNTIL131(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL131IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL131IN(func, args) MAC_UNTIL130(func, args)


#define MAC_UNTIL132(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL132IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL132IN(func, args) MAC_UNTIL131(func, args)


#define MAC_UNTIL133(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL133IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL133IN(func, args) MAC_UNTIL132(func, args)


#define MAC_UNTIL134(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL134IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL134IN(func, args) MAC_UNTIL133(func, args)


#define MAC_UNTIL135(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL135IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL135IN(func, args) MAC_UNTIL134(func, args)


#define MAC_UNTIL136(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL136IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL136IN(func, args) MAC_UNTIL135(func, args)


#define MAC_UNTIL137(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL137IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL137IN(func, args) MAC_UNTIL136(func, args)


#define MAC_UNTIL138(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL138IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL138IN(func, args) MAC_UNTIL137(func, args)


#define MAC_UNTIL139(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL139IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL139IN(func, args) MAC_UNTIL138(func, args)


#define MAC_UNTIL140(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL140IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL140IN(func, args) MAC_UNTIL139(func, args)


#define MAC_UNTIL141(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL141IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL141IN(func, args) MAC_UNTIL140(func, args)


#define MAC_UNTIL142(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL142IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL142IN(func, args) MAC_UNTIL141(func, args)


#define MAC_UNTIL143(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL143IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL143IN(func, args) MAC_UNTIL142(func, args)


#define MAC_UNTIL144(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL144IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL144IN(func, args) MAC_UNTIL143(func, args)


#define MAC_UNTIL145(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL145IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL145IN(func, args) MAC_UNTIL144(func, args)


#define MAC_UNTIL146(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL146IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL146IN(func, args) MAC_UNTIL145(func, args)


#define MAC_UNTIL147(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL147IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL147IN(func, args) MAC_UNTIL146(func, args)


#define MAC_UNTIL148(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL148IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL148IN(func, args) MAC_UNTIL147(func, args)


#define MAC_UNTIL149(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL149IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL149IN(func, args) MAC_UNTIL148(func, args)


#define MAC_UNTIL150(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL150IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL150IN(func, args) MAC_UNTIL149(func, args)


#define MAC_UNTIL151(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL151IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL151IN(func, args) MAC_UNTIL150(func, args)


#define MAC_UNTIL152(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL152IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL152IN(func, args) MAC_UNTIL151(func, args)


#define MAC_UNTIL153(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL153IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL153IN(func, args) MAC_UNTIL152(func, args)


#define MAC_UNTIL154(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL154IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL154IN(func, args) MAC_UNTIL153(func, args)


#define MAC_UNTIL155(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL155IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL155IN(func, args) MAC_UNTIL154(func, args)


#define MAC_UNTIL156(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL156IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL156IN(func, args) MAC_UNTIL155(func, args)


#define MAC_UNTIL157(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL157IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL157IN(func, args) MAC_UNTIL156(func, args)


#define MAC_UNTIL158(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL158IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL158IN(func, args) MAC_UNTIL157(func, args)


#define MAC_UNTIL159(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL159IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL159IN(func, args) MAC_UNTIL158(func, args)


#define MAC_UNTIL160(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL160IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL160IN(func, args) MAC_UNTIL159(func, args)


#define MAC_UNTIL161(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL161IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL161IN(func, args) MAC_UNTIL160(func, args)


#define MAC_UNTIL162(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL162IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL162IN(func, args) MAC_UNTIL161(func, args)


#define MAC_UNTIL163(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL163IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL163IN(func, args) MAC_UNTIL162(func, args)


#define MAC_UNTIL164(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL164IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL164IN(func, args) MAC_UNTIL163(func, args)


#define MAC_UNTIL165(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL165IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL165IN(func, args) MAC_UNTIL164(func, args)


#define MAC_UNTIL166(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL166IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL166IN(func, args) MAC_UNTIL165(func, args)


#define MAC_UNTIL167(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL167IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL167IN(func, args) MAC_UNTIL166(func, args)


#define MAC_UNTIL168(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL168IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL168IN(func, args) MAC_UNTIL167(func, args)


#define MAC_UNTIL169(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL169IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL169IN(func, args) MAC_UNTIL168(func, args)


#define MAC_UNTIL170(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL170IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL170IN(func, args) MAC_UNTIL169(func, args)


#define MAC_UNTIL171(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL171IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL171IN(func, args) MAC_UNTIL170(func, args)


#define MAC_UNTIL172(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL172IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL172IN(func, args) MAC_UNTIL171(func, args)


#define MAC_UNTIL173(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL173IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL173IN(func, args) MAC_UNTIL172(func, args)


#define MAC_UNTIL174(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL174IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL174IN(func, args) MAC_UNTIL173(func, args)


#define MAC_UNTIL175(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL175IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL175IN(func, args) MAC_UNTIL174(func, args)


#define MAC_UNTIL176(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL176IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL176IN(func, args) MAC_UNTIL175(func, args)


#define MAC_UNTIL177(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL177IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL177IN(func, args) MAC_UNTIL176(func, args)


#define MAC_UNTIL178(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL178IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL178IN(func, args) MAC_UNTIL177(func, args)


#define MAC_UNTIL179(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL179IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL179IN(func, args) MAC_UNTIL178(func, args)


#define MAC_UNTIL180(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL180IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL180IN(func, args) MAC_UNTIL179(func, args)


#define MAC_UNTIL181(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL181IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL181IN(func, args) MAC_UNTIL180(func, args)


#define MAC_UNTIL182(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL182IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL182IN(func, args) MAC_UNTIL181(func, args)


#define MAC_UNTIL183(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL183IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL183IN(func, args) MAC_UNTIL182(func, args)


#define MAC_UNTIL184(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL184IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL184IN(func, args) MAC_UNTIL183(func, args)


#define MAC_UNTIL185(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL185IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL185IN(func, args) MAC_UNTIL184(func, args)


#define MAC_UNTIL186(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL186IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL186IN(func, args) MAC_UNTIL185(func, args)


#define MAC_UNTIL187(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL187IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL187IN(func, args) MAC_UNTIL186(func, args)


#define MAC_UNTIL188(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL188IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL188IN(func, args) MAC_UNTIL187(func, args)


#define MAC_UNTIL189(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL189IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL189IN(func, args) MAC_UNTIL188(func, args)


#define MAC_UNTIL190(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL190IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL190IN(func, args) MAC_UNTIL189(func, args)


#define MAC_UNTIL191(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL191IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL191IN(func, args) MAC_UNTIL190(func, args)


#define MAC_UNTIL192(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL192IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL192IN(func, args) MAC_UNTIL191(func, args)


#define MAC_UNTIL193(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL193IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL193IN(func, args) MAC_UNTIL192(func, args)


#define MAC_UNTIL194(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL194IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL194IN(func, args) MAC_UNTIL193(func, args)


#define MAC_UNTIL195(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL195IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL195IN(func, args) MAC_UNTIL194(func, args)


#define MAC_UNTIL196(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL196IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL196IN(func, args) MAC_UNTIL195(func, args)


#define MAC_UNTIL197(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL197IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL197IN(func, args) MAC_UNTIL196(func, args)


#define MAC_UNTIL198(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL198IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL198IN(func, args) MAC_UNTIL197(func, args)


#define MAC_UNTIL199(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL199IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL199IN(func, args) MAC_UNTIL198(func, args)


#define MAC_UNTIL200(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL200IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL200IN(func, args) MAC_UNTIL199(func, args)


#define MAC_UNTIL201(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL201IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL201IN(func, args) MAC_UNTIL200(func, args)


#define MAC_UNTIL202(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL202IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL202IN(func, args) MAC_UNTIL201(func, args)


#define MAC_UNTIL203(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL203IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL203IN(func, args) MAC_UNTIL202(func, args)


#define MAC_UNTIL204(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL204IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL204IN(func, args) MAC_UNTIL203(func, args)


#define MAC_UNTIL205(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL205IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL205IN(func, args) MAC_UNTIL204(func, args)


#define MAC_UNTIL206(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL206IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL206IN(func, args) MAC_UNTIL205(func, args)


#define MAC_UNTIL207(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL207IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL207IN(func, args) MAC_UNTIL206(func, args)


#define MAC_UNTIL208(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL208IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL208IN(func, args) MAC_UNTIL207(func, args)


#define MAC_UNTIL209(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL209IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL209IN(func, args) MAC_UNTIL208(func, args)


#define MAC_UNTIL210(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL210IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL210IN(func, args) MAC_UNTIL209(func, args)


#define MAC_UNTIL211(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL211IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL211IN(func, args) MAC_UNTIL210(func, args)


#define MAC_UNTIL212(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL212IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL212IN(func, args) MAC_UNTIL211(func, args)


#define MAC_UNTIL213(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL213IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL213IN(func, args) MAC_UNTIL212(func, args)


#define MAC_UNTIL214(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL214IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL214IN(func, args) MAC_UNTIL213(func, args)


#define MAC_UNTIL215(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL215IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL215IN(func, args) MAC_UNTIL214(func, args)


#define MAC_UNTIL216(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL216IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL216IN(func, args) MAC_UNTIL215(func, args)


#define MAC_UNTIL217(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL217IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL217IN(func, args) MAC_UNTIL216(func, args)


#define MAC_UNTIL218(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL218IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL218IN(func, args) MAC_UNTIL217(func, args)


#define MAC_UNTIL219(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL219IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL219IN(func, args) MAC_UNTIL218(func, args)


#define MAC_UNTIL220(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL220IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL220IN(func, args) MAC_UNTIL219(func, args)


#define MAC_UNTIL221(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL221IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL221IN(func, args) MAC_UNTIL220(func, args)


#define MAC_UNTIL222(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL222IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL222IN(func, args) MAC_UNTIL221(func, args)


#define MAC_UNTIL223(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL223IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL223IN(func, args) MAC_UNTIL222(func, args)


#define MAC_UNTIL224(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL224IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL224IN(func, args) MAC_UNTIL223(func, args)


#define MAC_UNTIL225(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL225IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL225IN(func, args) MAC_UNTIL224(func, args)


#define MAC_UNTIL226(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL226IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL226IN(func, args) MAC_UNTIL225(func, args)


#define MAC_UNTIL227(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL227IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL227IN(func, args) MAC_UNTIL226(func, args)


#define MAC_UNTIL228(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL228IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL228IN(func, args) MAC_UNTIL227(func, args)


#define MAC_UNTIL229(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL229IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL229IN(func, args) MAC_UNTIL228(func, args)


#define MAC_UNTIL230(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL230IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL230IN(func, args) MAC_UNTIL229(func, args)


#define MAC_UNTIL231(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL231IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL231IN(func, args) MAC_UNTIL230(func, args)


#define MAC_UNTIL232(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL232IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL232IN(func, args) MAC_UNTIL231(func, args)


#define MAC_UNTIL233(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL233IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL233IN(func, args) MAC_UNTIL232(func, args)


#define MAC_UNTIL234(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL234IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL234IN(func, args) MAC_UNTIL233(func, args)


#define MAC_UNTIL235(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL235IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL235IN(func, args) MAC_UNTIL234(func, args)


#define MAC_UNTIL236(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL236IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL236IN(func, args) MAC_UNTIL235(func, args)


#define MAC_UNTIL237(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL237IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL237IN(func, args) MAC_UNTIL236(func, args)


#define MAC_UNTIL238(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL238IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL238IN(func, args) MAC_UNTIL237(func, args)


#define MAC_UNTIL239(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL239IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL239IN(func, args) MAC_UNTIL238(func, args)


#define MAC_UNTIL240(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL240IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL240IN(func, args) MAC_UNTIL239(func, args)


#define MAC_UNTIL241(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL241IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL241IN(func, args) MAC_UNTIL240(func, args)


#define MAC_UNTIL242(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL242IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL242IN(func, args) MAC_UNTIL241(func, args)


#define MAC_UNTIL243(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL243IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL243IN(func, args) MAC_UNTIL242(func, args)


#define MAC_UNTIL244(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL244IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL244IN(func, args) MAC_UNTIL243(func, args)


#define MAC_UNTIL245(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL245IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL245IN(func, args) MAC_UNTIL244(func, args)


#define MAC_UNTIL246(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL246IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL246IN(func, args) MAC_UNTIL245(func, args)


#define MAC_UNTIL247(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL247IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL247IN(func, args) MAC_UNTIL246(func, args)


#define MAC_UNTIL248(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL248IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL248IN(func, args) MAC_UNTIL247(func, args)


#define MAC_UNTIL249(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL249IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL249IN(func, args) MAC_UNTIL248(func, args)


#define MAC_UNTIL250(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL250IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL250IN(func, args) MAC_UNTIL249(func, args)


#define MAC_UNTIL251(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL251IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL251IN(func, args) MAC_UNTIL250(func, args)


#define MAC_UNTIL252(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL252IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL252IN(func, args) MAC_UNTIL251(func, args)


#define MAC_UNTIL253(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL253IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL253IN(func, args) MAC_UNTIL252(func, args)


#define MAC_UNTIL254(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL254IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL254IN(func, args) MAC_UNTIL253(func, args)


#define MAC_UNTIL255(func, cond, acc, ...) MAC_IF(cond, acc, MAC_UNTIL255IN(func, func(acc, __VA_ARGS__)))
#define MAC_UNTIL255IN(func, args) MAC_UNTIL254(func, args)

