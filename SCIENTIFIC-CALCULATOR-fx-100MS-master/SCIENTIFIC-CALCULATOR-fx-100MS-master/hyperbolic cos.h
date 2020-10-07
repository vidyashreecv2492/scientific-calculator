#include <stdio.h>

double hyperbolic_cos(double x){
return 1+(float)x*x/2+(float)x*x*x*x/24+(float)x*x*x*x*x*x/720+(float)x*x*x*x*x*x*x*x/40320+(float)x*x*x*x*x*x*x*x*x*x/3628800;
}
