#define MAC_IF(cond, then, else) MAC_CONCAT(MAC_IF, MAC_BOOL(cond))(then, else)
#define MAC_IF0(then, else) else
#define MAC_IF1(then, else) then
