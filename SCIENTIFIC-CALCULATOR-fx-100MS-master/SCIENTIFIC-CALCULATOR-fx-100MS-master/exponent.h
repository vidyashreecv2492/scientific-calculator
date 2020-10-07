#include <stdio.h>

double expo(double x){
return 1+x+(double)x*x/2+(double)x*x*x/6+(double)x*x*x*x/24+(double)x*x*x*x*x/120+(double)x*x*x*x*x*x/720\
+(double)x*x*x*x*x*x*x/5040+(double)x*x*x*x*x*x*x*x/40320+(double)x*x*x*x*x*x*x*x*x/362880+(double)x*x*x*x*x*x*x*x*x*x/3628800\
+(double)x*x*x*x*x*x*x*x*x*x*x/39916800+(double)x*x*x*x*x*x*x*x*x*x*x*x/479001600+(double)x*x*x*x*x*x*x*x*x*x*x*x*x/6227020800;
}
