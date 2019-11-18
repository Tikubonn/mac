
#define MAC_DOTIMES(n, func, acc, ...) MAC_CONCAT(MAC_DOTIMES, n)(func, acc, __VA_ARGS__)
#define MAC_DOTIMES0(func, acc, ...) acc


#define MAC_DOTIMES1(func, acc, ...) MAC_DOTIMES1IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES1IN(func, args) MAC_DOTIMES0(func, args)


#define MAC_DOTIMES2(func, acc, ...) MAC_DOTIMES2IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES2IN(func, args) MAC_DOTIMES1(func, args)


#define MAC_DOTIMES3(func, acc, ...) MAC_DOTIMES3IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES3IN(func, args) MAC_DOTIMES2(func, args)


#define MAC_DOTIMES4(func, acc, ...) MAC_DOTIMES4IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES4IN(func, args) MAC_DOTIMES3(func, args)


#define MAC_DOTIMES5(func, acc, ...) MAC_DOTIMES5IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES5IN(func, args) MAC_DOTIMES4(func, args)


#define MAC_DOTIMES6(func, acc, ...) MAC_DOTIMES6IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES6IN(func, args) MAC_DOTIMES5(func, args)


#define MAC_DOTIMES7(func, acc, ...) MAC_DOTIMES7IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES7IN(func, args) MAC_DOTIMES6(func, args)


#define MAC_DOTIMES8(func, acc, ...) MAC_DOTIMES8IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES8IN(func, args) MAC_DOTIMES7(func, args)


#define MAC_DOTIMES9(func, acc, ...) MAC_DOTIMES9IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES9IN(func, args) MAC_DOTIMES8(func, args)


#define MAC_DOTIMES10(func, acc, ...) MAC_DOTIMES10IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES10IN(func, args) MAC_DOTIMES9(func, args)


#define MAC_DOTIMES11(func, acc, ...) MAC_DOTIMES11IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES11IN(func, args) MAC_DOTIMES10(func, args)


#define MAC_DOTIMES12(func, acc, ...) MAC_DOTIMES12IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES12IN(func, args) MAC_DOTIMES11(func, args)


#define MAC_DOTIMES13(func, acc, ...) MAC_DOTIMES13IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES13IN(func, args) MAC_DOTIMES12(func, args)


#define MAC_DOTIMES14(func, acc, ...) MAC_DOTIMES14IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES14IN(func, args) MAC_DOTIMES13(func, args)


#define MAC_DOTIMES15(func, acc, ...) MAC_DOTIMES15IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES15IN(func, args) MAC_DOTIMES14(func, args)


#define MAC_DOTIMES16(func, acc, ...) MAC_DOTIMES16IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES16IN(func, args) MAC_DOTIMES15(func, args)


#define MAC_DOTIMES17(func, acc, ...) MAC_DOTIMES17IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES17IN(func, args) MAC_DOTIMES16(func, args)


#define MAC_DOTIMES18(func, acc, ...) MAC_DOTIMES18IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES18IN(func, args) MAC_DOTIMES17(func, args)


#define MAC_DOTIMES19(func, acc, ...) MAC_DOTIMES19IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES19IN(func, args) MAC_DOTIMES18(func, args)


#define MAC_DOTIMES20(func, acc, ...) MAC_DOTIMES20IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES20IN(func, args) MAC_DOTIMES19(func, args)


#define MAC_DOTIMES21(func, acc, ...) MAC_DOTIMES21IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES21IN(func, args) MAC_DOTIMES20(func, args)


#define MAC_DOTIMES22(func, acc, ...) MAC_DOTIMES22IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES22IN(func, args) MAC_DOTIMES21(func, args)


#define MAC_DOTIMES23(func, acc, ...) MAC_DOTIMES23IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES23IN(func, args) MAC_DOTIMES22(func, args)


#define MAC_DOTIMES24(func, acc, ...) MAC_DOTIMES24IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES24IN(func, args) MAC_DOTIMES23(func, args)


#define MAC_DOTIMES25(func, acc, ...) MAC_DOTIMES25IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES25IN(func, args) MAC_DOTIMES24(func, args)


#define MAC_DOTIMES26(func, acc, ...) MAC_DOTIMES26IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES26IN(func, args) MAC_DOTIMES25(func, args)


#define MAC_DOTIMES27(func, acc, ...) MAC_DOTIMES27IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES27IN(func, args) MAC_DOTIMES26(func, args)


#define MAC_DOTIMES28(func, acc, ...) MAC_DOTIMES28IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES28IN(func, args) MAC_DOTIMES27(func, args)


#define MAC_DOTIMES29(func, acc, ...) MAC_DOTIMES29IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES29IN(func, args) MAC_DOTIMES28(func, args)


#define MAC_DOTIMES30(func, acc, ...) MAC_DOTIMES30IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES30IN(func, args) MAC_DOTIMES29(func, args)


#define MAC_DOTIMES31(func, acc, ...) MAC_DOTIMES31IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES31IN(func, args) MAC_DOTIMES30(func, args)


#define MAC_DOTIMES32(func, acc, ...) MAC_DOTIMES32IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES32IN(func, args) MAC_DOTIMES31(func, args)


#define MAC_DOTIMES33(func, acc, ...) MAC_DOTIMES33IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES33IN(func, args) MAC_DOTIMES32(func, args)


#define MAC_DOTIMES34(func, acc, ...) MAC_DOTIMES34IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES34IN(func, args) MAC_DOTIMES33(func, args)


#define MAC_DOTIMES35(func, acc, ...) MAC_DOTIMES35IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES35IN(func, args) MAC_DOTIMES34(func, args)


#define MAC_DOTIMES36(func, acc, ...) MAC_DOTIMES36IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES36IN(func, args) MAC_DOTIMES35(func, args)


#define MAC_DOTIMES37(func, acc, ...) MAC_DOTIMES37IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES37IN(func, args) MAC_DOTIMES36(func, args)


#define MAC_DOTIMES38(func, acc, ...) MAC_DOTIMES38IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES38IN(func, args) MAC_DOTIMES37(func, args)


#define MAC_DOTIMES39(func, acc, ...) MAC_DOTIMES39IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES39IN(func, args) MAC_DOTIMES38(func, args)


#define MAC_DOTIMES40(func, acc, ...) MAC_DOTIMES40IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES40IN(func, args) MAC_DOTIMES39(func, args)


#define MAC_DOTIMES41(func, acc, ...) MAC_DOTIMES41IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES41IN(func, args) MAC_DOTIMES40(func, args)


#define MAC_DOTIMES42(func, acc, ...) MAC_DOTIMES42IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES42IN(func, args) MAC_DOTIMES41(func, args)


#define MAC_DOTIMES43(func, acc, ...) MAC_DOTIMES43IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES43IN(func, args) MAC_DOTIMES42(func, args)


#define MAC_DOTIMES44(func, acc, ...) MAC_DOTIMES44IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES44IN(func, args) MAC_DOTIMES43(func, args)


#define MAC_DOTIMES45(func, acc, ...) MAC_DOTIMES45IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES45IN(func, args) MAC_DOTIMES44(func, args)


#define MAC_DOTIMES46(func, acc, ...) MAC_DOTIMES46IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES46IN(func, args) MAC_DOTIMES45(func, args)


#define MAC_DOTIMES47(func, acc, ...) MAC_DOTIMES47IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES47IN(func, args) MAC_DOTIMES46(func, args)


#define MAC_DOTIMES48(func, acc, ...) MAC_DOTIMES48IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES48IN(func, args) MAC_DOTIMES47(func, args)


#define MAC_DOTIMES49(func, acc, ...) MAC_DOTIMES49IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES49IN(func, args) MAC_DOTIMES48(func, args)


#define MAC_DOTIMES50(func, acc, ...) MAC_DOTIMES50IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES50IN(func, args) MAC_DOTIMES49(func, args)


#define MAC_DOTIMES51(func, acc, ...) MAC_DOTIMES51IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES51IN(func, args) MAC_DOTIMES50(func, args)


#define MAC_DOTIMES52(func, acc, ...) MAC_DOTIMES52IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES52IN(func, args) MAC_DOTIMES51(func, args)


#define MAC_DOTIMES53(func, acc, ...) MAC_DOTIMES53IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES53IN(func, args) MAC_DOTIMES52(func, args)


#define MAC_DOTIMES54(func, acc, ...) MAC_DOTIMES54IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES54IN(func, args) MAC_DOTIMES53(func, args)


#define MAC_DOTIMES55(func, acc, ...) MAC_DOTIMES55IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES55IN(func, args) MAC_DOTIMES54(func, args)


#define MAC_DOTIMES56(func, acc, ...) MAC_DOTIMES56IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES56IN(func, args) MAC_DOTIMES55(func, args)


#define MAC_DOTIMES57(func, acc, ...) MAC_DOTIMES57IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES57IN(func, args) MAC_DOTIMES56(func, args)


#define MAC_DOTIMES58(func, acc, ...) MAC_DOTIMES58IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES58IN(func, args) MAC_DOTIMES57(func, args)


#define MAC_DOTIMES59(func, acc, ...) MAC_DOTIMES59IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES59IN(func, args) MAC_DOTIMES58(func, args)


#define MAC_DOTIMES60(func, acc, ...) MAC_DOTIMES60IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES60IN(func, args) MAC_DOTIMES59(func, args)


#define MAC_DOTIMES61(func, acc, ...) MAC_DOTIMES61IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES61IN(func, args) MAC_DOTIMES60(func, args)


#define MAC_DOTIMES62(func, acc, ...) MAC_DOTIMES62IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES62IN(func, args) MAC_DOTIMES61(func, args)


#define MAC_DOTIMES63(func, acc, ...) MAC_DOTIMES63IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES63IN(func, args) MAC_DOTIMES62(func, args)


#define MAC_DOTIMES64(func, acc, ...) MAC_DOTIMES64IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES64IN(func, args) MAC_DOTIMES63(func, args)


#define MAC_DOTIMES65(func, acc, ...) MAC_DOTIMES65IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES65IN(func, args) MAC_DOTIMES64(func, args)


#define MAC_DOTIMES66(func, acc, ...) MAC_DOTIMES66IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES66IN(func, args) MAC_DOTIMES65(func, args)


#define MAC_DOTIMES67(func, acc, ...) MAC_DOTIMES67IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES67IN(func, args) MAC_DOTIMES66(func, args)


#define MAC_DOTIMES68(func, acc, ...) MAC_DOTIMES68IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES68IN(func, args) MAC_DOTIMES67(func, args)


#define MAC_DOTIMES69(func, acc, ...) MAC_DOTIMES69IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES69IN(func, args) MAC_DOTIMES68(func, args)


#define MAC_DOTIMES70(func, acc, ...) MAC_DOTIMES70IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES70IN(func, args) MAC_DOTIMES69(func, args)


#define MAC_DOTIMES71(func, acc, ...) MAC_DOTIMES71IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES71IN(func, args) MAC_DOTIMES70(func, args)


#define MAC_DOTIMES72(func, acc, ...) MAC_DOTIMES72IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES72IN(func, args) MAC_DOTIMES71(func, args)


#define MAC_DOTIMES73(func, acc, ...) MAC_DOTIMES73IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES73IN(func, args) MAC_DOTIMES72(func, args)


#define MAC_DOTIMES74(func, acc, ...) MAC_DOTIMES74IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES74IN(func, args) MAC_DOTIMES73(func, args)


#define MAC_DOTIMES75(func, acc, ...) MAC_DOTIMES75IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES75IN(func, args) MAC_DOTIMES74(func, args)


#define MAC_DOTIMES76(func, acc, ...) MAC_DOTIMES76IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES76IN(func, args) MAC_DOTIMES75(func, args)


#define MAC_DOTIMES77(func, acc, ...) MAC_DOTIMES77IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES77IN(func, args) MAC_DOTIMES76(func, args)


#define MAC_DOTIMES78(func, acc, ...) MAC_DOTIMES78IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES78IN(func, args) MAC_DOTIMES77(func, args)


#define MAC_DOTIMES79(func, acc, ...) MAC_DOTIMES79IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES79IN(func, args) MAC_DOTIMES78(func, args)


#define MAC_DOTIMES80(func, acc, ...) MAC_DOTIMES80IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES80IN(func, args) MAC_DOTIMES79(func, args)


#define MAC_DOTIMES81(func, acc, ...) MAC_DOTIMES81IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES81IN(func, args) MAC_DOTIMES80(func, args)


#define MAC_DOTIMES82(func, acc, ...) MAC_DOTIMES82IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES82IN(func, args) MAC_DOTIMES81(func, args)


#define MAC_DOTIMES83(func, acc, ...) MAC_DOTIMES83IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES83IN(func, args) MAC_DOTIMES82(func, args)


#define MAC_DOTIMES84(func, acc, ...) MAC_DOTIMES84IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES84IN(func, args) MAC_DOTIMES83(func, args)


#define MAC_DOTIMES85(func, acc, ...) MAC_DOTIMES85IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES85IN(func, args) MAC_DOTIMES84(func, args)


#define MAC_DOTIMES86(func, acc, ...) MAC_DOTIMES86IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES86IN(func, args) MAC_DOTIMES85(func, args)


#define MAC_DOTIMES87(func, acc, ...) MAC_DOTIMES87IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES87IN(func, args) MAC_DOTIMES86(func, args)


#define MAC_DOTIMES88(func, acc, ...) MAC_DOTIMES88IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES88IN(func, args) MAC_DOTIMES87(func, args)


#define MAC_DOTIMES89(func, acc, ...) MAC_DOTIMES89IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES89IN(func, args) MAC_DOTIMES88(func, args)


#define MAC_DOTIMES90(func, acc, ...) MAC_DOTIMES90IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES90IN(func, args) MAC_DOTIMES89(func, args)


#define MAC_DOTIMES91(func, acc, ...) MAC_DOTIMES91IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES91IN(func, args) MAC_DOTIMES90(func, args)


#define MAC_DOTIMES92(func, acc, ...) MAC_DOTIMES92IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES92IN(func, args) MAC_DOTIMES91(func, args)


#define MAC_DOTIMES93(func, acc, ...) MAC_DOTIMES93IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES93IN(func, args) MAC_DOTIMES92(func, args)


#define MAC_DOTIMES94(func, acc, ...) MAC_DOTIMES94IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES94IN(func, args) MAC_DOTIMES93(func, args)


#define MAC_DOTIMES95(func, acc, ...) MAC_DOTIMES95IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES95IN(func, args) MAC_DOTIMES94(func, args)


#define MAC_DOTIMES96(func, acc, ...) MAC_DOTIMES96IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES96IN(func, args) MAC_DOTIMES95(func, args)


#define MAC_DOTIMES97(func, acc, ...) MAC_DOTIMES97IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES97IN(func, args) MAC_DOTIMES96(func, args)


#define MAC_DOTIMES98(func, acc, ...) MAC_DOTIMES98IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES98IN(func, args) MAC_DOTIMES97(func, args)


#define MAC_DOTIMES99(func, acc, ...) MAC_DOTIMES99IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES99IN(func, args) MAC_DOTIMES98(func, args)


#define MAC_DOTIMES100(func, acc, ...) MAC_DOTIMES100IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES100IN(func, args) MAC_DOTIMES99(func, args)


#define MAC_DOTIMES101(func, acc, ...) MAC_DOTIMES101IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES101IN(func, args) MAC_DOTIMES100(func, args)


#define MAC_DOTIMES102(func, acc, ...) MAC_DOTIMES102IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES102IN(func, args) MAC_DOTIMES101(func, args)


#define MAC_DOTIMES103(func, acc, ...) MAC_DOTIMES103IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES103IN(func, args) MAC_DOTIMES102(func, args)


#define MAC_DOTIMES104(func, acc, ...) MAC_DOTIMES104IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES104IN(func, args) MAC_DOTIMES103(func, args)


#define MAC_DOTIMES105(func, acc, ...) MAC_DOTIMES105IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES105IN(func, args) MAC_DOTIMES104(func, args)


#define MAC_DOTIMES106(func, acc, ...) MAC_DOTIMES106IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES106IN(func, args) MAC_DOTIMES105(func, args)


#define MAC_DOTIMES107(func, acc, ...) MAC_DOTIMES107IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES107IN(func, args) MAC_DOTIMES106(func, args)


#define MAC_DOTIMES108(func, acc, ...) MAC_DOTIMES108IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES108IN(func, args) MAC_DOTIMES107(func, args)


#define MAC_DOTIMES109(func, acc, ...) MAC_DOTIMES109IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES109IN(func, args) MAC_DOTIMES108(func, args)


#define MAC_DOTIMES110(func, acc, ...) MAC_DOTIMES110IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES110IN(func, args) MAC_DOTIMES109(func, args)


#define MAC_DOTIMES111(func, acc, ...) MAC_DOTIMES111IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES111IN(func, args) MAC_DOTIMES110(func, args)


#define MAC_DOTIMES112(func, acc, ...) MAC_DOTIMES112IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES112IN(func, args) MAC_DOTIMES111(func, args)


#define MAC_DOTIMES113(func, acc, ...) MAC_DOTIMES113IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES113IN(func, args) MAC_DOTIMES112(func, args)


#define MAC_DOTIMES114(func, acc, ...) MAC_DOTIMES114IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES114IN(func, args) MAC_DOTIMES113(func, args)


#define MAC_DOTIMES115(func, acc, ...) MAC_DOTIMES115IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES115IN(func, args) MAC_DOTIMES114(func, args)


#define MAC_DOTIMES116(func, acc, ...) MAC_DOTIMES116IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES116IN(func, args) MAC_DOTIMES115(func, args)


#define MAC_DOTIMES117(func, acc, ...) MAC_DOTIMES117IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES117IN(func, args) MAC_DOTIMES116(func, args)


#define MAC_DOTIMES118(func, acc, ...) MAC_DOTIMES118IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES118IN(func, args) MAC_DOTIMES117(func, args)


#define MAC_DOTIMES119(func, acc, ...) MAC_DOTIMES119IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES119IN(func, args) MAC_DOTIMES118(func, args)


#define MAC_DOTIMES120(func, acc, ...) MAC_DOTIMES120IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES120IN(func, args) MAC_DOTIMES119(func, args)


#define MAC_DOTIMES121(func, acc, ...) MAC_DOTIMES121IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES121IN(func, args) MAC_DOTIMES120(func, args)


#define MAC_DOTIMES122(func, acc, ...) MAC_DOTIMES122IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES122IN(func, args) MAC_DOTIMES121(func, args)


#define MAC_DOTIMES123(func, acc, ...) MAC_DOTIMES123IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES123IN(func, args) MAC_DOTIMES122(func, args)


#define MAC_DOTIMES124(func, acc, ...) MAC_DOTIMES124IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES124IN(func, args) MAC_DOTIMES123(func, args)


#define MAC_DOTIMES125(func, acc, ...) MAC_DOTIMES125IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES125IN(func, args) MAC_DOTIMES124(func, args)


#define MAC_DOTIMES126(func, acc, ...) MAC_DOTIMES126IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES126IN(func, args) MAC_DOTIMES125(func, args)


#define MAC_DOTIMES127(func, acc, ...) MAC_DOTIMES127IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES127IN(func, args) MAC_DOTIMES126(func, args)


#define MAC_DOTIMES128(func, acc, ...) MAC_DOTIMES128IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES128IN(func, args) MAC_DOTIMES127(func, args)


#define MAC_DOTIMES129(func, acc, ...) MAC_DOTIMES129IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES129IN(func, args) MAC_DOTIMES128(func, args)


#define MAC_DOTIMES130(func, acc, ...) MAC_DOTIMES130IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES130IN(func, args) MAC_DOTIMES129(func, args)


#define MAC_DOTIMES131(func, acc, ...) MAC_DOTIMES131IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES131IN(func, args) MAC_DOTIMES130(func, args)


#define MAC_DOTIMES132(func, acc, ...) MAC_DOTIMES132IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES132IN(func, args) MAC_DOTIMES131(func, args)


#define MAC_DOTIMES133(func, acc, ...) MAC_DOTIMES133IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES133IN(func, args) MAC_DOTIMES132(func, args)


#define MAC_DOTIMES134(func, acc, ...) MAC_DOTIMES134IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES134IN(func, args) MAC_DOTIMES133(func, args)


#define MAC_DOTIMES135(func, acc, ...) MAC_DOTIMES135IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES135IN(func, args) MAC_DOTIMES134(func, args)


#define MAC_DOTIMES136(func, acc, ...) MAC_DOTIMES136IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES136IN(func, args) MAC_DOTIMES135(func, args)


#define MAC_DOTIMES137(func, acc, ...) MAC_DOTIMES137IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES137IN(func, args) MAC_DOTIMES136(func, args)


#define MAC_DOTIMES138(func, acc, ...) MAC_DOTIMES138IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES138IN(func, args) MAC_DOTIMES137(func, args)


#define MAC_DOTIMES139(func, acc, ...) MAC_DOTIMES139IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES139IN(func, args) MAC_DOTIMES138(func, args)


#define MAC_DOTIMES140(func, acc, ...) MAC_DOTIMES140IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES140IN(func, args) MAC_DOTIMES139(func, args)


#define MAC_DOTIMES141(func, acc, ...) MAC_DOTIMES141IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES141IN(func, args) MAC_DOTIMES140(func, args)


#define MAC_DOTIMES142(func, acc, ...) MAC_DOTIMES142IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES142IN(func, args) MAC_DOTIMES141(func, args)


#define MAC_DOTIMES143(func, acc, ...) MAC_DOTIMES143IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES143IN(func, args) MAC_DOTIMES142(func, args)


#define MAC_DOTIMES144(func, acc, ...) MAC_DOTIMES144IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES144IN(func, args) MAC_DOTIMES143(func, args)


#define MAC_DOTIMES145(func, acc, ...) MAC_DOTIMES145IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES145IN(func, args) MAC_DOTIMES144(func, args)


#define MAC_DOTIMES146(func, acc, ...) MAC_DOTIMES146IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES146IN(func, args) MAC_DOTIMES145(func, args)


#define MAC_DOTIMES147(func, acc, ...) MAC_DOTIMES147IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES147IN(func, args) MAC_DOTIMES146(func, args)


#define MAC_DOTIMES148(func, acc, ...) MAC_DOTIMES148IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES148IN(func, args) MAC_DOTIMES147(func, args)


#define MAC_DOTIMES149(func, acc, ...) MAC_DOTIMES149IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES149IN(func, args) MAC_DOTIMES148(func, args)


#define MAC_DOTIMES150(func, acc, ...) MAC_DOTIMES150IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES150IN(func, args) MAC_DOTIMES149(func, args)


#define MAC_DOTIMES151(func, acc, ...) MAC_DOTIMES151IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES151IN(func, args) MAC_DOTIMES150(func, args)


#define MAC_DOTIMES152(func, acc, ...) MAC_DOTIMES152IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES152IN(func, args) MAC_DOTIMES151(func, args)


#define MAC_DOTIMES153(func, acc, ...) MAC_DOTIMES153IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES153IN(func, args) MAC_DOTIMES152(func, args)


#define MAC_DOTIMES154(func, acc, ...) MAC_DOTIMES154IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES154IN(func, args) MAC_DOTIMES153(func, args)


#define MAC_DOTIMES155(func, acc, ...) MAC_DOTIMES155IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES155IN(func, args) MAC_DOTIMES154(func, args)


#define MAC_DOTIMES156(func, acc, ...) MAC_DOTIMES156IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES156IN(func, args) MAC_DOTIMES155(func, args)


#define MAC_DOTIMES157(func, acc, ...) MAC_DOTIMES157IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES157IN(func, args) MAC_DOTIMES156(func, args)


#define MAC_DOTIMES158(func, acc, ...) MAC_DOTIMES158IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES158IN(func, args) MAC_DOTIMES157(func, args)


#define MAC_DOTIMES159(func, acc, ...) MAC_DOTIMES159IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES159IN(func, args) MAC_DOTIMES158(func, args)


#define MAC_DOTIMES160(func, acc, ...) MAC_DOTIMES160IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES160IN(func, args) MAC_DOTIMES159(func, args)


#define MAC_DOTIMES161(func, acc, ...) MAC_DOTIMES161IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES161IN(func, args) MAC_DOTIMES160(func, args)


#define MAC_DOTIMES162(func, acc, ...) MAC_DOTIMES162IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES162IN(func, args) MAC_DOTIMES161(func, args)


#define MAC_DOTIMES163(func, acc, ...) MAC_DOTIMES163IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES163IN(func, args) MAC_DOTIMES162(func, args)


#define MAC_DOTIMES164(func, acc, ...) MAC_DOTIMES164IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES164IN(func, args) MAC_DOTIMES163(func, args)


#define MAC_DOTIMES165(func, acc, ...) MAC_DOTIMES165IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES165IN(func, args) MAC_DOTIMES164(func, args)


#define MAC_DOTIMES166(func, acc, ...) MAC_DOTIMES166IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES166IN(func, args) MAC_DOTIMES165(func, args)


#define MAC_DOTIMES167(func, acc, ...) MAC_DOTIMES167IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES167IN(func, args) MAC_DOTIMES166(func, args)


#define MAC_DOTIMES168(func, acc, ...) MAC_DOTIMES168IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES168IN(func, args) MAC_DOTIMES167(func, args)


#define MAC_DOTIMES169(func, acc, ...) MAC_DOTIMES169IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES169IN(func, args) MAC_DOTIMES168(func, args)


#define MAC_DOTIMES170(func, acc, ...) MAC_DOTIMES170IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES170IN(func, args) MAC_DOTIMES169(func, args)


#define MAC_DOTIMES171(func, acc, ...) MAC_DOTIMES171IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES171IN(func, args) MAC_DOTIMES170(func, args)


#define MAC_DOTIMES172(func, acc, ...) MAC_DOTIMES172IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES172IN(func, args) MAC_DOTIMES171(func, args)


#define MAC_DOTIMES173(func, acc, ...) MAC_DOTIMES173IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES173IN(func, args) MAC_DOTIMES172(func, args)


#define MAC_DOTIMES174(func, acc, ...) MAC_DOTIMES174IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES174IN(func, args) MAC_DOTIMES173(func, args)


#define MAC_DOTIMES175(func, acc, ...) MAC_DOTIMES175IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES175IN(func, args) MAC_DOTIMES174(func, args)


#define MAC_DOTIMES176(func, acc, ...) MAC_DOTIMES176IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES176IN(func, args) MAC_DOTIMES175(func, args)


#define MAC_DOTIMES177(func, acc, ...) MAC_DOTIMES177IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES177IN(func, args) MAC_DOTIMES176(func, args)


#define MAC_DOTIMES178(func, acc, ...) MAC_DOTIMES178IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES178IN(func, args) MAC_DOTIMES177(func, args)


#define MAC_DOTIMES179(func, acc, ...) MAC_DOTIMES179IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES179IN(func, args) MAC_DOTIMES178(func, args)


#define MAC_DOTIMES180(func, acc, ...) MAC_DOTIMES180IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES180IN(func, args) MAC_DOTIMES179(func, args)


#define MAC_DOTIMES181(func, acc, ...) MAC_DOTIMES181IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES181IN(func, args) MAC_DOTIMES180(func, args)


#define MAC_DOTIMES182(func, acc, ...) MAC_DOTIMES182IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES182IN(func, args) MAC_DOTIMES181(func, args)


#define MAC_DOTIMES183(func, acc, ...) MAC_DOTIMES183IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES183IN(func, args) MAC_DOTIMES182(func, args)


#define MAC_DOTIMES184(func, acc, ...) MAC_DOTIMES184IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES184IN(func, args) MAC_DOTIMES183(func, args)


#define MAC_DOTIMES185(func, acc, ...) MAC_DOTIMES185IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES185IN(func, args) MAC_DOTIMES184(func, args)


#define MAC_DOTIMES186(func, acc, ...) MAC_DOTIMES186IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES186IN(func, args) MAC_DOTIMES185(func, args)


#define MAC_DOTIMES187(func, acc, ...) MAC_DOTIMES187IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES187IN(func, args) MAC_DOTIMES186(func, args)


#define MAC_DOTIMES188(func, acc, ...) MAC_DOTIMES188IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES188IN(func, args) MAC_DOTIMES187(func, args)


#define MAC_DOTIMES189(func, acc, ...) MAC_DOTIMES189IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES189IN(func, args) MAC_DOTIMES188(func, args)


#define MAC_DOTIMES190(func, acc, ...) MAC_DOTIMES190IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES190IN(func, args) MAC_DOTIMES189(func, args)


#define MAC_DOTIMES191(func, acc, ...) MAC_DOTIMES191IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES191IN(func, args) MAC_DOTIMES190(func, args)


#define MAC_DOTIMES192(func, acc, ...) MAC_DOTIMES192IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES192IN(func, args) MAC_DOTIMES191(func, args)


#define MAC_DOTIMES193(func, acc, ...) MAC_DOTIMES193IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES193IN(func, args) MAC_DOTIMES192(func, args)


#define MAC_DOTIMES194(func, acc, ...) MAC_DOTIMES194IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES194IN(func, args) MAC_DOTIMES193(func, args)


#define MAC_DOTIMES195(func, acc, ...) MAC_DOTIMES195IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES195IN(func, args) MAC_DOTIMES194(func, args)


#define MAC_DOTIMES196(func, acc, ...) MAC_DOTIMES196IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES196IN(func, args) MAC_DOTIMES195(func, args)


#define MAC_DOTIMES197(func, acc, ...) MAC_DOTIMES197IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES197IN(func, args) MAC_DOTIMES196(func, args)


#define MAC_DOTIMES198(func, acc, ...) MAC_DOTIMES198IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES198IN(func, args) MAC_DOTIMES197(func, args)


#define MAC_DOTIMES199(func, acc, ...) MAC_DOTIMES199IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES199IN(func, args) MAC_DOTIMES198(func, args)


#define MAC_DOTIMES200(func, acc, ...) MAC_DOTIMES200IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES200IN(func, args) MAC_DOTIMES199(func, args)


#define MAC_DOTIMES201(func, acc, ...) MAC_DOTIMES201IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES201IN(func, args) MAC_DOTIMES200(func, args)


#define MAC_DOTIMES202(func, acc, ...) MAC_DOTIMES202IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES202IN(func, args) MAC_DOTIMES201(func, args)


#define MAC_DOTIMES203(func, acc, ...) MAC_DOTIMES203IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES203IN(func, args) MAC_DOTIMES202(func, args)


#define MAC_DOTIMES204(func, acc, ...) MAC_DOTIMES204IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES204IN(func, args) MAC_DOTIMES203(func, args)


#define MAC_DOTIMES205(func, acc, ...) MAC_DOTIMES205IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES205IN(func, args) MAC_DOTIMES204(func, args)


#define MAC_DOTIMES206(func, acc, ...) MAC_DOTIMES206IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES206IN(func, args) MAC_DOTIMES205(func, args)


#define MAC_DOTIMES207(func, acc, ...) MAC_DOTIMES207IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES207IN(func, args) MAC_DOTIMES206(func, args)


#define MAC_DOTIMES208(func, acc, ...) MAC_DOTIMES208IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES208IN(func, args) MAC_DOTIMES207(func, args)


#define MAC_DOTIMES209(func, acc, ...) MAC_DOTIMES209IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES209IN(func, args) MAC_DOTIMES208(func, args)


#define MAC_DOTIMES210(func, acc, ...) MAC_DOTIMES210IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES210IN(func, args) MAC_DOTIMES209(func, args)


#define MAC_DOTIMES211(func, acc, ...) MAC_DOTIMES211IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES211IN(func, args) MAC_DOTIMES210(func, args)


#define MAC_DOTIMES212(func, acc, ...) MAC_DOTIMES212IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES212IN(func, args) MAC_DOTIMES211(func, args)


#define MAC_DOTIMES213(func, acc, ...) MAC_DOTIMES213IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES213IN(func, args) MAC_DOTIMES212(func, args)


#define MAC_DOTIMES214(func, acc, ...) MAC_DOTIMES214IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES214IN(func, args) MAC_DOTIMES213(func, args)


#define MAC_DOTIMES215(func, acc, ...) MAC_DOTIMES215IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES215IN(func, args) MAC_DOTIMES214(func, args)


#define MAC_DOTIMES216(func, acc, ...) MAC_DOTIMES216IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES216IN(func, args) MAC_DOTIMES215(func, args)


#define MAC_DOTIMES217(func, acc, ...) MAC_DOTIMES217IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES217IN(func, args) MAC_DOTIMES216(func, args)


#define MAC_DOTIMES218(func, acc, ...) MAC_DOTIMES218IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES218IN(func, args) MAC_DOTIMES217(func, args)


#define MAC_DOTIMES219(func, acc, ...) MAC_DOTIMES219IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES219IN(func, args) MAC_DOTIMES218(func, args)


#define MAC_DOTIMES220(func, acc, ...) MAC_DOTIMES220IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES220IN(func, args) MAC_DOTIMES219(func, args)


#define MAC_DOTIMES221(func, acc, ...) MAC_DOTIMES221IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES221IN(func, args) MAC_DOTIMES220(func, args)


#define MAC_DOTIMES222(func, acc, ...) MAC_DOTIMES222IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES222IN(func, args) MAC_DOTIMES221(func, args)


#define MAC_DOTIMES223(func, acc, ...) MAC_DOTIMES223IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES223IN(func, args) MAC_DOTIMES222(func, args)


#define MAC_DOTIMES224(func, acc, ...) MAC_DOTIMES224IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES224IN(func, args) MAC_DOTIMES223(func, args)


#define MAC_DOTIMES225(func, acc, ...) MAC_DOTIMES225IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES225IN(func, args) MAC_DOTIMES224(func, args)


#define MAC_DOTIMES226(func, acc, ...) MAC_DOTIMES226IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES226IN(func, args) MAC_DOTIMES225(func, args)


#define MAC_DOTIMES227(func, acc, ...) MAC_DOTIMES227IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES227IN(func, args) MAC_DOTIMES226(func, args)


#define MAC_DOTIMES228(func, acc, ...) MAC_DOTIMES228IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES228IN(func, args) MAC_DOTIMES227(func, args)


#define MAC_DOTIMES229(func, acc, ...) MAC_DOTIMES229IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES229IN(func, args) MAC_DOTIMES228(func, args)


#define MAC_DOTIMES230(func, acc, ...) MAC_DOTIMES230IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES230IN(func, args) MAC_DOTIMES229(func, args)


#define MAC_DOTIMES231(func, acc, ...) MAC_DOTIMES231IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES231IN(func, args) MAC_DOTIMES230(func, args)


#define MAC_DOTIMES232(func, acc, ...) MAC_DOTIMES232IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES232IN(func, args) MAC_DOTIMES231(func, args)


#define MAC_DOTIMES233(func, acc, ...) MAC_DOTIMES233IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES233IN(func, args) MAC_DOTIMES232(func, args)


#define MAC_DOTIMES234(func, acc, ...) MAC_DOTIMES234IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES234IN(func, args) MAC_DOTIMES233(func, args)


#define MAC_DOTIMES235(func, acc, ...) MAC_DOTIMES235IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES235IN(func, args) MAC_DOTIMES234(func, args)


#define MAC_DOTIMES236(func, acc, ...) MAC_DOTIMES236IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES236IN(func, args) MAC_DOTIMES235(func, args)


#define MAC_DOTIMES237(func, acc, ...) MAC_DOTIMES237IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES237IN(func, args) MAC_DOTIMES236(func, args)


#define MAC_DOTIMES238(func, acc, ...) MAC_DOTIMES238IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES238IN(func, args) MAC_DOTIMES237(func, args)


#define MAC_DOTIMES239(func, acc, ...) MAC_DOTIMES239IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES239IN(func, args) MAC_DOTIMES238(func, args)


#define MAC_DOTIMES240(func, acc, ...) MAC_DOTIMES240IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES240IN(func, args) MAC_DOTIMES239(func, args)


#define MAC_DOTIMES241(func, acc, ...) MAC_DOTIMES241IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES241IN(func, args) MAC_DOTIMES240(func, args)


#define MAC_DOTIMES242(func, acc, ...) MAC_DOTIMES242IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES242IN(func, args) MAC_DOTIMES241(func, args)


#define MAC_DOTIMES243(func, acc, ...) MAC_DOTIMES243IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES243IN(func, args) MAC_DOTIMES242(func, args)


#define MAC_DOTIMES244(func, acc, ...) MAC_DOTIMES244IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES244IN(func, args) MAC_DOTIMES243(func, args)


#define MAC_DOTIMES245(func, acc, ...) MAC_DOTIMES245IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES245IN(func, args) MAC_DOTIMES244(func, args)


#define MAC_DOTIMES246(func, acc, ...) MAC_DOTIMES246IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES246IN(func, args) MAC_DOTIMES245(func, args)


#define MAC_DOTIMES247(func, acc, ...) MAC_DOTIMES247IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES247IN(func, args) MAC_DOTIMES246(func, args)


#define MAC_DOTIMES248(func, acc, ...) MAC_DOTIMES248IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES248IN(func, args) MAC_DOTIMES247(func, args)


#define MAC_DOTIMES249(func, acc, ...) MAC_DOTIMES249IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES249IN(func, args) MAC_DOTIMES248(func, args)


#define MAC_DOTIMES250(func, acc, ...) MAC_DOTIMES250IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES250IN(func, args) MAC_DOTIMES249(func, args)


#define MAC_DOTIMES251(func, acc, ...) MAC_DOTIMES251IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES251IN(func, args) MAC_DOTIMES250(func, args)


#define MAC_DOTIMES252(func, acc, ...) MAC_DOTIMES252IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES252IN(func, args) MAC_DOTIMES251(func, args)


#define MAC_DOTIMES253(func, acc, ...) MAC_DOTIMES253IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES253IN(func, args) MAC_DOTIMES252(func, args)


#define MAC_DOTIMES254(func, acc, ...) MAC_DOTIMES254IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES254IN(func, args) MAC_DOTIMES253(func, args)


#define MAC_DOTIMES255(func, acc, ...) MAC_DOTIMES255IN(func, func(acc, __VA_ARGS__))
#define MAC_DOTIMES255IN(func, args) MAC_DOTIMES254(func, args)

