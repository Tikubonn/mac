#include <stdio.h>
#include <stdlib.h>

#define test(formula)\
if (formula){\
fprintf(stdout, "[success] %s:%d %s\n", __FILE__, __LINE__, #formula);\
}\
else {\
fprintf(stdout, "[error] %s:%d %s\n", __FILE__, __LINE__, #formula);\
abort();\
}
