
#define MAC_WHILE0(func, cond, acc, ...) acc

#define MAC_WHILE(func, acc, ...) MAC_WHILE255(func, 1, acc, __VA_ARGS__)

#define MAC_WHILE1(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE1IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE1IN(func, args) MAC_WHILE0(func, args)


#define MAC_WHILE2(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE2IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE2IN(func, args) MAC_WHILE1(func, args)


#define MAC_WHILE3(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE3IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE3IN(func, args) MAC_WHILE2(func, args)


#define MAC_WHILE4(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE4IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE4IN(func, args) MAC_WHILE3(func, args)


#define MAC_WHILE5(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE5IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE5IN(func, args) MAC_WHILE4(func, args)


#define MAC_WHILE6(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE6IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE6IN(func, args) MAC_WHILE5(func, args)


#define MAC_WHILE7(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE7IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE7IN(func, args) MAC_WHILE6(func, args)


#define MAC_WHILE8(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE8IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE8IN(func, args) MAC_WHILE7(func, args)


#define MAC_WHILE9(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE9IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE9IN(func, args) MAC_WHILE8(func, args)


#define MAC_WHILE10(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE10IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE10IN(func, args) MAC_WHILE9(func, args)


#define MAC_WHILE11(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE11IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE11IN(func, args) MAC_WHILE10(func, args)


#define MAC_WHILE12(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE12IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE12IN(func, args) MAC_WHILE11(func, args)


#define MAC_WHILE13(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE13IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE13IN(func, args) MAC_WHILE12(func, args)


#define MAC_WHILE14(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE14IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE14IN(func, args) MAC_WHILE13(func, args)


#define MAC_WHILE15(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE15IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE15IN(func, args) MAC_WHILE14(func, args)


#define MAC_WHILE16(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE16IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE16IN(func, args) MAC_WHILE15(func, args)


#define MAC_WHILE17(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE17IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE17IN(func, args) MAC_WHILE16(func, args)


#define MAC_WHILE18(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE18IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE18IN(func, args) MAC_WHILE17(func, args)


#define MAC_WHILE19(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE19IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE19IN(func, args) MAC_WHILE18(func, args)


#define MAC_WHILE20(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE20IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE20IN(func, args) MAC_WHILE19(func, args)


#define MAC_WHILE21(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE21IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE21IN(func, args) MAC_WHILE20(func, args)


#define MAC_WHILE22(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE22IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE22IN(func, args) MAC_WHILE21(func, args)


#define MAC_WHILE23(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE23IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE23IN(func, args) MAC_WHILE22(func, args)


#define MAC_WHILE24(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE24IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE24IN(func, args) MAC_WHILE23(func, args)


#define MAC_WHILE25(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE25IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE25IN(func, args) MAC_WHILE24(func, args)


#define MAC_WHILE26(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE26IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE26IN(func, args) MAC_WHILE25(func, args)


#define MAC_WHILE27(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE27IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE27IN(func, args) MAC_WHILE26(func, args)


#define MAC_WHILE28(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE28IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE28IN(func, args) MAC_WHILE27(func, args)


#define MAC_WHILE29(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE29IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE29IN(func, args) MAC_WHILE28(func, args)


#define MAC_WHILE30(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE30IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE30IN(func, args) MAC_WHILE29(func, args)


#define MAC_WHILE31(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE31IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE31IN(func, args) MAC_WHILE30(func, args)


#define MAC_WHILE32(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE32IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE32IN(func, args) MAC_WHILE31(func, args)


#define MAC_WHILE33(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE33IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE33IN(func, args) MAC_WHILE32(func, args)


#define MAC_WHILE34(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE34IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE34IN(func, args) MAC_WHILE33(func, args)


#define MAC_WHILE35(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE35IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE35IN(func, args) MAC_WHILE34(func, args)


#define MAC_WHILE36(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE36IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE36IN(func, args) MAC_WHILE35(func, args)


#define MAC_WHILE37(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE37IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE37IN(func, args) MAC_WHILE36(func, args)


#define MAC_WHILE38(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE38IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE38IN(func, args) MAC_WHILE37(func, args)


#define MAC_WHILE39(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE39IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE39IN(func, args) MAC_WHILE38(func, args)


#define MAC_WHILE40(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE40IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE40IN(func, args) MAC_WHILE39(func, args)


#define MAC_WHILE41(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE41IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE41IN(func, args) MAC_WHILE40(func, args)


#define MAC_WHILE42(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE42IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE42IN(func, args) MAC_WHILE41(func, args)


#define MAC_WHILE43(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE43IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE43IN(func, args) MAC_WHILE42(func, args)


#define MAC_WHILE44(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE44IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE44IN(func, args) MAC_WHILE43(func, args)


#define MAC_WHILE45(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE45IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE45IN(func, args) MAC_WHILE44(func, args)


#define MAC_WHILE46(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE46IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE46IN(func, args) MAC_WHILE45(func, args)


#define MAC_WHILE47(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE47IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE47IN(func, args) MAC_WHILE46(func, args)


#define MAC_WHILE48(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE48IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE48IN(func, args) MAC_WHILE47(func, args)


#define MAC_WHILE49(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE49IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE49IN(func, args) MAC_WHILE48(func, args)


#define MAC_WHILE50(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE50IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE50IN(func, args) MAC_WHILE49(func, args)


#define MAC_WHILE51(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE51IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE51IN(func, args) MAC_WHILE50(func, args)


#define MAC_WHILE52(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE52IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE52IN(func, args) MAC_WHILE51(func, args)


#define MAC_WHILE53(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE53IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE53IN(func, args) MAC_WHILE52(func, args)


#define MAC_WHILE54(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE54IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE54IN(func, args) MAC_WHILE53(func, args)


#define MAC_WHILE55(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE55IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE55IN(func, args) MAC_WHILE54(func, args)


#define MAC_WHILE56(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE56IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE56IN(func, args) MAC_WHILE55(func, args)


#define MAC_WHILE57(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE57IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE57IN(func, args) MAC_WHILE56(func, args)


#define MAC_WHILE58(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE58IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE58IN(func, args) MAC_WHILE57(func, args)


#define MAC_WHILE59(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE59IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE59IN(func, args) MAC_WHILE58(func, args)


#define MAC_WHILE60(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE60IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE60IN(func, args) MAC_WHILE59(func, args)


#define MAC_WHILE61(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE61IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE61IN(func, args) MAC_WHILE60(func, args)


#define MAC_WHILE62(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE62IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE62IN(func, args) MAC_WHILE61(func, args)


#define MAC_WHILE63(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE63IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE63IN(func, args) MAC_WHILE62(func, args)


#define MAC_WHILE64(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE64IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE64IN(func, args) MAC_WHILE63(func, args)


#define MAC_WHILE65(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE65IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE65IN(func, args) MAC_WHILE64(func, args)


#define MAC_WHILE66(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE66IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE66IN(func, args) MAC_WHILE65(func, args)


#define MAC_WHILE67(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE67IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE67IN(func, args) MAC_WHILE66(func, args)


#define MAC_WHILE68(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE68IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE68IN(func, args) MAC_WHILE67(func, args)


#define MAC_WHILE69(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE69IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE69IN(func, args) MAC_WHILE68(func, args)


#define MAC_WHILE70(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE70IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE70IN(func, args) MAC_WHILE69(func, args)


#define MAC_WHILE71(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE71IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE71IN(func, args) MAC_WHILE70(func, args)


#define MAC_WHILE72(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE72IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE72IN(func, args) MAC_WHILE71(func, args)


#define MAC_WHILE73(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE73IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE73IN(func, args) MAC_WHILE72(func, args)


#define MAC_WHILE74(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE74IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE74IN(func, args) MAC_WHILE73(func, args)


#define MAC_WHILE75(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE75IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE75IN(func, args) MAC_WHILE74(func, args)


#define MAC_WHILE76(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE76IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE76IN(func, args) MAC_WHILE75(func, args)


#define MAC_WHILE77(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE77IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE77IN(func, args) MAC_WHILE76(func, args)


#define MAC_WHILE78(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE78IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE78IN(func, args) MAC_WHILE77(func, args)


#define MAC_WHILE79(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE79IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE79IN(func, args) MAC_WHILE78(func, args)


#define MAC_WHILE80(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE80IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE80IN(func, args) MAC_WHILE79(func, args)


#define MAC_WHILE81(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE81IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE81IN(func, args) MAC_WHILE80(func, args)


#define MAC_WHILE82(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE82IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE82IN(func, args) MAC_WHILE81(func, args)


#define MAC_WHILE83(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE83IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE83IN(func, args) MAC_WHILE82(func, args)


#define MAC_WHILE84(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE84IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE84IN(func, args) MAC_WHILE83(func, args)


#define MAC_WHILE85(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE85IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE85IN(func, args) MAC_WHILE84(func, args)


#define MAC_WHILE86(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE86IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE86IN(func, args) MAC_WHILE85(func, args)


#define MAC_WHILE87(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE87IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE87IN(func, args) MAC_WHILE86(func, args)


#define MAC_WHILE88(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE88IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE88IN(func, args) MAC_WHILE87(func, args)


#define MAC_WHILE89(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE89IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE89IN(func, args) MAC_WHILE88(func, args)


#define MAC_WHILE90(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE90IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE90IN(func, args) MAC_WHILE89(func, args)


#define MAC_WHILE91(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE91IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE91IN(func, args) MAC_WHILE90(func, args)


#define MAC_WHILE92(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE92IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE92IN(func, args) MAC_WHILE91(func, args)


#define MAC_WHILE93(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE93IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE93IN(func, args) MAC_WHILE92(func, args)


#define MAC_WHILE94(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE94IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE94IN(func, args) MAC_WHILE93(func, args)


#define MAC_WHILE95(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE95IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE95IN(func, args) MAC_WHILE94(func, args)


#define MAC_WHILE96(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE96IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE96IN(func, args) MAC_WHILE95(func, args)


#define MAC_WHILE97(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE97IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE97IN(func, args) MAC_WHILE96(func, args)


#define MAC_WHILE98(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE98IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE98IN(func, args) MAC_WHILE97(func, args)


#define MAC_WHILE99(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE99IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE99IN(func, args) MAC_WHILE98(func, args)


#define MAC_WHILE100(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE100IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE100IN(func, args) MAC_WHILE99(func, args)


#define MAC_WHILE101(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE101IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE101IN(func, args) MAC_WHILE100(func, args)


#define MAC_WHILE102(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE102IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE102IN(func, args) MAC_WHILE101(func, args)


#define MAC_WHILE103(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE103IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE103IN(func, args) MAC_WHILE102(func, args)


#define MAC_WHILE104(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE104IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE104IN(func, args) MAC_WHILE103(func, args)


#define MAC_WHILE105(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE105IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE105IN(func, args) MAC_WHILE104(func, args)


#define MAC_WHILE106(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE106IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE106IN(func, args) MAC_WHILE105(func, args)


#define MAC_WHILE107(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE107IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE107IN(func, args) MAC_WHILE106(func, args)


#define MAC_WHILE108(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE108IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE108IN(func, args) MAC_WHILE107(func, args)


#define MAC_WHILE109(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE109IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE109IN(func, args) MAC_WHILE108(func, args)


#define MAC_WHILE110(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE110IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE110IN(func, args) MAC_WHILE109(func, args)


#define MAC_WHILE111(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE111IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE111IN(func, args) MAC_WHILE110(func, args)


#define MAC_WHILE112(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE112IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE112IN(func, args) MAC_WHILE111(func, args)


#define MAC_WHILE113(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE113IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE113IN(func, args) MAC_WHILE112(func, args)


#define MAC_WHILE114(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE114IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE114IN(func, args) MAC_WHILE113(func, args)


#define MAC_WHILE115(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE115IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE115IN(func, args) MAC_WHILE114(func, args)


#define MAC_WHILE116(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE116IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE116IN(func, args) MAC_WHILE115(func, args)


#define MAC_WHILE117(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE117IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE117IN(func, args) MAC_WHILE116(func, args)


#define MAC_WHILE118(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE118IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE118IN(func, args) MAC_WHILE117(func, args)


#define MAC_WHILE119(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE119IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE119IN(func, args) MAC_WHILE118(func, args)


#define MAC_WHILE120(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE120IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE120IN(func, args) MAC_WHILE119(func, args)


#define MAC_WHILE121(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE121IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE121IN(func, args) MAC_WHILE120(func, args)


#define MAC_WHILE122(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE122IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE122IN(func, args) MAC_WHILE121(func, args)


#define MAC_WHILE123(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE123IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE123IN(func, args) MAC_WHILE122(func, args)


#define MAC_WHILE124(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE124IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE124IN(func, args) MAC_WHILE123(func, args)


#define MAC_WHILE125(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE125IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE125IN(func, args) MAC_WHILE124(func, args)


#define MAC_WHILE126(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE126IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE126IN(func, args) MAC_WHILE125(func, args)


#define MAC_WHILE127(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE127IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE127IN(func, args) MAC_WHILE126(func, args)


#define MAC_WHILE128(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE128IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE128IN(func, args) MAC_WHILE127(func, args)


#define MAC_WHILE129(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE129IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE129IN(func, args) MAC_WHILE128(func, args)


#define MAC_WHILE130(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE130IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE130IN(func, args) MAC_WHILE129(func, args)


#define MAC_WHILE131(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE131IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE131IN(func, args) MAC_WHILE130(func, args)


#define MAC_WHILE132(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE132IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE132IN(func, args) MAC_WHILE131(func, args)


#define MAC_WHILE133(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE133IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE133IN(func, args) MAC_WHILE132(func, args)


#define MAC_WHILE134(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE134IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE134IN(func, args) MAC_WHILE133(func, args)


#define MAC_WHILE135(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE135IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE135IN(func, args) MAC_WHILE134(func, args)


#define MAC_WHILE136(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE136IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE136IN(func, args) MAC_WHILE135(func, args)


#define MAC_WHILE137(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE137IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE137IN(func, args) MAC_WHILE136(func, args)


#define MAC_WHILE138(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE138IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE138IN(func, args) MAC_WHILE137(func, args)


#define MAC_WHILE139(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE139IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE139IN(func, args) MAC_WHILE138(func, args)


#define MAC_WHILE140(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE140IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE140IN(func, args) MAC_WHILE139(func, args)


#define MAC_WHILE141(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE141IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE141IN(func, args) MAC_WHILE140(func, args)


#define MAC_WHILE142(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE142IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE142IN(func, args) MAC_WHILE141(func, args)


#define MAC_WHILE143(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE143IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE143IN(func, args) MAC_WHILE142(func, args)


#define MAC_WHILE144(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE144IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE144IN(func, args) MAC_WHILE143(func, args)


#define MAC_WHILE145(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE145IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE145IN(func, args) MAC_WHILE144(func, args)


#define MAC_WHILE146(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE146IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE146IN(func, args) MAC_WHILE145(func, args)


#define MAC_WHILE147(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE147IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE147IN(func, args) MAC_WHILE146(func, args)


#define MAC_WHILE148(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE148IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE148IN(func, args) MAC_WHILE147(func, args)


#define MAC_WHILE149(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE149IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE149IN(func, args) MAC_WHILE148(func, args)


#define MAC_WHILE150(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE150IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE150IN(func, args) MAC_WHILE149(func, args)


#define MAC_WHILE151(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE151IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE151IN(func, args) MAC_WHILE150(func, args)


#define MAC_WHILE152(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE152IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE152IN(func, args) MAC_WHILE151(func, args)


#define MAC_WHILE153(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE153IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE153IN(func, args) MAC_WHILE152(func, args)


#define MAC_WHILE154(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE154IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE154IN(func, args) MAC_WHILE153(func, args)


#define MAC_WHILE155(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE155IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE155IN(func, args) MAC_WHILE154(func, args)


#define MAC_WHILE156(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE156IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE156IN(func, args) MAC_WHILE155(func, args)


#define MAC_WHILE157(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE157IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE157IN(func, args) MAC_WHILE156(func, args)


#define MAC_WHILE158(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE158IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE158IN(func, args) MAC_WHILE157(func, args)


#define MAC_WHILE159(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE159IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE159IN(func, args) MAC_WHILE158(func, args)


#define MAC_WHILE160(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE160IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE160IN(func, args) MAC_WHILE159(func, args)


#define MAC_WHILE161(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE161IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE161IN(func, args) MAC_WHILE160(func, args)


#define MAC_WHILE162(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE162IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE162IN(func, args) MAC_WHILE161(func, args)


#define MAC_WHILE163(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE163IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE163IN(func, args) MAC_WHILE162(func, args)


#define MAC_WHILE164(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE164IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE164IN(func, args) MAC_WHILE163(func, args)


#define MAC_WHILE165(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE165IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE165IN(func, args) MAC_WHILE164(func, args)


#define MAC_WHILE166(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE166IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE166IN(func, args) MAC_WHILE165(func, args)


#define MAC_WHILE167(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE167IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE167IN(func, args) MAC_WHILE166(func, args)


#define MAC_WHILE168(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE168IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE168IN(func, args) MAC_WHILE167(func, args)


#define MAC_WHILE169(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE169IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE169IN(func, args) MAC_WHILE168(func, args)


#define MAC_WHILE170(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE170IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE170IN(func, args) MAC_WHILE169(func, args)


#define MAC_WHILE171(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE171IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE171IN(func, args) MAC_WHILE170(func, args)


#define MAC_WHILE172(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE172IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE172IN(func, args) MAC_WHILE171(func, args)


#define MAC_WHILE173(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE173IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE173IN(func, args) MAC_WHILE172(func, args)


#define MAC_WHILE174(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE174IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE174IN(func, args) MAC_WHILE173(func, args)


#define MAC_WHILE175(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE175IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE175IN(func, args) MAC_WHILE174(func, args)


#define MAC_WHILE176(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE176IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE176IN(func, args) MAC_WHILE175(func, args)


#define MAC_WHILE177(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE177IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE177IN(func, args) MAC_WHILE176(func, args)


#define MAC_WHILE178(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE178IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE178IN(func, args) MAC_WHILE177(func, args)


#define MAC_WHILE179(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE179IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE179IN(func, args) MAC_WHILE178(func, args)


#define MAC_WHILE180(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE180IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE180IN(func, args) MAC_WHILE179(func, args)


#define MAC_WHILE181(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE181IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE181IN(func, args) MAC_WHILE180(func, args)


#define MAC_WHILE182(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE182IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE182IN(func, args) MAC_WHILE181(func, args)


#define MAC_WHILE183(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE183IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE183IN(func, args) MAC_WHILE182(func, args)


#define MAC_WHILE184(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE184IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE184IN(func, args) MAC_WHILE183(func, args)


#define MAC_WHILE185(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE185IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE185IN(func, args) MAC_WHILE184(func, args)


#define MAC_WHILE186(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE186IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE186IN(func, args) MAC_WHILE185(func, args)


#define MAC_WHILE187(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE187IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE187IN(func, args) MAC_WHILE186(func, args)


#define MAC_WHILE188(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE188IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE188IN(func, args) MAC_WHILE187(func, args)


#define MAC_WHILE189(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE189IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE189IN(func, args) MAC_WHILE188(func, args)


#define MAC_WHILE190(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE190IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE190IN(func, args) MAC_WHILE189(func, args)


#define MAC_WHILE191(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE191IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE191IN(func, args) MAC_WHILE190(func, args)


#define MAC_WHILE192(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE192IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE192IN(func, args) MAC_WHILE191(func, args)


#define MAC_WHILE193(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE193IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE193IN(func, args) MAC_WHILE192(func, args)


#define MAC_WHILE194(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE194IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE194IN(func, args) MAC_WHILE193(func, args)


#define MAC_WHILE195(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE195IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE195IN(func, args) MAC_WHILE194(func, args)


#define MAC_WHILE196(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE196IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE196IN(func, args) MAC_WHILE195(func, args)


#define MAC_WHILE197(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE197IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE197IN(func, args) MAC_WHILE196(func, args)


#define MAC_WHILE198(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE198IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE198IN(func, args) MAC_WHILE197(func, args)


#define MAC_WHILE199(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE199IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE199IN(func, args) MAC_WHILE198(func, args)


#define MAC_WHILE200(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE200IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE200IN(func, args) MAC_WHILE199(func, args)


#define MAC_WHILE201(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE201IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE201IN(func, args) MAC_WHILE200(func, args)


#define MAC_WHILE202(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE202IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE202IN(func, args) MAC_WHILE201(func, args)


#define MAC_WHILE203(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE203IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE203IN(func, args) MAC_WHILE202(func, args)


#define MAC_WHILE204(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE204IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE204IN(func, args) MAC_WHILE203(func, args)


#define MAC_WHILE205(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE205IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE205IN(func, args) MAC_WHILE204(func, args)


#define MAC_WHILE206(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE206IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE206IN(func, args) MAC_WHILE205(func, args)


#define MAC_WHILE207(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE207IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE207IN(func, args) MAC_WHILE206(func, args)


#define MAC_WHILE208(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE208IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE208IN(func, args) MAC_WHILE207(func, args)


#define MAC_WHILE209(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE209IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE209IN(func, args) MAC_WHILE208(func, args)


#define MAC_WHILE210(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE210IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE210IN(func, args) MAC_WHILE209(func, args)


#define MAC_WHILE211(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE211IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE211IN(func, args) MAC_WHILE210(func, args)


#define MAC_WHILE212(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE212IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE212IN(func, args) MAC_WHILE211(func, args)


#define MAC_WHILE213(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE213IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE213IN(func, args) MAC_WHILE212(func, args)


#define MAC_WHILE214(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE214IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE214IN(func, args) MAC_WHILE213(func, args)


#define MAC_WHILE215(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE215IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE215IN(func, args) MAC_WHILE214(func, args)


#define MAC_WHILE216(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE216IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE216IN(func, args) MAC_WHILE215(func, args)


#define MAC_WHILE217(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE217IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE217IN(func, args) MAC_WHILE216(func, args)


#define MAC_WHILE218(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE218IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE218IN(func, args) MAC_WHILE217(func, args)


#define MAC_WHILE219(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE219IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE219IN(func, args) MAC_WHILE218(func, args)


#define MAC_WHILE220(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE220IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE220IN(func, args) MAC_WHILE219(func, args)


#define MAC_WHILE221(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE221IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE221IN(func, args) MAC_WHILE220(func, args)


#define MAC_WHILE222(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE222IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE222IN(func, args) MAC_WHILE221(func, args)


#define MAC_WHILE223(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE223IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE223IN(func, args) MAC_WHILE222(func, args)


#define MAC_WHILE224(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE224IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE224IN(func, args) MAC_WHILE223(func, args)


#define MAC_WHILE225(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE225IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE225IN(func, args) MAC_WHILE224(func, args)


#define MAC_WHILE226(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE226IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE226IN(func, args) MAC_WHILE225(func, args)


#define MAC_WHILE227(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE227IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE227IN(func, args) MAC_WHILE226(func, args)


#define MAC_WHILE228(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE228IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE228IN(func, args) MAC_WHILE227(func, args)


#define MAC_WHILE229(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE229IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE229IN(func, args) MAC_WHILE228(func, args)


#define MAC_WHILE230(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE230IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE230IN(func, args) MAC_WHILE229(func, args)


#define MAC_WHILE231(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE231IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE231IN(func, args) MAC_WHILE230(func, args)


#define MAC_WHILE232(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE232IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE232IN(func, args) MAC_WHILE231(func, args)


#define MAC_WHILE233(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE233IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE233IN(func, args) MAC_WHILE232(func, args)


#define MAC_WHILE234(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE234IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE234IN(func, args) MAC_WHILE233(func, args)


#define MAC_WHILE235(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE235IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE235IN(func, args) MAC_WHILE234(func, args)


#define MAC_WHILE236(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE236IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE236IN(func, args) MAC_WHILE235(func, args)


#define MAC_WHILE237(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE237IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE237IN(func, args) MAC_WHILE236(func, args)


#define MAC_WHILE238(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE238IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE238IN(func, args) MAC_WHILE237(func, args)


#define MAC_WHILE239(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE239IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE239IN(func, args) MAC_WHILE238(func, args)


#define MAC_WHILE240(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE240IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE240IN(func, args) MAC_WHILE239(func, args)


#define MAC_WHILE241(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE241IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE241IN(func, args) MAC_WHILE240(func, args)


#define MAC_WHILE242(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE242IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE242IN(func, args) MAC_WHILE241(func, args)


#define MAC_WHILE243(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE243IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE243IN(func, args) MAC_WHILE242(func, args)


#define MAC_WHILE244(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE244IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE244IN(func, args) MAC_WHILE243(func, args)


#define MAC_WHILE245(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE245IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE245IN(func, args) MAC_WHILE244(func, args)


#define MAC_WHILE246(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE246IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE246IN(func, args) MAC_WHILE245(func, args)


#define MAC_WHILE247(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE247IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE247IN(func, args) MAC_WHILE246(func, args)


#define MAC_WHILE248(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE248IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE248IN(func, args) MAC_WHILE247(func, args)


#define MAC_WHILE249(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE249IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE249IN(func, args) MAC_WHILE248(func, args)


#define MAC_WHILE250(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE250IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE250IN(func, args) MAC_WHILE249(func, args)


#define MAC_WHILE251(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE251IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE251IN(func, args) MAC_WHILE250(func, args)


#define MAC_WHILE252(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE252IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE252IN(func, args) MAC_WHILE251(func, args)


#define MAC_WHILE253(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE253IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE253IN(func, args) MAC_WHILE252(func, args)


#define MAC_WHILE254(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE254IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE254IN(func, args) MAC_WHILE253(func, args)


#define MAC_WHILE255(func, cond, acc, ...) MAC_IF(cond, MAC_WHILE255IN(func, func(acc, __VA_ARGS__)), acc)
#define MAC_WHILE255IN(func, args) MAC_WHILE254(func, args)

