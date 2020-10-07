#include <stdio.h>

double hyperbolic_sin(double x){
return (x+(double)x*x*x/6+(double)x*x*x*x*x/120+(double)x*x*x*x*x*x*x/5040+(double)x*x*x*x*x*x*x*x*x/362880);
}
